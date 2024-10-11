#include "../mappers/s21_mappers.h"
#include "../operators/s21_decimal_operators.h"
#include "s21_comparison.h"

int s21_compare_decimal(s21_decimal left, s21_decimal right) {
  if (s21_is_empty_decimal(left) && s21_is_empty_decimal(right)) {
    return 0;
  }
  int left_sign = s21_get_sign(left);
  int right_sign = s21_get_sign(right);

  if (left_sign != right_sign) {
    return left_sign ? -1 : 1;
  }

  s21_big_decimal left_big_decimal = {0};
  s21_big_decimal right_big_decimal = {0};

  s21_to_big_decimal(left, &left_big_decimal);
  s21_to_big_decimal(right, &right_big_decimal);

  s21_normalize(&left_big_decimal, &right_big_decimal);

  int res = 0;
  for (int i = 191; i >= 0; i--) {
    int left_bit = s21_get_bit_big_decimal(left_big_decimal, i);
    int right_bit = s21_get_bit_big_decimal(right_big_decimal, i);
    if (left_bit != right_bit) {
      res = left_bit ? 1 : -1;
      break;
    }
  }
  return left_sign ? -res : res;
}
