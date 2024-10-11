#ifndef C5_S21_DECIMAL_2_CONVERTERS_H

#include "../data_types/s21_data_types.h"

#define C5_S21_DECIMAL_2_CONVERTERS_H

#define OK 0
#define CONVERSION_ERROR 1

#define MAX_FLOAT 79228157791897854723898736640.0f
#define MIN_FLOAT 0.0000000000000000000000000001f

int s21_from_int_to_decimal(int src, s21_decimal *dst);

int s21_from_float_to_decimal(float src, s21_decimal *dst);

int s21_from_decimal_to_int(s21_decimal src, int *dst);

int s21_from_decimal_to_float(s21_decimal src, float *dst);

int s21_get_float_exp(char *str);

s21_decimal s21_get_int_min_decimal();

s21_decimal s21_get_int_max_decimal();

s21_decimal s21_float_string_to_decimal(char *str);

s21_big_decimal s21_get_big_decimal_from_char(char c);

void s21_remove_trailing_zeros(s21_decimal *decimal);

char *s21_float_to_string(float f);

#endif
