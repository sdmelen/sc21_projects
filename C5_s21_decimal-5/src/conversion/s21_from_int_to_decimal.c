#include <stdlib.h>

#include "../operators/s21_decimal_operators.h"
#include "s21_conversion.h"

int s21_from_int_to_decimal(int src, s21_decimal *dst) {
  if (dst == NULL) {
    return CONVERSION_ERROR;
  }

  s21_clear_decimal(dst);
  if (src < 0) {
    s21_set_sign(dst);
    src = -src;
  }
  dst->bits[0] = (unsigned int)src;

  return OK;
}