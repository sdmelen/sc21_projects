#include "s21_decimal_operators.h"

void s21_clear_decimal(s21_decimal *s21Decimal) {
  for (int i = 0; i < 4; i++) {
    s21Decimal->bits[i] = 0;
  }
}

int s21_get_bit_decimal(s21_decimal s21_decimal, int bit_number) {
  int index = bit_number / 32;
  bit_number %= 32;

  return (s21_decimal.bits[index] &= 1 << bit_number) > 0;
}

void s21_set_scale(s21_decimal *s21Decimal, int scale) {
  int sign = s21_get_sign(*s21Decimal);
  s21Decimal->bits[3] = scale << 16;
  if (sign == 0) {
    s21_clear_sign(s21Decimal);
  } else {
    s21_set_sign(s21Decimal);
  }
}

int s21_get_scale(s21_decimal s21Decimal) {
  s21_clear_sign(&s21Decimal);
  return (int)s21Decimal.bits[3] >> 16;
}

int s21_get_sign(s21_decimal s21Decimal) {
  return (s21Decimal.bits[3] & ((unsigned)1 << 31)) > 0;
}

void s21_set_sign(s21_decimal *s21Decimal) {
  s21Decimal->bits[3] |= (unsigned)1 << 31;
}

void s21_clear_sign(s21_decimal *s21Decimal) {
  s21Decimal->bits[3] &= ~((unsigned)1 << 31);
}

int s21_div_10_decimal(s21_decimal *value) {
  unsigned long long remainder = 0;
  for (int i = 2; i >= 0; --i) {
    unsigned long long current = (remainder << 32) | value->bits[i];
    value->bits[i] = current / 10;
    remainder = current % 10;
  }
  if (s21_get_scale(*value) > 0)
    s21_set_scale(value, s21_get_scale(*value) - 1);
  return remainder;
}

void s21_swap(s21_decimal *s21Decimal1, s21_decimal *s21Decimal2) {
  s21_decimal temp = *s21Decimal1;
  *s21Decimal1 = *s21Decimal2;
  *s21Decimal2 = temp;
}

int s21_is_correct_decimal(s21_decimal decimal) {
  int result = 1;
  s21_clear_sign(&decimal);
  if (s21_get_scale(decimal) > 28) {
    result = 0;
  }
  int mask = 0b01111111000000001111111111111111;
  if (decimal.bits[3] & mask) {
    result = 0;
  }
  return result;
}

s21_decimal s21_get_decimal_empty() {
  s21_decimal decimal = {0};
  return decimal;
}

s21_decimal s21_get_decimal_one() {
  s21_decimal decimal = {{1, 0, 0, 0}};
  return decimal;
}

int s21_is_empty_decimal(s21_decimal decimal) {
  return !(decimal.bits[0] || decimal.bits[1] || decimal.bits[2]);
}