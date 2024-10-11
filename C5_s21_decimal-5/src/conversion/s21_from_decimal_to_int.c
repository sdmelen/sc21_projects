#include "../comparison/s21_comparison.h"
#include "../extra_function/s21_extra_function.h"
#include "../operators/s21_decimal_operators.h"
#include "s21_conversion.h"

int s21_from_decimal_to_int(s21_decimal src, int *dst) {
  if (!dst || !s21_is_correct_decimal(src)) {
    return CONVERSION_ERROR;
  }

  int code = OK;
  s21_decimal truncated_decimal = {0};
  s21_truncate(src, &truncated_decimal);
  if (s21_is_less(truncated_decimal, s21_get_int_min_decimal())) {
    code = CONVERSION_ERROR;
  } else if (s21_is_greater(truncated_decimal, s21_get_int_max_decimal())) {
    code = CONVERSION_ERROR;
  } else {
    *dst = truncated_decimal.bits[0];
    if (s21_get_sign(truncated_decimal)) {
      *dst *= -1;
    }
  }
  return code;
}