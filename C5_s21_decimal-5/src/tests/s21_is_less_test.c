#include "s21_test.h"
START_TEST(test_less_zero_and_non_zero) {
  s21_decimal a = {{0, 0, 0, 0}};
  s21_decimal b = {{1, 0, 0, 0}};
  ck_assert_int_eq(s21_is_less(a, b), 1);
}
END_TEST

START_TEST(test_less_negative_and_positive) {
  s21_decimal a = {{1, 0, 0, 0x80000000}};
  s21_decimal b = {{1, 0, 0, 0}};
  ck_assert_int_eq(s21_is_less(a, b), 1);
}
END_TEST

START_TEST(test_less_equal_values) {
  s21_decimal a = {{1, 0, 0, 0}};
  s21_decimal b = {{1, 0, 0, 0}};
  ck_assert_int_eq(s21_is_less(a, b), 0);
}
END_TEST

START_TEST(test_less_with_scale) {
  s21_decimal a = {{1, 0, 0, 0x00010000}};
  s21_decimal b = {{2, 0, 0, 0}};
  ck_assert_int_eq(s21_is_less(a, b), 1);
}
END_TEST

START_TEST(test_less_with_normalized_scale) {
  s21_decimal a = {{1000000, 0, 0, 0x00060000}};
  s21_decimal b = {{2, 0, 0, 0}};
  ck_assert_int_eq(s21_is_less(a, b), 1);
}
END_TEST

START_TEST(test_less_negative_values) {
  s21_decimal a = {{2, 0, 0, 0x80000000}};
  s21_decimal b = {{1, 0, 0, 0x80000000}};
  ck_assert_int_eq(s21_is_less(a, b), 1);
}
END_TEST

START_TEST(test_less_equal_values_with_different_scale) {
  s21_decimal a = {{1000, 0, 0, 0x00030000}};
  s21_decimal b = {{1, 0, 0, 0}};
  ck_assert_int_eq(s21_is_less(a, b), 0);
}
END_TEST

START_TEST(test_less_negative_and_positive_with_scale) {
  s21_decimal a = {{100, 0, 0, 0x00020000}};
  s21_decimal b = {{1, 0, 0, 0x80000000}};
  ck_assert_int_eq(s21_is_less(a, b), 0);
}
END_TEST

START_TEST(test_less_min_values) {
  s21_decimal a = {{1, 0, 0, 0x80000000}};
  s21_decimal b = {{0, 0, 0, 0x80000000}};
  ck_assert_int_eq(s21_is_less(a, b), 1);
}
END_TEST

START_TEST(test_less_max_values) {
  s21_decimal a = {{UINT32_MAX, UINT32_MAX, UINT32_MAX, 0}};
  s21_decimal b = {{UINT32_MAX, UINT32_MAX, UINT32_MAX, 0x80000000}};
  ck_assert_int_eq(s21_is_less(a, b), 0);
}
END_TEST

START_TEST(test_less_with_scale_larger_value) {
  s21_decimal a = {{1, 0, 0, 0x00010000}};
  s21_decimal b = {{2, 0, 0, 0}};
  ck_assert_int_eq(s21_is_less(a, b), 1);
}
END_TEST

START_TEST(test_less_with_scale_smaller_value) {
  s21_decimal a = {{20, 0, 0, 0x00010000}};
  s21_decimal b = {{1, 0, 0, 0}};
  ck_assert_int_eq(s21_is_less(a, b), 0);
}
END_TEST

START_TEST(test_less_with_scale_equal_value) {
  s21_decimal a = {{500, 0, 0, 0x00020000}};
  s21_decimal b = {{50, 0, 0, 0x00010000}};
  ck_assert_int_eq(s21_is_less(a, b), 0);
}
END_TEST

Suite *suite_s21_is_less_test(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("s21_is_less");
  tc_core = tcase_create("Core");

  tcase_add_test(tc_core, test_less_zero_and_non_zero);
  tcase_add_test(tc_core, test_less_negative_and_positive);
  tcase_add_test(tc_core, test_less_equal_values);
  tcase_add_test(tc_core, test_less_with_scale);
  tcase_add_test(tc_core, test_less_with_normalized_scale);
  tcase_add_test(tc_core, test_less_negative_values);
  tcase_add_test(tc_core, test_less_equal_values_with_different_scale);
  tcase_add_test(tc_core, test_less_negative_and_positive_with_scale);
  tcase_add_test(tc_core, test_less_min_values);
  tcase_add_test(tc_core, test_less_max_values);
  tcase_add_test(tc_core, test_less_with_scale_larger_value);
  tcase_add_test(tc_core, test_less_with_scale_smaller_value);
  tcase_add_test(tc_core, test_less_with_scale_equal_value);
  tcase_add_test(tc_core, test_less_negative_and_positive_with_scale);
  tcase_add_test(tc_core, test_less_negative_and_positive_with_scale);

  suite_add_tcase(s, tc_core);

  return s;
}