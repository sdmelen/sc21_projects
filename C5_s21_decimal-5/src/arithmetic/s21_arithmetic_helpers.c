#include "../comparison/s21_comparison.h"
#include "../operators/s21_decimal_operators.h"
#include "s21_arithmetic.h"

void column_division(s21_big_decimal dividend, s21_big_decimal divisor,
                     s21_big_decimal *quotient, s21_big_decimal *remainder) {
  s21_clear_big_decimal(quotient);
  s21_clear_big_decimal(remainder);
  *remainder = dividend;

  s21_big_decimal temp_divisor = divisor;
  int position = 191;

  while (position >= 0 && !s21_get_bit_big_decimal(dividend, position)) {
    position--;
  }
  int shift_count = 0;
  while (position >= 0 &&
         s21_is_greater_or_equal_big_decimal(*remainder, temp_divisor)) {
    s21_left_shift_big_decimal(&temp_divisor);
    shift_count++;
    position--;
  }
  while (shift_count > 0) {
    s21_left_shift_big_decimal(quotient);
    s21_right_shift_big_decimal(&temp_divisor);

    if (s21_is_greater_or_equal_big_decimal(*remainder, temp_divisor)) {
      s21_sub_big_decimal(remainder, *remainder, temp_divisor);
      s21_set_bit_big_decimal(quotient, 0);
    }
    shift_count--;
  }
}