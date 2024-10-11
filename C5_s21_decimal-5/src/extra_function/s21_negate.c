#include "../operators/s21_decimal_operators.h"
#include "s21_extra_function.h"

int s21_negate(s21_decimal value, s21_decimal *result) {
  if (!result || !s21_is_correct_decimal(value)) {
    return CALCULATION_ERROR;
  }

  *result = value;
  s21_get_sign(*result) == 1 ? s21_clear_sign(result) : s21_set_sign(result);
  return OK;
}