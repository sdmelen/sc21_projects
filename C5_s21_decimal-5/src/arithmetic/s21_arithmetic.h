#ifndef ARITHMETIC_H
#define ARITHMETIC_H

#define OK 0
#define TOO_LARGE 1
#define TOO_SMALL 2
#define FORBIDDEN_DIVISION 3

#include "../data_types/s21_data_types.h"

int s21_add(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);

int s21_sub(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);

int s21_mul(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);

int s21_div(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);

void column_division(s21_big_decimal dividend, s21_big_decimal divisor,
                     s21_big_decimal *quotient, s21_big_decimal *remainder);

#endif
