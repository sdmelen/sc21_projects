#include "s21_test.h"

START_TEST(regular) {
  int num_int = 0;
  s21_decimal num_decimal = {{254, 0, 0, 0}};
  int expected_int = 254;

  s21_from_decimal_to_int(num_decimal, &num_int);
  ck_assert_int_eq(num_int, expected_int);
}
END_TEST

START_TEST(regular_minus) {
  int num_int = 2;
  s21_decimal num_decimal = {{254, 0, 0, SIGN_MINUS_0x}};
  int expected_int = -254;
  int expected_error_code = 0;
  int error_code = s21_from_decimal_to_int(num_decimal, &num_int);
  ck_assert_int_eq(error_code, expected_error_code);
  ck_assert_int_eq(num_int, expected_int);
}

END_TEST

START_TEST(regular_with_scale) {
  int num_int = 0;
  s21_decimal num_decimal = {{1234, 0, 0, SCALE_1}};
  int expected_int = 123;

  s21_from_decimal_to_int(num_decimal, &num_int);
  ck_assert_int_eq(num_int, expected_int);
}
END_TEST

START_TEST(regular_with_scale_minus) {
  int num_int = 0;
  s21_decimal num_decimal = {{1234, 0, 0, SCALE_1_SIGN_MINUS}};
  int expected_int = -123;

  s21_from_decimal_to_int(num_decimal, &num_int);
  ck_assert_int_eq(num_int, expected_int);
}
END_TEST

START_TEST(big_scale) {
  int num_int = 0;
  s21_decimal num_decimal = {{12346789, 0, 0, SCALE_20_SIGN_MINUS}};
  int expected_int = 0;

  s21_from_decimal_to_int(num_decimal, &num_int);
  ck_assert_int_eq(num_int, expected_int);
}
END_TEST

START_TEST(error_1) {
  int *p_to_int = NULL;
  s21_decimal num_decimal = {{1234, 0, 0, SCALE_1_SIGN_MINUS}};
  int expected_int = 1;

  ck_assert_int_eq(s21_from_decimal_to_int(num_decimal, p_to_int),
                   expected_int);
}
END_TEST
START_TEST(error_2) {
  int num_int = 0;
  s21_decimal num_decimal = {{1234, 0, 0, 0x3241571}};
  int expected_int = 1;

  ck_assert_int_eq(s21_from_decimal_to_int(num_decimal, &num_int),
                   expected_int);
}
END_TEST
START_TEST(error_3) {
  int num_int = 0;
  s21_decimal num_decimal = {{0x90000000, 0x0, 0x0, 0x80000000}};
  int expected_int = 1;

  ck_assert_int_eq(s21_from_decimal_to_int(num_decimal, &num_int),
                   expected_int);
}
END_TEST
START_TEST(error_4) {
  int num_int = 0;
  s21_decimal num_decimal = {{0x7FFFFFFF, 0xF, 0x0, 0x0}};
  int expected_int = 1;

  ck_assert_int_eq(s21_from_decimal_to_int(num_decimal, &num_int),
                   expected_int);
}
END_TEST

Suite *suite_s21_from_decimal_to_int(void) {
  Suite *s = suite_create("from_decimal_to_int");
  TCase *tc = tcase_create("from_decimal_to_int_tc");

  tcase_add_test(tc, regular);
  tcase_add_test(tc, regular_minus);
  tcase_add_test(tc, regular_with_scale);
  tcase_add_test(tc, regular_with_scale_minus);
  tcase_add_test(tc, error_1);
  tcase_add_test(tc, error_2);
  tcase_add_test(tc, big_scale);
  tcase_add_test(tc, error_3);
  tcase_add_test(tc, error_4);

  suite_add_tcase(s, tc);
  return s;
}
