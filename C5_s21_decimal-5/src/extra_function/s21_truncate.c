#include "../operators/s21_decimal_operators.h"
#include "s21_extra_function.h"

int s21_truncate(s21_decimal value, s21_decimal *result) {
  if (!result || !s21_is_correct_decimal(value)) {
    return CALCULATION_ERROR;
  }
  s21_clear_decimal(result);

  while (s21_get_scale(value) > 0) {
    s21_div_10_decimal(&value);
  }
  *result = value;

  return OK;
}