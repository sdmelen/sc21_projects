#include <math.h>

#include "../operators/s21_decimal_operators.h"
#include "s21_conversion.h"

int s21_from_decimal_to_float(s21_decimal src, float *dst) {
  if (!dst || !s21_is_correct_decimal(src)) {
    return CONVERSION_ERROR;
  }

  double tmp = 0.0;
  for (int i = 0; i < 96; i++) {
    if (s21_get_bit_decimal(src, i) == 1) {
      tmp += pow(2.0, i);
    }
  }
  tmp /= pow(10, s21_get_scale(src));

  if (s21_get_sign(src)) {
    tmp = -tmp;
  }

  *dst = (float)tmp;
  return OK;
}