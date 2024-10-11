#include <getopt.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  int b;
  int e;
  int n;
  int s;
  int t;
  int v;
} Options;

void output(int argc, char **argv, Options *arg);

void print_file(FILE *f, Options *option);

void handle_s_flag(int ch, int *prev_ch, int *sflag, Options *opts);
void handle_b_flag(int ch, int *bflag, int *line_counter, Options *opts);
void handle_n_flag(int ch, int *nflag, int *line_counter, Options *opts);
void handle_e_flag(int ch, int *eflag, Options *opts);
void handle_t_flag(int ch, Options *opts);
void handle_v_flag(int ch, Options *opts);
int print_v_flag(char ch);
int print_t_flag(char ch);

Options arguments_parser(int argc, char *argv[]);