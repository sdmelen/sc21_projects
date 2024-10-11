#include "s21_test.h"
START_TEST(test_greater_or_equal_positive_values) {
  s21_decimal a = {{1, 0, 0, 0}};
  s21_decimal b = {{1, 0, 0, 0}};
  ck_assert_int_eq(s21_is_greater_or_equal(a, b), 1);

  a.bits[0] = 2;
  ck_assert_int_eq(s21_is_greater_or_equal(a, b), 1);

  b.bits[0] = 3;
  ck_assert_int_eq(s21_is_greater_or_equal(a, b), 0);
}
END_TEST

START_TEST(test_greater_or_equal_negative_values) {
  s21_decimal a = {{1, 0, 0, 0x80000000}};
  s21_decimal b = {{1, 0, 0, 0x80000000}};
  ck_assert_int_eq(s21_is_greater_or_equal(a, b), 1);

  a.bits[0] = 2;
  ck_assert_int_eq(s21_is_greater_or_equal(a, b), 0);

  b.bits[0] = 3;
  ck_assert_int_eq(s21_is_greater_or_equal(a, b), 1);
}
END_TEST

START_TEST(test_greater_or_equal_different_signs) {
  s21_decimal a = {{1, 0, 0, 0}};
  s21_decimal b = {{1, 0, 0, 0x80000000}};
  ck_assert_int_eq(s21_is_greater_or_equal(a, b), 1);

  a.bits[3] = 0x80000000;
  b.bits[3] = 0;
  ck_assert_int_eq(s21_is_greater_or_equal(a, b), 0);
}
END_TEST

START_TEST(test_greater_or_equal_zero_values) {
  s21_decimal a = {{0, 0, 0, 0}};
  s21_decimal b = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_greater_or_equal(a, b), 1);

  a.bits[3] = 0x80000000;
  b.bits[3] = 0x80000000;
  ck_assert_int_eq(s21_is_greater_or_equal(a, b), 1);

  b.bits[3] = 0;
  ck_assert_int_eq(s21_is_greater_or_equal(a, b), 1);
}
END_TEST

START_TEST(test_greater_or_equal_different_scales) {
  s21_decimal a = {{1, 0, 0, 0x00010000}};
  s21_decimal b = {{10, 0, 0, 0x00020000}};
  ck_assert_int_eq(s21_is_greater_or_equal(a, b), 1);

  a.bits[0] = 1;
  a.bits[3] = 0x00020000;
  ck_assert_int_eq(s21_is_greater_or_equal(a, b), 0);
}
END_TEST

Suite *suite_s21_is_greater_or_equal_test(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("s21_is_greater_or_equal");
  tc_core = tcase_create("Core");

  tcase_add_test(tc_core, test_greater_or_equal_positive_values);
  tcase_add_test(tc_core, test_greater_or_equal_negative_values);
  tcase_add_test(tc_core, test_greater_or_equal_different_signs);
  tcase_add_test(tc_core, test_greater_or_equal_zero_values);
  tcase_add_test(tc_core, test_greater_or_equal_different_scales);
  suite_add_tcase(s, tc_core);

  return s;
}