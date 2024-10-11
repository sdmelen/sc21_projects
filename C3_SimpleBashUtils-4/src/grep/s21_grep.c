#include "s21_grep.h"

int main(int argc, char *argv[]) {
  char *similarities = (char *)malloc(256 * sizeof(char));
  if (similarities == NULL) {
    printf("memory for the array cannot be allocated");
  } else {
    strcpy(similarities, "");
  }

  int files_n = 10;
  char **files = malloc(files_n * sizeof(char *));
  if (files == NULL) {
    printf("memory for the array cannot be allocated");
  }
  Flags flags = Parser(argc, argv, similarities, files);
  if (flags.error == false) {
    search(flags, similarities, files);
  }
  free(similarities);
  for (int i = 0; i < flags.fileIndex; i++) {
    free(files[i]);
  }
  free(files);
  return 0;
}

void search(Flags flags, char *similarities, char **files) {
  regex_t preg;
  int reti = regcomp(&preg, similarities, flags.regex_flag);
  if (reti) {
    fprintf(stderr, "Can't compile regular expression\n");
  }
  for (int i = 0; i < flags.fileIndex; i++) {
    FILE *file = fopen(files[i], "r");
    if (file == NULL) {
      if (flags.s == false) {
        fprintf(stderr, "grep: %s: No such file or directory\n", files[i]);
      }
      continue;
    } else {
      search_in_File(file, flags, &preg, files[i]);
    }
    fclose(file);
  }
  regfree(&preg);
}

void search_in_File(FILE *file, Flags flags, regex_t *preg, char *files) {
  int c_counter = 0;
  int linenumber = 1;
  int lkey = 0;
  char line[MAX_L_LENGTH];
  regmatch_t match;
  while (fgets(line, MAX_L_LENGTH, file) != NULL) {
    line[strcspn(line, "\n")] = 0;
    if (regexec(preg, line, 1, &match, 0) == 0 && flags.v == false) {
      c_counter++;
      if (flags.c == false && flags.l == false) {
        File_name(flags, files);
        Line_number(flags, linenumber);
        if (flags.o == false) {
          printf("%s\n", line);
        } else {
          Flag_o(preg, line);
        }
      }
      lkey = 1;
    } else if (regexec(preg, line, 1, &match, 0) != 0 && flags.v == true) {
      c_counter++;
      if (flags.c == false && flags.l == false) {
        File_name(flags, files);
        Line_number(flags, linenumber);
        printf("%s\n", line);
      }
      lkey = 1;
    }

    linenumber++;
  }

  Flag_el(flags, c_counter, files, lkey);
}

void Flag_o(regex_t *preg, char *line) {
  int offset = 0;
  regmatch_t match;
  while (regexec(preg, line + offset, 1, &match, 0) == 0) {
    printf("%.*s\n", (int)(match.rm_eo - match.rm_so),
           line + offset + match.rm_so);
    offset += match.rm_eo;
    if (match.rm_so == -1) {
      break;
    }
  }
}

void Flag_el(Flags flags, int c_counter, char *files, int lkey) {
  if (flags.c == true && flags.l == false) {
    File_name(flags, files);
    printf("%d\n", c_counter);
  } else if (flags.c == true && flags.l == true) {
    File_name(flags, files);
    if (lkey == 1) {
      printf("1\n");
    } else {
      printf("0\n");
    }
  }
  if (flags.l == true && lkey == 1) {
    printf("%s\n", files);
  }
}

void File_name(Flags flags, char *files) {
  if (flags.fileIndex > 1 && flags.h == false) {
    printf("%s:", files);
  }
}

void Line_number(Flags flags, int linenumber) {
  if (flags.n == true) {
    printf("%d:", linenumber);
  }
}

Flags Parser(int argc, char *argv[], char *similarities, char **files) {
  Flags flags = {0,     false, false, false, false, false, false,
                 false, false, false, false, false, 0,     0};
  int currentFlag;
  while ((currentFlag = getopt_long(argc, argv, "e:ivclnhsf:o", NULL, 0)) !=
         -1) {
    switch (currentFlag) {
      case 'e':
        Flag_e(&flags, similarities);
        break;
      case 'i':
        flags.regex_flag |= REG_ICASE;
        break;
      case 'v':
        flags.v = true;
        break;
      case 'c':
        flags.c = true;
        break;
      case 'l':
        flags.l = true;
        break;
      case 'n':
        flags.n = true;
        break;
      case 'h':
        flags.h = true;
        break;
      case 's':
        flags.s = true;
        break;
      case 'f':
        Flag_f(&flags, similarities);
        break;
      case 'o':
        flags.o = true;
        break;
      case '?':
        flags.error = true;
        break;
      default:
        break;
    }
  }
  MFile(&flags, files, argc, argv);
  ProcArgs(argc, argv, &flags, similarities, files);
  return flags;
}

void MFile(Flags *flags, char **files, int argc, char *argv[]) {
  if ((*flags).e || (*flags).f) {
    (*flags).fileIndex = argc - optind;
    if ((*flags).fileIndex > 0) {
      for (int i = 0; i < (*flags).fileIndex; i++) {
        files[i] = strdup(argv[optind + i]);
      }
    }
  }
}

void ProcArgs(int argc, char *argv[], Flags *flags, char *similarities,
              char **files) {
  if ((*flags).e == false && (*flags).f == false) {
    bool simSet = false;
    for (int i = 1; i < argc; i++) {
      files[(*flags).fileIndex] = NULL;
      if (argv[i][0] == '-') {
        continue;
      }
      if (simSet == false) {
        strcat(similarities, argv[i]);
        simSet = true;
      } else {
        files[(*flags).fileIndex] = strdup(argv[i]);
        (*flags).fileIndex++;
      }
    }
  }
}

void Flag_e(Flags *flags, char *similarities) {
  (*flags).e = true;
  (*flags).regex_flag |= REG_EXTENDED;
  (*flags).simIndex++;
  if ((*flags).simIndex != 1) {
    strcat(similarities, "|");
  }
  strcat(similarities, optarg);
}

void Flag_f(Flags *flags, char *similarities) {
  int flagerr = 0;
  (*flags).f = true;
  (*flags).regex_flag |= REG_EXTENDED;
  FILE *file = fopen(optarg, "r");
  if (file == NULL) {
    printf("%s: No such file or directory\n", optarg);
    flagerr = 1;
  } else if (!flagerr) {
    char *line = NULL;

    size_t buffer_size = 100;
    line = (char *)malloc(buffer_size * sizeof(char));
    if (line == NULL) {
      fprintf(stderr, "Error! Memory allocation error!\n");
      flagerr = 1;
    } else if (!flagerr) {
      while (fgets(line, buffer_size, file) != NULL) {
        line[strcspn(line, "\n")] = '\0';
        (*flags).simIndex++;
        if ((*flags).simIndex != 1) {
          strcat(similarities, "|");
        }
        strcat(similarities, line);
        if (line[strlen(line) - 1] != '\n' && !flagerr) {
          buffer_size *= 2;
          char *temp = realloc(line, buffer_size);
          if (temp == NULL) {
            fprintf(stderr, "Error! Memory allocation error!\n");
            free(line);
            flagerr = 1;
          }
          line = temp;
        }
      }
      fclose(file);
      free(line);
    }
  }
}