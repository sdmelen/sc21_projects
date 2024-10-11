#include "s21_test.h"
START_TEST(test_greater_zero_and_zero) {
  s21_decimal a = {{0, 0, 0, 0}};
  s21_decimal b = {{0, 0, 0, 0x80000000}};
  ck_assert_int_eq(s21_is_greater(a, b), 0);
}
END_TEST

START_TEST(test_greater_positive_and_negative) {
  s21_decimal a = {{1, 0, 0, 0}};
  s21_decimal b = {{1, 0, 0, 0x80000000}};
  ck_assert_int_eq(s21_is_greater(a, b), 1);
}
END_TEST

START_TEST(test_greater_negative_and_positive) {
  s21_decimal a = {{1, 0, 0, 0x80000000}};
  s21_decimal b = {{1, 0, 0, 0}};
  ck_assert_int_eq(s21_is_greater(a, b), 0);
}
END_TEST

START_TEST(test_greater_with_scale) {
  s21_decimal a = {{1000000, 0, 0, 0x00060000}};
  s21_decimal b = {{1, 0, 0, 0}};
  ck_assert_int_eq(s21_is_greater(a, b), 0);
}
END_TEST

START_TEST(test_greater_negative_values) {
  s21_decimal a = {{2, 0, 0, 0x80000000}};
  s21_decimal b = {{1, 0, 0, 0x80000000}};
  ck_assert_int_eq(s21_is_greater(a, b), 0);
}
END_TEST

START_TEST(test_greater_same_values) {
  s21_decimal a = {{1, 0, 0, 0}};
  s21_decimal b = {{1, 0, 0, 0}};
  ck_assert_int_eq(s21_is_greater(a, b), 0);
}
END_TEST

START_TEST(test_greater_large_numbers) {
  s21_decimal a = {{UINT32_MAX, UINT32_MAX, UINT32_MAX, 0}};
  s21_decimal b = {{UINT32_MAX - 1, UINT32_MAX, UINT32_MAX, 0}};
  ck_assert_int_eq(s21_is_greater(a, b), 1);
}
END_TEST

START_TEST(test_greater_with_different_scales) {
  s21_decimal a = {{10, 0, 0, 0x00010000}};
  s21_decimal b = {{1, 0, 0, 0}};
  ck_assert_int_eq(s21_is_greater(a, b), 0);
}
END_TEST

START_TEST(test_greater_max_negative_and_min_positive) {
  s21_decimal a = {{UINT32_MAX, UINT32_MAX, UINT32_MAX, 0x80000000}};
  s21_decimal b = {{1, 0, 0, 0}};
  ck_assert_int_eq(s21_is_greater(a, b), 0);
}
END_TEST

START_TEST(test_greater_min_negative_and_max_positive) {
  s21_decimal a = {{1, 0, 0, 0x80000000}};
  s21_decimal b = {{UINT32_MAX, UINT32_MAX, UINT32_MAX, 0}};
  ck_assert_int_eq(s21_is_greater(a, b), 0);
}
END_TEST

START_TEST(test_greater_with_zero) {
  s21_decimal a = {{0, 0, 0, 0}};
  s21_decimal b = {{1, 0, 0, 0}};
  ck_assert_int_eq(s21_is_greater(a, b), 0);
}
END_TEST

START_TEST(test_greater_with_negative_zero) {
  s21_decimal a = {{0, 0, 0, 0x80000000}};
  s21_decimal b = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_greater(a, b), 0);
}
END_TEST

Suite *suite_s21_is_greater_test(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("s21_is_greater");
  tc_core = tcase_create("Core");

  tcase_add_test(tc_core, test_greater_zero_and_zero);
  tcase_add_test(tc_core, test_greater_positive_and_negative);
  tcase_add_test(tc_core, test_greater_negative_and_positive);
  tcase_add_test(tc_core, test_greater_with_scale);
  tcase_add_test(tc_core, test_greater_negative_values);
  tcase_add_test(tc_core, test_greater_same_values);
  tcase_add_test(tc_core, test_greater_large_numbers);
  tcase_add_test(tc_core, test_greater_with_different_scales);
  tcase_add_test(tc_core, test_greater_max_negative_and_min_positive);
  tcase_add_test(tc_core, test_greater_min_negative_and_max_positive);
  tcase_add_test(tc_core, test_greater_with_zero);
  tcase_add_test(tc_core, test_greater_with_negative_zero);

  suite_add_tcase(s, tc_core);

  return s;
}
