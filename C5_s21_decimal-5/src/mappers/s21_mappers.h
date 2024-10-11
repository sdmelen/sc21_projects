#ifndef C5_S21_DECIMAL_3_DECIMAL_MAPPER_H

#include "../data_types/s21_data_types.h"

#define C5_S21_DECIMAL_3_DECIMAL_MAPPER_H

void s21_to_big_decimal(s21_decimal src, s21_big_decimal *result);

int s21_to_decimal(s21_big_decimal src, s21_decimal *result);

#endif