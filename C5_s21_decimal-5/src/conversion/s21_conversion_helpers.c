#include <stdlib.h>

#include "../mappers/s21_mappers.h"
#include "../operators/s21_decimal_operators.h"
#include "s21_conversion.h"

int s21_get_float_exp(char *str) {
  int result = 0;
  char *ptr = str;
  while (*ptr) {
    if (*ptr == 'E') {
      ptr++;
      result = strtol(ptr, NULL, 10);
      break;
    }
    ptr++;
  }
  return result;
}

s21_decimal s21_get_int_min_decimal() {
  s21_decimal s21Decimal = {{0x80000000, 0x0, 0x0, 0x80000000}};
  return s21Decimal;
}

s21_decimal s21_get_int_max_decimal() {
  s21_decimal s21Decimal = {{0x7FFFFFFF, 0x0, 0x0, 0x0}};
  return s21Decimal;
}

s21_decimal s21_float_string_to_decimal(char *str) {
  int exp = s21_get_float_exp(str);

  s21_big_decimal big_result = {0};
  while (*str) {
    if (*str == '.') {
      str++;
      continue;
    } else if (*str >= '0' && *str <= '9') {
      s21_big_decimal tmp = s21_get_big_decimal_from_char(*str);
      if (*str != '0' || exp > 0) s21_multiply_by_10(&big_result);
      s21_sum_big_decimal(&big_result, big_result, tmp);
      str++;
    } else {
      break;
    }
  }

  if (exp > 0) {
    s21_power_10_big_decimal(&big_result, exp);
  }
  exp = 6;

  s21_set_scale_big_decimal(&big_result, exp);
  s21_decimal result = {0};
  s21_to_decimal(big_result, &result);
  return result;
}

void s21_remove_trailing_zeros(s21_decimal *decimal) {
  s21_decimal temp = *decimal;
  int ost = s21_div_10_decimal(&temp);
  while (ost == 0 && s21_get_scale(*decimal) > 0) {
    s21_div_10_decimal(decimal);
    ost = s21_div_10_decimal(&temp);
  }
}

s21_big_decimal s21_get_big_decimal_from_char(char c) {
  s21_big_decimal result = {0};
  switch (c) {
    case '0':
      result.bits[0] = 0;
      break;
    case '1':
      result.bits[0] = 1;
      break;
    case '2':
      result.bits[0] = 2;
      break;
    case '3':
      result.bits[0] = 3;
      break;
    case '4':
      result.bits[0] = 4;
      break;
    case '5':
      result.bits[0] = 5;
      break;
    case '6':
      result.bits[0] = 6;
      break;
    case '7':
      result.bits[0] = 7;
      break;
    case '8':
      result.bits[0] = 8;
      break;
    case '9':
      result.bits[0] = 9;
      break;
  }
  return result;
}