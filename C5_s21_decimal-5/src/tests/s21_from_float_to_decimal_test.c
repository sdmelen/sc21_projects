#include <stdio.h>

#include "s21_test.h"

START_TEST(test_1) {
  float initial_float = 6.234543;
  s21_decimal dec_initial = {{0x0, 0x6, 0x5, 0x0}};
  s21_decimal dec_expected = {{0x5f21af, 0x0, 0x0, 0x60000}};
  float res_float = 0;
  char res[32] = {0};
  char expected[32] = {0};
  int error_code = -1;
  int expected_error_code = 0;
  error_code = s21_from_float_to_decimal(initial_float, &dec_initial);
  ck_assert_int_eq(error_code, expected_error_code);
  ck_assert_mem_eq(&dec_expected, &dec_initial, sizeof(s21_decimal));
  s21_from_decimal_to_float(dec_initial, &res_float);
  sprintf(res, "%.7e", res_float);
  sprintf(expected, "%.7e", initial_float);
  ck_assert_str_eq(res, expected);
}
END_TEST

START_TEST(test_2) {
  float initial_float = -6.234543;
  s21_decimal dec_initial = {{0x0, 0x0, 0x0, 0x0}};
  s21_decimal dec_expected = {{0x5f21af, 0x0, 0x0, 0x80060000}};
  float res_float = 0;
  char res[32] = {0};
  char expected[32] = {0};
  int error_code = -1;
  int expected_error_code = 0;
  error_code = s21_from_float_to_decimal(initial_float, &dec_initial);
  ck_assert_int_eq(error_code, expected_error_code);
  ck_assert_mem_eq(&dec_expected, &dec_initial, sizeof(s21_decimal));
  s21_from_decimal_to_float(dec_initial, &res_float);
  sprintf(res, "%.7e", res_float);
  sprintf(expected, "%.7e", initial_float);
  ck_assert_str_eq(res, expected);
}
END_TEST

START_TEST(test_3) {
  float initial_float = 0.123456;
  s21_decimal dec_initial = {{0x0, 0x0, 0x0, 0x0}};
  s21_decimal dec_expected = {{0x1e240, 0x0, 0x0, 0x60000}};
  float res_float = 0;
  char res[32] = {0};
  char expected[32] = {0};
  int error_code = -1;
  int expected_error_code = 0;
  error_code = s21_from_float_to_decimal(initial_float, &dec_initial);
  ck_assert_int_eq(error_code, expected_error_code);
  ck_assert_mem_eq(&dec_expected, &dec_initial, sizeof(s21_decimal));
  s21_from_decimal_to_float(dec_initial, &res_float);
  sprintf(res, "%.7e", res_float);
  sprintf(expected, "%.7e", initial_float);
  ck_assert_str_eq(res, expected);
}
END_TEST

START_TEST(test_zero) {
  float initial_float = 0.0;
  s21_decimal dec_initial = {{0x6, 0x3, 0x1, 0x8}};
  s21_decimal dec_expected = {{0x0, 0x0, 0x0, 0x0}};
  float res_float = 0;
  char res[32] = {0};
  char expected[32] = {0};
  int error_code = -1;
  int expected_error_code = 0;
  error_code = s21_from_float_to_decimal(initial_float, &dec_initial);
  ck_assert_int_eq(error_code, expected_error_code);
  ck_assert_mem_eq(&dec_expected, &dec_initial, sizeof(s21_decimal));
  s21_from_decimal_to_float(dec_initial, &res_float);
  sprintf(res, "%.7e", res_float);
  sprintf(expected, "%.7e", initial_float);
  ck_assert_str_eq(res, expected);
}
END_TEST

START_TEST(test_minus_zero) {
  float initial_float = -0.0;
  s21_decimal dec_initial = {{0x6, 0x3, 0x1, 0x8}};
  s21_decimal dec_expected = {{0x0, 0x0, 0x0, 0x80000000}};
  float res_float = 0;
  char res[32] = {0};
  char expected[32] = {0};
  int error_code = -1;
  int expected_error_code = 0;
  error_code = s21_from_float_to_decimal(initial_float, &dec_initial);
  ck_assert_int_eq(error_code, expected_error_code);
  ck_assert_mem_eq(&dec_expected, &dec_initial, sizeof(s21_decimal));
  s21_from_decimal_to_float(dec_initial, &res_float);
  sprintf(res, "%.7e", res_float);
  sprintf(expected, "%.7e", initial_float);
  ck_assert_str_eq(res, expected);
}
END_TEST

