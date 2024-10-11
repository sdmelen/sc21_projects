#include <math.h>
#include <stdio.h>

#include "../operators/s21_decimal_operators.h"
#include "s21_conversion.h"

int s21_from_float_to_decimal(float src, s21_decimal *dst) {
  int code = OK;
  if (!dst) {
    code = CONVERSION_ERROR;
  } else if (src == 0.0) {
    s21_clear_decimal(dst);
    if (signbit(src)) {
      s21_set_sign(dst);
    }
    code = OK;
  } else if (isnan(src) || isinf(src) || fabsf(src) < MIN_FLOAT ||
             src > MAX_FLOAT) {
    code = CONVERSION_ERROR;
    s21_clear_decimal(dst);
  } else {
    int sign = src < 0;
    s21_clear_decimal(dst);
    char flt[64];
    sprintf(flt, "%.6E", fabs(src));
    *dst = s21_float_string_to_decimal(flt);
    if (sign) {
      s21_set_sign(dst);
    }
    s21_remove_trailing_zeros(dst);
  }
  return code;
}