#include "../mappers/s21_mappers.h"
#include "../operators/s21_decimal_operators.h"
#include "s21_arithmetic.h"

int s21_mul(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  int sign_1 = s21_get_sign(value_1);
  int sign_2 = s21_get_sign(value_2);

  int result_code = OK;

  s21_big_decimal big_value_1 = {0};
  s21_big_decimal big_value_2 = {0};
  s21_big_decimal big_result = {0};

  s21_to_big_decimal(value_1, &big_value_1);
  s21_to_big_decimal(value_2, &big_value_2);

  for (unsigned i = 0; i < 192; i++) {
    if (!s21_get_bit_big_decimal(big_value_2, i)) {
      continue;
    }
    s21_big_decimal temp = big_value_1;
    s21_left_shift_big_decimal_by(&temp, i);

    s21_sum_big_decimal(&big_result, big_result, temp);
  }

  int result_scale = s21_get_scale_big_decimal(big_value_1) +
                     s21_get_scale_big_decimal(big_value_2);
  s21_set_scale_big_decimal(&big_result, result_scale);

  if (s21_to_decimal(big_result, result)) {
    result_code = sign_1 != sign_2 ? TOO_SMALL : TOO_LARGE;
  }

  if (sign_1 != sign_2 && !result_code) {
    s21_set_sign(result);
  }
  return result_code;
}