START_TEST(test_too_big_float) {
  float initial_float = 7992817255e+28f;
  s21_decimal dec_initial = {{0x0, 0x0, 0x0, 0x0}};
  s21_decimal dec_expected = {{0x0, 0x0, 0x0, 0x0}};
  float res_float = 0;
  int error_code = -1;
  int expected_error_code = 1;
  error_code = s21_from_float_to_decimal(initial_float, &dec_initial);
  ck_assert_int_eq(error_code, expected_error_code);
  ck_assert_mem_eq(&dec_expected, &dec_initial, sizeof(s21_decimal));
  s21_from_decimal_to_float(dec_initial, &res_float);
}
END_TEST
START_TEST(test_too_low_float) {
  float initial_float = 0.5e-28f;
  s21_decimal dec_initial = {{0x4, 0x1, 0x2, 0x3}};
  s21_decimal dec_expected = {{0x0, 0x0, 0x0, 0x0}};
  float res_float = 0;
  int error_code = -1;
  int expected_error_code = 1;
  error_code = s21_from_float_to_decimal(initial_float, &dec_initial);
  ck_assert_int_eq(error_code, expected_error_code);
  ck_assert_mem_eq(&dec_expected, &dec_initial, sizeof(s21_decimal));
  s21_from_decimal_to_float(dec_initial, &res_float);
}
END_TEST

START_TEST(test_5) {
  float initial_float = 0.000001;
  s21_decimal dec_initial = {{0x6, 0x3, 0x1, 0x8}};
  s21_decimal dec_expected = {{0x1, 0x0, 0x0, 0x60000}};
  float res_float = 0;
  char res[32] = {0};
  char expected[32] = {0};
  int error_code = -1;
  int expected_error_code = 0;
  error_code = s21_from_float_to_decimal(initial_float, &dec_initial);
  ck_assert_int_eq(error_code, expected_error_code);
  ck_assert_mem_eq(&dec_expected, &dec_initial, sizeof(s21_decimal));
  s21_from_decimal_to_float(dec_initial, &res_float);
  sprintf(res, "%.7e", res_float);
  sprintf(expected, "%.7e", initial_float);
  ck_assert_str_eq(res, expected);
}
END_TEST

START_TEST(test_6) {
  float initial_float = 123.41523671;
  s21_decimal dec_initial = {{0x6, 0x3, 0x1, 0x8}};
  s21_decimal dec_expected = {{0x12d4e8, 0x0, 0x0, 0x40000}};
  float res_float = 0;
  char res[32] = {0};
  char expected[32] = {0};
  int error_code = -1;
  int expected_error_code = 0;
  error_code = s21_from_float_to_decimal(initial_float, &dec_initial);
  ck_assert_int_eq(error_code, expected_error_code);
  ck_assert_mem_eq(&dec_expected, &dec_initial, sizeof(s21_decimal));
  s21_from_decimal_to_float(dec_initial, &res_float);
  sprintf(res, "%.6e", res_float);
  sprintf(expected, "%.6e", initial_float);

  ck_assert_str_eq(res, expected);
}
END_TEST

START_TEST(test_7) {
  float initial_float = 545706772;
  s21_decimal dec_initial = {{0x0, 0x0, 0x0, 0x0}};
  s21_decimal dec_expected = {{545706800, 0x0, 0x0, 0x0}};
  float res_float = 0;
  char res[32] = {0};
  char expected[32] = {0};
  int error_code = -1;
  int expected_error_code = 0;
  error_code = s21_from_float_to_decimal(initial_float, &dec_initial);
  ck_assert_int_eq(error_code, expected_error_code);
  ck_assert_mem_eq(&dec_expected, &dec_initial, sizeof(s21_decimal));
  s21_from_decimal_to_float(dec_initial, &res_float);
  sprintf(res, "%.6e", res_float);
  sprintf(expected, "%.6e", initial_float);
  ck_assert_str_eq(res, expected);
}
END_TEST

START_TEST(test_8) {
  float initial_float = 545706772;
  s21_decimal *ptr = NULL;
  int error_code = -1;
  int expected_error_code = 1;
  error_code = s21_from_float_to_decimal(initial_float, ptr);
  ck_assert_int_eq(error_code, expected_error_code);
}
END_TEST

START_TEST(test_9) {
  float initial_float = INFINITY;
  s21_decimal ptr = {{0, 0, 0, 0}};
  int error_code = -1;
  int expected_error_code = 1;
  error_code = s21_from_float_to_decimal(initial_float, &ptr);
  ck_assert_int_eq(error_code, expected_error_code);
}
END_TEST

Suite *suite_s21_from_float_to_decimal(void) {
  Suite *s = suite_create("from_float_to_decimal");
  TCase *tc = tcase_create("from_float_to_decimal_tc");

  tcase_add_test(tc, test_1);
  tcase_add_test(tc, test_2);
  tcase_add_test(tc, test_3);
  tcase_add_test(tc, test_zero);
  tcase_add_test(tc, test_minus_zero);
  tcase_add_test(tc, test_too_big_float);
  tcase_add_test(tc, test_too_low_float);
  tcase_add_test(tc, test_5);
  tcase_add_test(tc, test_6);
  tcase_add_test(tc, test_7);
  tcase_add_test(tc, test_8);
  tcase_add_test(tc, test_9);

  suite_add_tcase(s, tc);
  return s;
}
