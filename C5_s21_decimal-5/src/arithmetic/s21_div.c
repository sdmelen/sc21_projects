#include "../comparison/s21_comparison.h"
#include "../mappers/s21_mappers.h"
#include "../operators/s21_decimal_operators.h"
#include "s21_arithmetic.h"

int s21_div(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  if (!result || s21_is_empty_decimal(value_2) ||
      !s21_is_correct_decimal(value_1) || !s21_is_correct_decimal(value_2)) {
    return FORBIDDEN_DIVISION;
  }
  int result_code = OK;
  s21_big_decimal big_value_1 = {0};
  s21_big_decimal big_value_2 = {0};

  s21_to_big_decimal(value_1, &big_value_1);
  s21_to_big_decimal(value_2, &big_value_2);

  s21_normalize(&big_value_1, &big_value_2);

  s21_big_decimal result_int = {0};
  s21_big_decimal remainder = {0};

  s21_clear_sign_big_decimal(&big_value_1);
  s21_clear_sign_big_decimal(&big_value_2);

  column_division(big_value_1, big_value_2, &result_int, &remainder);
  s21_set_scale_big_decimal(&result_int, 0);
  s21_set_scale_big_decimal(&remainder, s21_get_scale_big_decimal(big_value_1));

  s21_big_decimal result_fraction = {0};
  s21_big_decimal big_result = {0};

  if (!s21_is_equal_big_decimal(remainder, s21_get_big_decimal_zero())) {
    s21_power_10_big_decimal(&remainder, 28);
    column_division(remainder, big_value_2, &result_fraction, &big_value_1);
    s21_set_scale_big_decimal(&result_fraction, 28);
    s21_set_scale_big_decimal(&big_result, 28);
  }
  s21_normalize(&result_int, &result_fraction);
  s21_sum_big_decimal(&big_result, result_int, result_fraction);
  *result = s21_get_decimal_empty();

  s21_get_sign(value_1) != s21_get_sign(value_2)
      ? s21_set_sign_big_decimal(&big_result)
      : s21_clear_sign_big_decimal(&big_result);
  if (s21_to_decimal(big_result, result))
    result_code = s21_get_sign(*result) ? TOO_LARGE : TOO_SMALL;
  return result_code;
}
