#include "../operators/s21_decimal_operators.h"
#include "s21_comparison.h"

int s21_is_empty_big_decimal(s21_big_decimal decimal) {
  return !(decimal.bits[0] || decimal.bits[1] || decimal.bits[2] ||
           decimal.bits[3] || decimal.bits[4] || decimal.bits[5]);
}
int s21_compare_big_decimal(s21_big_decimal left, s21_big_decimal right) {
  if (s21_is_empty_big_decimal(left) && s21_is_empty_big_decimal(right)) {
    return 0;
  }
  int left_sign = s21_get_sign_big_decimal(left);
  int right_sign = s21_get_sign_big_decimal(right);

  if (left_sign != right_sign) {
    return left_sign ? -1 : 1;
  }

  s21_normalize(&left, &right);

  int res = 0;
  for (int i = 191; i >= 0; i--) {
    int left_bit = s21_get_bit_big_decimal(left, i);
    int right_bit = s21_get_bit_big_decimal(right, i);
    if (left_bit != right_bit) {
      res = left_bit ? 1 : -1;
      break;
    }
  }
  return left_sign ? -res : res;
}

int s21_is_greater_or_equal_big_decimal(s21_big_decimal left,
                                        s21_big_decimal right) {
  int compare = s21_compare_big_decimal(left, right);
  return compare == 1 || compare == 0;
}

int s21_is_equal_big_decimal(s21_big_decimal left, s21_big_decimal right) {
  int compare = s21_compare_big_decimal(left, right);
  return compare == 0;
}
