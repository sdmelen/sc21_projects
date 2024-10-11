#include "s21_cat.h"

int main(int argc, char *argv[]) {
  if (argc < 2) {
    printf("Usage: %s <options> <file1> [<file2> ... <fileN>]\n", argv[0]);
    return 1;
  }

  Options opts = arguments_parser(argc, argv);
  output(argc, argv, &opts);

  return 0;
}

void output(int argc, char **argv, Options *opts) {
  for (int i = optind; i < argc; i++) {
    FILE *f = fopen(argv[i], "r");
    if (f != NULL)
      print_file(f, opts);
    else
      printf("No such file: %s\n", argv[i]);
  }
}

Options arguments_parser(int argc, char *argv[]) {
  int opt = 0;
  Options opts = {0};
  struct option long_options[] = {{"number", no_argument, 0, 'n'},
                                  {"number-nonblank", no_argument, 0, 'b'},
                                  {"squeeze-blank", no_argument, 0, 's'},
                                  {"display-ends", no_argument, 0, 'e'},
                                  {"display-tabs", no_argument, 0, 't'},
                                  {"display-nonprinting", no_argument, 0, 'v'},
                                  {0, 0, 0, 0}};

  while ((opt = getopt_long(argc, argv, "benstv", long_options, 0)) != -1) {
    switch (opt) {
      case 'b':
        opts.b = 1;
        break;
      case 'e':
        opts.e = 1;
        opts.v = 1;
        break;
      case 'n':
        opts.n = 1;
        break;
      case 's':
        opts.s = 1;
        break;
      case 't':
        opts.t = 1;
        opts.v = 1;
        break;
      case 'v':
        opts.v = 1;
        break;
      default:
        printf("Usage: %s <options> <file1> [<file2> ... <fileN>]\n", argv[0]);
        exit(EXIT_FAILURE);
    }
  }
  if (opts.n == 1 && opts.b == 1) {
    opts.n = 0;
  }
  return opts;
}

void print_file(FILE *f, Options *opts) {
  int sflag = 0, bflag = 0, nflag = 0, eflag = 0;
  int line_counter = 0;
  int ch, prev_ch = 0;
  while ((ch = fgetc(f)) != EOF) {
    if (opts->s == 1) {
      if (ch == '\n' && prev_ch == '\n') {
        if (sflag == 0) {
          sflag = 1;
        } else
          continue;
      } else
        sflag = 0;
    }
    if (opts->b == 1) {
      if (ch != '\n') {
        if (bflag == 0) {
          line_counter++;
          printf("%6d\t", line_counter);
          bflag = 1;
        }
      } else {
        bflag = 0;
      }
    }
    if (opts->n == 1) {
      if (nflag == 0) {
        line_counter++;
        printf("%6d\t", line_counter);
        nflag = 1;
      }
      if (ch == '\n') nflag = 0;
    }
    if (opts->e == 1) {
      if (ch == '\n') {
        if (eflag == 0 && opts->b == 1) printf("      \t");
        putchar('$');
        eflag = 0;
      } else
        eflag = 1;
    }
    if (opts->t == 1)
      if (print_t_flag(ch)) continue;
    if (opts->v == 1)
      if (print_v_flag(ch)) continue;
    putchar(ch);
    prev_ch = ch;
  }
  fclose(f);
}

int print_t_flag(char ch) {
  int flag = 0;
  if (ch == '\t') {
    printf("^I");
    flag = 1;
  }
  return flag;
}

int print_v_flag(char ch) {
  int flag = 0;
  if ((ch <= 31 || ch == 127) && (ch != '\n' && ch != '\t')) {
    if (ch == 127)
      printf("^?");
    else
      printf("^%c", ch + 64);
    flag = 1;
  }
  return flag;
}
