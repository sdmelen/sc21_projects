#include "../mappers/s21_mappers.h"
#include "../operators/s21_decimal_operators.h"
#include "s21_arithmetic.h"

int s21_add(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  int sign_1 = s21_get_sign(value_1);
  int sign_2 = s21_get_sign(value_2);

  int result_code = OK;
  if (sign_1 != sign_2) {
    s21_clear_sign(&value_1);
    s21_clear_sign(&value_2);

    result_code = sign_1 ? s21_sub(value_2, value_1, result)
                         : s21_sub(value_1, value_2, result);
  } else {
    s21_big_decimal big_value_1 = {0};
    s21_big_decimal big_value_2 = {0};
    s21_big_decimal big_res = {0};

    s21_to_big_decimal(value_1, &big_value_1);
    s21_to_big_decimal(value_2, &big_value_2);

    s21_normalize(&big_value_1, &big_value_2);
    s21_sum_big_decimal(&big_res, big_value_1, big_value_2);
    s21_set_scale_big_decimal(&big_res, s21_get_scale_big_decimal(big_value_1));

    if (s21_to_decimal(big_res, result)) {
      result_code = sign_1 ? TOO_SMALL : TOO_LARGE;
    }
    if (result_code == OK && sign_1) {
      s21_set_sign(result);
    }
  }
  return result_code;
}