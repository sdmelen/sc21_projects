#include "s21_test.h"

#include <stdio.h>
int main(void) {
  run_tests();
  return 0;
}

void run_tests(void) {
  Suite *list_cases[] = {suite_s21_from_int_to_decimal(),
                         suite_s21_from_decimal_to_int(),
                         suite_s21_utulity_functions_test(),
                         suite_s21_from_decimal_to_float(),
                         suite_s21_from_float_to_decimal(),
                         s21_add_cases(),
                         s21_sub_cases(),
                         s21_mul_cases(),
                         s21_div_cases(),
                         suite_s21_is_equal_test(),
                         suite_s21_is_not_equal_test(),
                         suite_s21_is_greater_test(),
                         suite_s21_is_less_test(),
                         suite_s21_is_greater_or_equal_test(),
                         suite_s21_is_less_or_equal_test(),
                         floor_suite(),
                         truncate_suite(),
                         negate_suite(),
                         round_suite(),
                         NULL};
  for (Suite **current_testcase = list_cases; *current_testcase != NULL;
       current_testcase++) {
    run_testcase(*current_testcase);
  }
}

void run_testcase(Suite *testcase) {
  static int counter_testcase = 1;
  if (counter_testcase > 1) putchar('\n');
  printf("CURRENT TEST: %d\n", counter_testcase);
  counter_testcase++;

  SRunner *sr = srunner_create(testcase);

  srunner_set_fork_status(sr, CK_NOFORK);
  srunner_run_all(sr, CK_NORMAL);

  srunner_free(sr);
}
