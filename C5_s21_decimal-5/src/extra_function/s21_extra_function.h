#ifndef C5_S21_DECIMAL_3_EXTRA_FUNCTION_H

#include "../data_types/s21_data_types.h"

#define C5_S21_DECIMAL_3_EXTRA_FUNCTION_H

#define OK 0
#define CALCULATION_ERROR 1

int s21_floor(s21_decimal value, s21_decimal *result);

int s21_round(s21_decimal value, s21_decimal *result);

int s21_truncate(s21_decimal value, s21_decimal *result);

int s21_negate(s21_decimal value, s21_decimal *result);

#endif
