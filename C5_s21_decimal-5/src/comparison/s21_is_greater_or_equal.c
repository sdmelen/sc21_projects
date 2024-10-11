#include "s21_comparison.h"

int s21_is_greater_or_equal(s21_decimal left, s21_decimal right) {
  int compare = s21_compare_decimal(left, right);
  return compare == 1 || compare == 0;
}