#include "s21_decimal_operators.h"

void s21_clear_big_decimal(s21_big_decimal *s21BigDecimal) {
  for (int i = 0; i < 7; i++) {
    s21BigDecimal->bits[i] = 0;
  }
}

void s21_set_bit_big_decimal(s21_big_decimal *s21BigDecimal, int bit_number) {
  int index = bit_number / 32;
  bit_number %= 32;

  s21BigDecimal->bits[index] |= (1 << bit_number);
}

void s21_clear_bit_big_decimal(s21_big_decimal *s21BigDecimal, int bit_number) {
  int index = bit_number / 32;
  bit_number %= 32;

  s21BigDecimal->bits[index] &= ~(1 << bit_number);
}

int s21_get_bit_big_decimal(s21_big_decimal s21BigDecimal, int bit_number) {
  int index = bit_number / 32;
  bit_number %= 32;

  return (s21BigDecimal.bits[index] &= 1 << bit_number) > 0;
}

void s21_set_scale_big_decimal(s21_big_decimal *s21BigDecimal, int scale) {
  int sign = s21_get_sign_big_decimal(*s21BigDecimal);
  s21BigDecimal->bits[6] = scale << 16;
  if (sign == 0) {
    s21_clear_sign_big_decimal(s21BigDecimal);
  } else {
    s21_set_sign_big_decimal(s21BigDecimal);
  }
}

int s21_get_scale_big_decimal(s21_big_decimal s21BigDecimal) {
  s21_clear_sign_big_decimal(&s21BigDecimal);
  return (int)s21BigDecimal.bits[6] >> 16;
}

int s21_get_sign_big_decimal(s21_big_decimal s21BigDecimal) {
  return (s21BigDecimal.bits[6] & ((unsigned)1 << 31)) > 0;
}

void s21_set_sign_big_decimal(s21_big_decimal *s21BigDecimal) {
  s21BigDecimal->bits[6] |= (unsigned)1 << 31;
}

void s21_clear_sign_big_decimal(s21_big_decimal *s21BigDecimal) {
  s21BigDecimal->bits[6] &= ~((unsigned)1 << 31);
}

void s21_normalize(s21_big_decimal *s21BigDecimal1,
                   s21_big_decimal *s21BigDecimal2) {
  int scale1 = s21_get_scale_big_decimal(*s21BigDecimal1);
  int scale2 = s21_get_scale_big_decimal(*s21BigDecimal2);
  int max_scale = scale1 > scale2 ? scale1 : scale2;

  s21_set_scale_big_decimal(s21BigDecimal1, max_scale);
  s21_set_scale_big_decimal(s21BigDecimal2, max_scale);

  s21_power_10_big_decimal(s21BigDecimal1, max_scale - scale1);
  s21_power_10_big_decimal(s21BigDecimal2, max_scale - scale2);
}

int s21_div_10_big_decimal(s21_big_decimal *value) {
  unsigned long long remainder = 0;
  for (int i = 5; i >= 0; --i) {
    unsigned long long current = (remainder << 32) | value->bits[i];
    value->bits[i] = current / 10;
    remainder = current % 10;
  }
  if (s21_get_scale_big_decimal(*value) > 0)
    s21_set_scale_big_decimal(value, s21_get_scale_big_decimal(*value) - 1);
  return remainder;
}

void s21_power_10_big_decimal(s21_big_decimal *result, int n) {
  for (int i = 0; i < n; i++) {
    s21_multiply_by_10(result);
  }
}

void s21_multiply_by_10(s21_big_decimal *s21BigDecimal) {
  s21_big_decimal temp = *s21BigDecimal;
  s21_left_shift_big_decimal(&temp);
  s21_multiply_by_8(s21BigDecimal);
  s21_sum_big_decimal(s21BigDecimal, *s21BigDecimal, temp);
}

void s21_multiply_by_8(s21_big_decimal *s21BigDecimal) {
  s21_left_shift_big_decimal(s21BigDecimal);
  s21_left_shift_big_decimal(s21BigDecimal);
  s21_left_shift_big_decimal(s21BigDecimal);
}

void s21_left_shift_big_decimal(s21_big_decimal *s21BigDecimal) {
  s21_big_decimal temp = *s21BigDecimal;
  s21BigDecimal->bits[0] <<= 1;
  for (int i = 1; i < 6; i++) {
    s21BigDecimal->bits[i] <<= 1;
    if (s21_get_bit_big_decimal(temp, (32 * (i - 1)) + 31)) {
      s21_set_bit_big_decimal(s21BigDecimal, (32 * i));
    }
  }
}

void s21_right_shift_big_decimal(s21_big_decimal *s21BigDecimal) {
  s21_big_decimal temp = *s21BigDecimal;
  s21BigDecimal->bits[5] >>= 1;
  for (int i = 4; i >= 0; i--) {
    s21BigDecimal->bits[i] >>= 1;
    if (s21_get_bit_big_decimal(temp, (32 * (i + 1)))) {
      s21_set_bit_big_decimal(s21BigDecimal, (32 * i) + 31);
    }
  }
}

void s21_left_shift_big_decimal_by(s21_big_decimal *s21BigDecimal, int times) {
  for (int i = 0; i < times; i++) {
    s21_left_shift_big_decimal(s21BigDecimal);
  }
}

void s21_sum_big_decimal(s21_big_decimal *res, s21_big_decimal val_1,
                         s21_big_decimal val_2) {
  unsigned long temp = 0;

  for (int i = 0; i < 6; i++) {
    temp += (unsigned long)val_1.bits[i] + val_2.bits[i];
    res->bits[i] = temp;
    temp >>= 32;
  }
}

void s21_sub_big_decimal(s21_big_decimal *result, s21_big_decimal value_1,
                         s21_big_decimal value_2) {
  for (int i = 0, temp = 0; i < 192; i++) {
    int result_bit = s21_get_bit_big_decimal(value_1, i) -
                     s21_get_bit_big_decimal(value_2, i) - temp;
    temp = result_bit < 0;
    if (temp) {
      result_bit += 2;
    }
    result_bit ? s21_set_bit_big_decimal(result, i)
               : s21_clear_bit_big_decimal(result, i);
  }
  s21_set_scale_big_decimal(result, s21_get_scale_big_decimal(value_1));
}

int s21_bank_rounding_big_decimal(s21_big_decimal *value) {
  int err = 0;
  int remainder = 0;
  while ((s21_is_overflow(*value) && s21_get_scale_big_decimal(*value) > 0) ||
         s21_get_scale_big_decimal(*value) > 28) {
    remainder = s21_div_10_big_decimal(value);
  }
  if (s21_is_overflow(*value)) {
    err = 1;
  }
  if (!err && (remainder > 5 ||
               (remainder == 5 && s21_get_bit_big_decimal(*value, 0)))) {
    s21_sum_big_decimal(value, *value, s21_get_big_decimal_one());
  }
  if (s21_is_overflow(*value)) {
    err = 1;
  }
  return err;
}

int s21_is_overflow(s21_big_decimal s21BigDecimal) {
  return s21BigDecimal.bits[3] || s21BigDecimal.bits[4] ||
         s21BigDecimal.bits[5];
}

s21_big_decimal s21_get_big_decimal_zero() {
  s21_big_decimal big_decimal = {{01, 0, 0, 0, 0, 0, 0}};
  return big_decimal;
}

s21_big_decimal s21_get_big_decimal_one() {
  s21_big_decimal big_decimal = {{1, 0, 0, 0, 0, 0, 0}};
  return big_decimal;
}