#ifndef C5_S21_DECIMAL_3_COMPARISON_H

#include "../data_types/s21_data_types.h"

#define C5_S21_DECIMAL_3_COMPARISON_H

int s21_is_less(s21_decimal left, s21_decimal right);

int s21_is_less_or_equal(s21_decimal left, s21_decimal right);

int s21_is_greater(s21_decimal left, s21_decimal right);

int s21_is_greater_or_equal(s21_decimal left, s21_decimal right);

int s21_is_equal(s21_decimal left, s21_decimal right);

int s21_is_not_equal(s21_decimal left, s21_decimal right);

int s21_compare_decimal(s21_decimal left, s21_decimal right);

int s21_is_empty_decimal(s21_decimal decimal);

int s21_compare_big_decimal(s21_big_decimal left, s21_big_decimal right);

int s21_is_greater_or_equal_big_decimal(s21_big_decimal left,
                                        s21_big_decimal right);

int s21_is_equal_big_decimal(s21_big_decimal left, s21_big_decimal right);

int s21_compare_decimal(s21_decimal left, s21_decimal right);

#endif
