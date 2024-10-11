#include "../comparison/s21_comparison.h"
#include "../extra_function/s21_extra_function.h"
#include "../mappers/s21_mappers.h"
#include "../operators/s21_decimal_operators.h"
#include "s21_arithmetic.h"

int s21_sub(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  int sign_1 = s21_get_sign(value_1), sign_2 = s21_get_sign(value_2);
  int result_code = OK;
  if (sign_1 != sign_2) {
    s21_negate(value_2, &value_2);
    result_code = s21_add(value_1, value_2, result);
  }
  if (sign_1 == sign_2) {
    if (sign_1) {
      s21_clear_sign(&value_1);
      s21_clear_sign(&value_2);
      s21_swap(&value_1, &value_2);
    }
    int value_1_is_less = s21_is_less(value_1, value_2);
    s21_big_decimal big_value_1 = {0};
    s21_big_decimal big_value_2 = {0};
    s21_big_decimal big_result = {0};

    s21_to_big_decimal(value_1_is_less ? value_2 : value_1, &big_value_1);
    s21_to_big_decimal(value_1_is_less ? value_1 : value_2, &big_value_2);

    s21_normalize(&big_value_1, &big_value_2);

    s21_sub_big_decimal(&big_result, big_value_1, big_value_2);

    s21_to_decimal(big_result, result);
    if (value_1_is_less) {
      s21_set_sign(result);
    }
  }
  return result_code;
}