#include "../operators/s21_decimal_operators.h"
#include "s21_mappers.h"

void s21_to_big_decimal(s21_decimal src, s21_big_decimal *result) {
  s21_clear_big_decimal(result);

  result->bits[6] = src.bits[3];
  result->bits[2] = src.bits[2];
  result->bits[1] = src.bits[1];
  result->bits[0] = src.bits[0];
}

int s21_to_decimal(s21_big_decimal src, s21_decimal *result) {
  int result_code = 0;
  if ((result_code = s21_is_overflow(src)) &&
      s21_get_scale_big_decimal(src) > 0)
    result_code = s21_bank_rounding_big_decimal(&src);
  if (result_code == 0) {
    s21_clear_decimal(result);
    for (int i = 0; i < 3; i++) {
      result->bits[i] = src.bits[i];
    }
    result->bits[3] = src.bits[6];
    s21_set_scale(result, s21_get_scale_big_decimal(src));
  }
  return result_code;
}