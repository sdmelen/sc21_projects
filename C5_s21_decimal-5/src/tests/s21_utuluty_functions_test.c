#include "s21_test.h"

START_TEST(s21_set_sign_f) {
  int sign_value = 1;
  s21_decimal num_decimal = {{254, 123, 321, 0}};

  s21_set_sign(&num_decimal);
  ck_assert_int_eq(s21_get_sign(num_decimal), sign_value);
}
END_TEST
START_TEST(s21_set_sign_f2) {
  int sign_value = 0;
  s21_decimal num_decimal = {{254, 123, 321, SIGN_MINUS_0x}};

  s21_clear_sign(&num_decimal);
  ck_assert_int_eq(s21_get_sign(num_decimal), sign_value);
}
END_TEST

START_TEST(s21_get_sign_f) {
  int sign_value_expected = 1;
  s21_decimal num_decimal = {{254, 123, 321, SIGN_MINUS_0x}};

  ck_assert_int_eq(s21_get_sign(num_decimal), sign_value_expected);
}
END_TEST
START_TEST(s21_get_sign_f_2) {
  int sign_value_expected = 0;
  s21_decimal num_decimal = {{254, 123, 321, 0}};

  ck_assert_int_eq(s21_get_sign(num_decimal), sign_value_expected);
}
END_TEST
START_TEST(s21_get_sign_f_3) {
  int sign_value_expected = 1;
  s21_decimal num_decimal = {{254, 123, 321, SCALE_1_SIGN_MINUS}};
  ck_assert_int_eq(s21_get_sign(num_decimal), sign_value_expected);
}
END_TEST

START_TEST(s21_get_scale_1) {
  int scale_value_expected = 1;
  s21_decimal num_decimal = {{254, 123, 321, SCALE_1_SIGN_MINUS}};
  ck_assert_int_eq(s21_get_scale(num_decimal), scale_value_expected);
}
END_TEST

START_TEST(s21_get_scale_2) {
  int scale_value_expected = 3;
  s21_decimal num_decimal = {{254, 123, 321, SCALE_3_SIGN_MINUS}};
  ck_assert_int_eq(s21_get_scale(num_decimal), scale_value_expected);
}
END_TEST

START_TEST(s21_get_scale_3) {
  int scale_value_expected = 0;
  s21_decimal num_decimal = {{254, 123, 321, 0}};
  ck_assert_int_eq(s21_get_scale(num_decimal), scale_value_expected);
}
END_TEST

START_TEST(s21_get_scale_4) {
  int scale_value_expected = 20;
  s21_decimal num_decimal = {{254, 123, 321, SCALE_20_SIGN_MINUS}};
  ck_assert_int_eq(s21_get_scale(num_decimal), scale_value_expected);
}
END_TEST

START_TEST(s21_set_scale_1) {
  int scale_value = 0;
  int scale_value_expected = 0;

  s21_decimal num_decimal = {{254, 123, 321, SCALE_3_SIGN_MINUS}};
  s21_set_scale(&num_decimal, scale_value);
  ck_assert_int_eq(s21_get_scale(num_decimal), scale_value_expected);
}
END_TEST

START_TEST(s21_set_scale_2) {
  int scale_value = 20;
  int scale_value_expected = 20;

  s21_decimal num_decimal = {{254, 123, 321, SCALE_3_SIGN_MINUS}};
  s21_set_scale(&num_decimal, scale_value);
  ck_assert_int_eq(s21_get_scale(num_decimal), scale_value_expected);
}
END_TEST

START_TEST(s21_set_scale_3) {
  int scale_value = 28;
  int scale_value_expected = 28;

  s21_decimal num_decimal = {{254, 123, 321, 0}};
  s21_set_scale(&num_decimal, scale_value);
  ck_assert_int_eq(s21_get_scale(num_decimal), scale_value_expected);
}
END_TEST

Suite *suite_s21_utulity_functions_test(void) {
  Suite *s = suite_create("utulity_functions_test");
  TCase *tc = tcase_create("utulity_functions_test_tc");

  tcase_add_test(tc, s21_set_sign_f);
  tcase_add_test(tc, s21_get_sign_f);
  tcase_add_test(tc, s21_get_sign_f_2);
  tcase_add_test(tc, s21_set_sign_f2);
  tcase_add_test(tc, s21_get_sign_f_3);
  tcase_add_test(tc, s21_get_scale_1);
  tcase_add_test(tc, s21_get_scale_2);
  tcase_add_test(tc, s21_get_scale_3);
  tcase_add_test(tc, s21_get_scale_4);
  tcase_add_test(tc, s21_set_scale_1);
  tcase_add_test(tc, s21_set_scale_2);
  tcase_add_test(tc, s21_set_scale_3);

  suite_add_tcase(s, tc);
  return s;
}
