#include "../arithmetic/s21_arithmetic.h"
#include "../mappers/s21_mappers.h"
#include "../operators/s21_decimal_operators.h"
#include "s21_extra_function.h"

int s21_round(s21_decimal value, s21_decimal *result) {
  if (!result || !s21_is_correct_decimal(value)) {
    return CALCULATION_ERROR;
  }

  s21_clear_decimal(result);

  int sign = s21_get_sign(value);
  s21_clear_sign(&value);

  int code = OK;

  s21_big_decimal big_decimal = {0};
  s21_to_big_decimal(value, &big_decimal);

  int remainder = 0;
  while (s21_get_scale_big_decimal(big_decimal) > 0) {
    remainder = s21_div_10_big_decimal(&big_decimal);
  }

  s21_to_decimal(big_decimal, result);
  if (remainder >= 5) {
    code = s21_add(s21_get_decimal_one(), *result, result);
  }

  if (sign) {
    s21_set_sign(result);
  }
  if (code) {
    s21_clear_decimal(result);
  }

  return code;
}