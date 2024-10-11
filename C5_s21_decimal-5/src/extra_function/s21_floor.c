#include "../arithmetic/s21_arithmetic.h"
#include "../comparison/s21_comparison.h"
#include "../operators/s21_decimal_operators.h"
#include "s21_extra_function.h"

int s21_floor(s21_decimal value, s21_decimal *result) {
  if (!result || !s21_is_correct_decimal(value)) {
    return CALCULATION_ERROR;
  }
  s21_clear_decimal(result);

  int sign = s21_get_sign(value);
  s21_clear_sign(&value);

  s21_decimal truncated_decimal;
  s21_truncate(value, &truncated_decimal);

  s21_decimal fraction;
  s21_sub(value, truncated_decimal, &fraction);

  if (sign && s21_is_greater(fraction, s21_get_decimal_empty())) {
    s21_add(truncated_decimal, s21_get_decimal_one(), &truncated_decimal);
  }

  *result = truncated_decimal;
  if (sign) {
    s21_set_sign(result);
  }

  return OK;
}