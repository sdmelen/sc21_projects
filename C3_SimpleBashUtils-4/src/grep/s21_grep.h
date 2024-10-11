#include <getopt.h>
#include <regex.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define MAX_L_LENGTH 1000

typedef struct {
  int regex_flag;
  int e;
  int v;
  int c;
  int l;
  int n;
  int h;
  int s;
  int f;
  int o;
  char *similarities;
  int error;
  int fileIndex;
  int simIndex;

} Flags;

void search(Flags flags, char *similarities, char **files);
void search_in_File(FILE *file, Flags flags, regex_t *preg, char *files);
void Flag_o(regex_t *preg, char *line);
void Flag_el(Flags flags, int c_counter, char *files, int lkey);
void File_name(Flags flags, char *files);
void Line_number(Flags flags, int linenumber);
Flags Parser(int argc, char *argv[], char *similarities, char **files);
void Flag_e(Flags *flags, char *similarities);
void Flag_f(Flags *flags, char *similarities);
void MFile(Flags *flags, char **files, int argc, char *argv[]);
void ProcArgs(int argc, char *argv[], Flags *flags, char *similarities,
              char **files);
