#ifndef C5_S21_DECIMAL_3_DECIMAL_OPERATORS_H

#include "../data_types/s21_data_types.h"

#define C5_S21_DECIMAL_3_DECIMAL_OPERATORS_H

int s21_get_bit_decimal(s21_decimal s21_decimal, int bit_number);

void s21_set_bit_decimal(s21_decimal *s21_decimal, int bit_number);

void s21_clear_bit_decimal(s21_decimal *s21_decimal, int bit_number);

int s21_get_scale(s21_decimal s21Decimal);

void s21_set_scale(s21_decimal *s21Decimal, int scale);

int s21_get_sign(s21_decimal s21Decimal);

void s21_set_sign(s21_decimal *s21Decimal);

void s21_clear_sign(s21_decimal *s21Decimal);

void s21_clear_decimal(s21_decimal *s21Decimal);

int s21_div_10_decimal(s21_decimal *value);

void s21_swap(s21_decimal *s21Decimal1, s21_decimal *s21Decimal2);

int s21_is_zero(s21_decimal general);

void s21_multiply_by_10_decimal(s21_decimal *decimal);

void s21_multiply_by_8_decimal(s21_decimal *decimal);

void s21_left_shift_decimal(s21_decimal *decimal);

void s21_power_10_decimal(s21_decimal *decimal, int n);

void s21_sqrt_10_decimal(s21_decimal *decimal, int n);

int s21_is_correct_decimal(s21_decimal decimal);

s21_decimal s21_get_decimal_empty();

s21_decimal s21_get_decimal_one();

int s21_is_empty_decimal(s21_decimal decimal);

void s21_set_bit_big_decimal(s21_big_decimal *s21BigDecimal, int bit_number);
void s21_clear_bit_big_decimal(s21_big_decimal *s21BigDecimal, int bit_number);
int s21_get_bit_big_decimal(s21_big_decimal s21BigDecimal, int bit_number);

int s21_get_scale_big_decimal(s21_big_decimal s21BigDecimal);
void s21_set_scale_big_decimal(s21_big_decimal *s21BigDecimal, int scale);

int s21_get_sign_big_decimal(s21_big_decimal s21BigDecimal);
void s21_set_sign_big_decimal(s21_big_decimal *s21BigDecimal);
void s21_clear_sign_big_decimal(s21_big_decimal *s21BigDecimal);

void s21_clear_big_decimal(s21_big_decimal *s21BigDecimal);

void s21_left_shift_big_decimal(s21_big_decimal *s21BigDecimal);
void s21_left_shift_big_decimal_by(s21_big_decimal *s21BigDecimal, int times);
void s21_right_shift_big_decimal(s21_big_decimal *s21BigDecimal);

void s21_multiply_by_8(s21_big_decimal *s21BigDecimal);
void s21_multiply_by_10(s21_big_decimal *s21BigDecimal);
void s21_power_10_big_decimal(s21_big_decimal *result, int n);

int s21_div_10_big_decimal(s21_big_decimal *value);
void s21_sum_big_decimal(s21_big_decimal *res, s21_big_decimal val_1,
                         s21_big_decimal val_2);
void s21_sub_big_decimal(s21_big_decimal *result, s21_big_decimal value_1,
                         s21_big_decimal value_2);

void s21_set_bit(unsigned long *num, int bit_number);
void s21_clear_bit(unsigned long *num, int bit_number);
int s21_get_bit(unsigned long num, int bit_number);

int s21_is_overflow(s21_big_decimal s21BigDecimal);
int s21_bank_rounding_big_decimal(s21_big_decimal *value);
void s21_normalize(s21_big_decimal *s21BigDecimal1,
                   s21_big_decimal *s21BigDecimal2);

s21_big_decimal s21_get_big_decimal_one();
s21_big_decimal s21_get_big_decimal_zero();
#endif
