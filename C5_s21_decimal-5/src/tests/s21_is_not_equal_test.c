#include "s21_test.h"
START_TEST(test_not_equal_zero) {
  s21_decimal a = {{0, 0, 0, 0}};
  s21_decimal b = {{1, 0, 0, 0}};
  ck_assert_int_eq(s21_is_not_equal(a, b), 1);
}
END_TEST

START_TEST(test_equal_zero) {
  s21_decimal a = {{0, 0, 0, 0}};
  s21_decimal b = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_not_equal(a, b), 0);
}
END_TEST

START_TEST(test_not_equal_max_values) {
  s21_decimal a = {{UINT32_MAX, UINT32_MAX, UINT32_MAX, 0}};
  s21_decimal b = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_not_equal(a, b), 1);
}
END_TEST

START_TEST(test_equal_max_values) {
  s21_decimal a = {{UINT32_MAX, UINT32_MAX, UINT32_MAX, 0}};
  s21_decimal b = {{UINT32_MAX, UINT32_MAX, UINT32_MAX, 0}};
  ck_assert_int_eq(s21_is_not_equal(a, b), 0);
}
END_TEST

START_TEST(test_not_equal_with_different_scale) {
  s21_decimal a = {{1, 0, 0, 0x00010000}};
  s21_decimal b = {{1, 0, 0, 0}};
  ck_assert_int_eq(s21_is_not_equal(a, b), 1);
}
END_TEST

START_TEST(test_equal_with_scale) {
  s21_decimal a = {{1000000, 0, 0, 0x00060000}};
  s21_decimal b = {{1, 0, 0, 0}};
  ck_assert_int_eq(s21_is_not_equal(a, b), 0);
}
END_TEST

START_TEST(test_equal_negative_values) {
  s21_decimal a = {{1, 0, 0, 0x80000000}};
  s21_decimal b = {{1, 0, 0, 0x80000000}};
  ck_assert_int_eq(s21_is_not_equal(a, b), 0);
}
END_TEST

START_TEST(test_not_equal_negative_and_positive_values) {
  s21_decimal a = {{1, 0, 0, 0x80000000}};
  s21_decimal b = {{1, 0, 0, 0}};
  ck_assert_int_eq(s21_is_not_equal(a, b), 1);
}
END_TEST

START_TEST(test_equal_negative_with_scale) {
  s21_decimal a = {{1000000, 0, 0, 0x80060000}};
  s21_decimal b = {{1, 0, 0, 0x80000000}};
  ck_assert_int_eq(s21_is_not_equal(a, b), 0);
}
END_TEST

START_TEST(test_equal_different_representation_same_value) {
  s21_decimal a = {{5000, 0, 0, 0x00020000}};
  s21_decimal b = {{50000, 0, 0, 0x00030000}};
  ck_assert_int_eq(s21_is_not_equal(a, b), 0);
}
END_TEST

START_TEST(test_equal_with_scale_different_representation) {
  s21_decimal a = {{500000, 0, 0, 0x00050000}};
  s21_decimal b = {{5, 0, 0, 0}};
  ck_assert_int_eq(s21_is_not_equal(a, b), 0);
}
END_TEST

START_TEST(test_not_equal_large_scale_difference) {
  s21_decimal a = {{1, 0, 0, 0x001C0000}};
  s21_decimal b = {{1, 0, 0, 0}};
  ck_assert_int_eq(s21_is_not_equal(a, b), 1);
}
END_TEST

Suite *suite_s21_is_not_equal_test(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("s21_is_not_equal");
  tc_core = tcase_create("Core");

  tcase_add_test(tc_core, test_not_equal_zero);
  tcase_add_test(tc_core, test_equal_zero);
  tcase_add_test(tc_core, test_not_equal_max_values);
  tcase_add_test(tc_core, test_equal_max_values);
  tcase_add_test(tc_core, test_not_equal_with_different_scale);
  tcase_add_test(tc_core, test_equal_with_scale);
  tcase_add_test(tc_core, test_equal_negative_values);
  tcase_add_test(tc_core, test_not_equal_negative_and_positive_values);
  tcase_add_test(tc_core, test_equal_negative_with_scale);
  tcase_add_test(tc_core, test_equal_different_representation_same_value);
  tcase_add_test(tc_core, test_equal_with_scale_different_representation);
  tcase_add_test(tc_core, test_not_equal_large_scale_difference);

  suite_add_tcase(s, tc_core);

  return s;
}
