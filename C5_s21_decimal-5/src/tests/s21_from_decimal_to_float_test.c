#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "s21_test.h"

START_TEST(positive_numbers) {
  s21_decimal dec = {{0x50fa5a3, 0x0, 0x0, 0x60000}};
  float initial = 84.911523;
  float result = 0;
  int expected_error_code = 0;
  int result_error_code = -1;

  result_error_code = s21_from_decimal_to_float(dec, &result);
  ck_assert_float_eq(initial, result);
  ck_assert_int_eq(expected_error_code, result_error_code);
}

END_TEST
START_TEST(negative_numbers) {
  s21_decimal dec = {{0x7e532d, 0x0, 0x0, 0x80030000}};
  float initial = -8278.829;
  float result = 0;
  int expected_error_code = 0;
  int result_error_code = -1;

  result_error_code = s21_from_decimal_to_float(dec, &result);
  ck_assert_float_eq(initial, result);
  ck_assert_int_eq(expected_error_code, result_error_code);
}

END_TEST

START_TEST(positive_zero) {
  s21_decimal dec = {{0x0, 0x0, 0x0, 0x0}};
  float initial = 0.0;
  float result = -1.0;
  int expected_error_code = 0;
  int result_error_code = -1;

  result_error_code = s21_from_decimal_to_float(dec, &result);
  ck_assert_float_eq(initial, result);
  ck_assert_int_eq(expected_error_code, result_error_code);
}

END_TEST

START_TEST(negative_zero) {
  s21_decimal dec = {{0x0, 0x0, 0x0, 0x80000000}};
  float initial = -0.0;
  float result = 0.0;
  int expected_error_code = 0;
  int result_error_code = -1;

  result_error_code = s21_from_decimal_to_float(dec, &result);
  ck_assert_float_eq(initial, result);
  ck_assert_int_eq(expected_error_code, result_error_code);
}

END_TEST

START_TEST(negative_with_scale) {
  s21_decimal dec = {{0x98584406, 0x4bd, 0x0, 0x800a0000}};
  float initial = -521.2351251462;
  float result = 0.0;
  int expected_error_code = 0;
  int result_error_code = -1;

  result_error_code = s21_from_decimal_to_float(dec, &result);
  ck_assert_float_eq(initial, result);
  ck_assert_int_eq(expected_error_code, result_error_code);
}

END_TEST
START_TEST(positive_with_scale) {
  s21_decimal dec = {{0x6e6402, 0x0, 0x0, 0x60000}};
  float initial = 7.234562;
  float result = 0.0;
  int expected_error_code = 0;
  int result_error_code = -1;

  result_error_code = s21_from_decimal_to_float(dec, &result);
  ck_assert_float_eq(initial, result);
  ck_assert_int_eq(expected_error_code, result_error_code);
}

END_TEST
START_TEST(wrong_scale) {
  s21_decimal dec = {{0x5d76b2, 0x0, 0x0, 0xFF0000}};
  float result = 0.0;
  int expected_error_code = 1;
  int result_error_code = -1;

  result_error_code = s21_from_decimal_to_float(dec, &result);
  ck_assert_float_eq((float)0.0, result);
  ck_assert_int_eq(expected_error_code, result_error_code);
}

END_TEST
START_TEST(incorrect_decimal) {
  s21_decimal dec = {{0x20779395, 0x6, 0x0, 0x70020}};
  float result = 0.0;
  int expected_error_code = 1;
  int result_error_code = -1;

  result_error_code = s21_from_decimal_to_float(dec, &result);
  ck_assert_float_eq(0.0, result);
  ck_assert_int_eq(expected_error_code, result_error_code);
}

END_TEST
START_TEST(incorrect_pointer) {
  s21_decimal dec = {{0x5f22a5, 0x0, 0x0, 0x60000}};
  float *ptr = NULL;
  int expected_error_code = 1;
  int result_error_code = -1;

  result_error_code = s21_from_decimal_to_float(dec, ptr);
  ck_assert_int_eq(expected_error_code, result_error_code);
}

END_TEST
START_TEST(int_positive) {
  float expected_float = 10;
  s21_decimal dec_res = {{0xa, 0x0, 0x0, 0x0}};
  float res_float = 0;

  s21_from_decimal_to_float(dec_res, &res_float);
  ck_assert_float_eq(res_float, expected_float);
}
END_TEST

START_TEST(int_negative) {
  float expected_float = -10;
  s21_decimal dec_res = {{0xa, 0x0, 0x0, SIGN_MINUS_0x}};
  float res_float = 0;

  s21_from_decimal_to_float(dec_res, &res_float);
  ck_assert_float_eq(res_float, expected_float);
}
END_TEST

START_TEST(str_cmp_1) {
  float expected_float = 1234.2314;
  s21_decimal dec_res = {{0xbc542a, 0x0, 0x0, 0x40000}};
  float res_float = 0;
  char res[32] = {0};
  char expected[32] = {0};
  s21_from_decimal_to_float(dec_res, &res_float);
  sprintf(res, "%.7g", res_float);
  sprintf(expected, "%.7g", expected_float);
  ck_assert_str_eq(res, expected);
}
END_TEST

START_TEST(random_4) {
  float f_res = 0;
  char res[32] = {0};
  char expected[32] = {0};
  s21_decimal dec_res = {{0, 0, 0, 0}};
  srand(time(NULL));

  for (int i = 0; i < 999; i++) {
    int tmp = rand() * rand();
    s21_from_int_to_decimal(tmp, &dec_res);
    s21_from_decimal_to_float(dec_res, &f_res);

    sprintf(res, "%.7e", f_res);
    sprintf(expected, "%.7e", (float)tmp);
    ck_assert_str_eq(res, expected);
  }
}
END_TEST

Suite *suite_s21_from_decimal_to_float(void) {
  Suite *s = suite_create("from_decimal_to_float");
  TCase *tc = tcase_create("from_decimal_to_float_tc");

  tcase_add_test(tc, positive_numbers);
  tcase_add_test(tc, negative_numbers);
  tcase_add_test(tc, positive_zero);
  tcase_add_test(tc, negative_zero);
  tcase_add_test(tc, negative_with_scale);
  tcase_add_test(tc, positive_with_scale);
  tcase_add_test(tc, wrong_scale);
  tcase_add_test(tc, incorrect_decimal);
  tcase_add_test(tc, incorrect_pointer);
  tcase_add_test(tc, int_positive);
  tcase_add_test(tc, int_negative);
  tcase_add_test(tc, str_cmp_1);
  tcase_add_test(tc, random_4);
  /*tcase_add_test(tc, int_positive_with_scale);
  tcase_add_test(tc, int_positive_with_scale_minus);
  tcase_add_test(tc, error_1);
  tcase_add_test(tc, big_scale);
  tcase_add_test(tc, error_bits_overflow);
  */

  suite_add_tcase(s, tc);
  return s;
}
