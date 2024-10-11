#pragma once  // однострочный макрос ifndef (весь файл инклюдится один раз
              // независимо от того, сколько раз он инклудится в дургих файлах)
              // )
#include <ctype.h>
#include <math.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#define s21_NULL ((void *)0)
typedef unsigned int s21_size_t;

// pahlterr
s21_size_t s21_strlen(const char str[]);
s21_size_t s21_strcspn(const char *str1, const char *str2);
char *s21_strncat(char *dest, const char *src, s21_size_t n);
// lorenzoi
char *s21_strncpy(char *dest, const char *src, int num);
void *s21_memcpy(void *dest, const void *src, int n);
char *s21_strpbrk(char *str1, const char *str2);
// brocoll
char *s21_strerror(int s21_errnum);
void *s21_memset(void *str, int c, s21_size_t n);
char *s21_strtok(char *str, char *delim);
// bookerra
int s21_memcmp(const void *s1, const void *s2, s21_size_t n);
int s21_strncmp(const char *s1, const char *s2, s21_size_t n);
char *s21_strstr(const char *haystack, const char *needle);
// lanternd
char *s21_strrchr(char *string, int ch);
char *s21_strchr(const char *string, int ch);
void *s21_memchr(const void *arr, int c, s21_size_t n);
// доп функции
void *s21_to_lower(const char *str);
void *s21_to_upper(const char *str);
void *s21_insert(const char *src, const char *str, s21_size_t start_index);
void *s21_trim(const char *src, const char *trim_chars);

// sprintf
int s21_sprintf(char *str, const char *format, ...);

#define SIZE 1024
#define _POSIX_C_SOURCE 200809L

struct options {
  int minus_flag;
  int plus_flag;
  int space_flag;
  int sharp_flag;
  int zero_flag;
  int width;
  int point;
  int precision;
  int length;
};

const char *parse_flags(struct options *opts_ptr, const char *format_ptr);
const char *parse_width(struct options *opts_ptr, const char *format_ptr,
                        va_list args);
const char *parse_precision(struct options *opts_ptr, const char *format_ptr,
                            va_list args);
const char *parse_length(struct options *opts_ptr, const char *format_ptr);
char *parse_specifier(const char *format_ptr, va_list args, char *temp_ptr,
                      struct options *opts_ptr);
char *format_d_specifier(struct options *opts_ptr, va_list args,
                         char *temp_ptr);
char *format_f_specifier(struct options *opts_ptr, va_list args,
                         char *temp_ptr);
char *format_s_specifier(struct options *opts_ptr, va_list args,
                         char *temp_ptr);
char *format_u_specifier(struct options *opts_ptr, va_list args,
                         char *temp_ptr);
char *format_c_specifier(struct options *opts_ptr, va_list args,
                         char *temp_ptr);
int s21_startsymbol(const char *src, const char *trim_chars, s21_size_t pos);
int s21_endsymbol(const char *src, const char *trim_chars, s21_size_t pos);
void *s21_to_lower(const char *str);
void *s21_to_upper(const char *str);
void *s21_insert(const char *src, const char *str, s21_size_t start_index);
void *s21_trim(const char *src, const char *trim_chars);
char *format_d(char *temp_ptr, int is_negative, struct options *opts_ptr,
               int num_len);
char *format_f(char *int_str, int int_len, char *frac_str, int frac_len,
               struct options *opts_ptr, int is_negative, char *temp_ptr);
void process_number(struct options *opts_ptr, va_list args, long double *num,
                    int *is_negative, int *precision,
                    long double *rounding_adjustment, long long *int_part,
                    long double *frac_part);
unsigned long long get_number_and_length(struct options *opts_ptr, va_list args,
                                         int *num_len);
char *format_number(struct options *opts_ptr, unsigned long long num,
                    int num_len, char *temp_ptr);
