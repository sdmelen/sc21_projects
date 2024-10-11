#ifndef S21_TESTS_H
#define S21_TESTS_H

#include <check.h>

#include "../s21_decimal.h"

#define SCALE_1 0x10000
#define SCALE_3 0x30000
#define SIGN_MINUS_0x 0x80000000
#define SCALE_1_SIGN_MINUS 0x80010000
#define SCALE_3_SIGN_MINUS 0x80030000
#define SCALE_20_SIGN_MINUS 0x80140000

Suite *suite_s21_from_int_to_decimal(void);
Suite *suite_s21_from_decimal_to_int(void);
Suite *suite_s21_utulity_functions_test(void);
Suite *s21_add_cases(void);
Suite *s21_sub_cases(void);
Suite *s21_mul_cases(void);
Suite *s21_div_cases(void);
Suite *suite_s21_is_equal_test(void);
Suite *suite_s21_is_not_equal_test(void);
Suite *suite_s21_is_greater_test(void);
Suite *suite_s21_is_less_test(void);
Suite *suite_s21_is_greater_or_equal_test(void);
Suite *suite_s21_is_less_or_equal_test(void);
Suite *floor_suite(void);
Suite *round_suite(void);
Suite *truncate_suite(void);
Suite *negate_suite(void);

void test_floor(s21_decimal decimal, s21_decimal decimal_check);
void test_round(s21_decimal decimal, s21_decimal decimal_check);
void test_truncate(s21_decimal decimal, s21_decimal decimal_check);
void test_negate(s21_decimal decimal, s21_decimal decimal_check);
Suite *suite_s21_from_decimal_to_float(void);
Suite *suite_s21_from_float_to_decimal(void);

void run_tests(void);
void run_testcase(Suite *testcase);

#endif
