#include "s21_matrix.h"

#include <check.h>
#include <stdlib.h>

START_TEST(s21_create_matrix_test) {
  matrix_t matrix_test;
  int value_1 = s21_create_matrix(5, 5, &matrix_test);
  ck_assert_int_eq(value_1, 0);
  s21_remove_matrix(&matrix_test);

  int value_2 = s21_create_matrix(0, 2, &matrix_test);
  // printf("\n%d\n", value_2);
  ck_assert_int_eq(value_2, 1);
  s21_remove_matrix(&matrix_test);
}
END_TEST

START_TEST(s21_eq_matrix_test) {
  matrix_t matrix_test1;
  matrix_t matrix_test2;
  s21_create_matrix(2, 2, &matrix_test1);
  s21_create_matrix(2, 2, &matrix_test2);
  int value_1 = s21_eq_matrix(&matrix_test1, &matrix_test2);
  ck_assert_int_eq(value_1, SUCCESS);
  s21_remove_matrix(&matrix_test1);
  s21_remove_matrix(&matrix_test2);

  s21_create_matrix(5, 2, &matrix_test1);
  s21_create_matrix(2, 2, &matrix_test2);
  int value_2 = s21_eq_matrix(&matrix_test1, &matrix_test2);
  ck_assert_int_eq(value_2, FAILURE);
  s21_remove_matrix(&matrix_test1);
  s21_remove_matrix(&matrix_test2);
}
END_TEST

START_TEST(s21_sum_matrix_test) {
  matrix_t matrix_test1, matrix_test2, matrix_res1, matrix_res2;
  s21_create_matrix(3, 3, &matrix_test1);
  s21_create_matrix(3, 3, &matrix_test2);
  s21_create_matrix(3, 3, &matrix_res1);
  int value_1 = s21_sum_matrix(&matrix_test1, &matrix_test2, &matrix_res2);
  ck_assert_int_eq(value_1, 0);
  int value_2 = s21_eq_matrix(&matrix_res1, &matrix_res2);
  ck_assert_int_eq(value_2, 1);
  s21_remove_matrix(&matrix_test1);
  s21_remove_matrix(&matrix_test2);
  s21_remove_matrix(&matrix_res1);
  s21_remove_matrix(&matrix_res2);

  s21_create_matrix(3, 7, &matrix_test1);
  s21_create_matrix(3, 3, &matrix_test2);
  int value_3 = s21_sum_matrix(&matrix_test1, &matrix_test2, &matrix_res2);
  ck_assert_int_eq(value_3, 2);
  s21_remove_matrix(&matrix_test1);
  s21_remove_matrix(&matrix_test2);

  s21_create_matrix(3, 3, &matrix_test1);
  s21_create_matrix(3, 3, &matrix_test2);
  s21_create_matrix(3, 3, &matrix_res1);
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      matrix_test1.matrix[i][j] = i + j;
      matrix_res1.matrix[i][j] = i + j;
    }
  }
  int value_4 = s21_sum_matrix(&matrix_test1, &matrix_test2, &matrix_res2);
  ck_assert_int_eq(value_4, 0);
  int value_5 = s21_eq_matrix(&matrix_res1, &matrix_res2);
  ck_assert_int_eq(value_5, 1);
}
END_TEST

START_TEST(s21_sub_matrix_test) {
  matrix_t matrix_test1, matrix_test2, matrix_res1, matrix_res2;
  s21_create_matrix(3, 3, &matrix_test1);
  s21_create_matrix(3, 3, &matrix_test2);
  s21_create_matrix(3, 3, &matrix_res1);
  int value_1 = s21_sub_matrix(&matrix_test1, &matrix_test2, &matrix_res2);
  ck_assert_int_eq(value_1, 0);
  int value_2 = s21_eq_matrix(&matrix_res1, &matrix_res2);
  // printf("\n %d\n", value_2);
  ck_assert_int_eq(value_2, 1);
  s21_remove_matrix(&matrix_test1);
  s21_remove_matrix(&matrix_test2);
  s21_remove_matrix(&matrix_res1);
  s21_remove_matrix(&matrix_res2);

  s21_create_matrix(3, 7, &matrix_test1);
  s21_create_matrix(3, 3, &matrix_test2);
  int value_3 = s21_sub_matrix(&matrix_test1, &matrix_test2, &matrix_res2);
  ck_assert_int_eq(value_3, 2);
  s21_remove_matrix(&matrix_test1);
  s21_remove_matrix(&matrix_test2);

  s21_create_matrix(3, 3, &matrix_test1);
  s21_create_matrix(3, 3, &matrix_test2);
  s21_create_matrix(3, 3, &matrix_res1);
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      matrix_test1.matrix[i][j] = i + j;
      matrix_res1.matrix[i][j] = i + j;
    }
  }
  int value_4 = s21_sub_matrix(&matrix_test1, &matrix_test2, &matrix_res2);
  ck_assert_int_eq(value_4, 0);
  int value_5 = s21_eq_matrix(&matrix_res1, &matrix_res2);
  ck_assert_int_eq(value_5, 1);
}
END_TEST

START_TEST(s21_mult_number_test) {
  matrix_t matrix_test1, matrix_res1, matrix_res2;
  s21_create_matrix(3, 3, &matrix_test1);
  s21_create_matrix(3, 3, &matrix_res2);
  int value_1 = s21_mult_number(&matrix_test1, 5, &matrix_res1);
  ck_assert_int_eq(value_1, 0);
  int value_2 = s21_eq_matrix(&matrix_res1, &matrix_res2);
  ck_assert_int_eq(value_2, 1);
  s21_remove_matrix(&matrix_test1);
  s21_remove_matrix(&matrix_res1);
  s21_remove_matrix(&matrix_res2);

  s21_create_matrix(3, 3, &matrix_test1);
  s21_create_matrix(3, 3, &matrix_res2);
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      matrix_test1.matrix[i][j] = i + j;
      matrix_res2.matrix[i][j] = (i + j) * (-5);
    }
  }
  int value_3 = s21_mult_number(&matrix_test1, -5, &matrix_res1);
  ck_assert_int_eq(value_3, 0);
  int value_4 = s21_eq_matrix(&matrix_res1, &matrix_res2);
  ck_assert_int_eq(value_4, 1);
  s21_remove_matrix(&matrix_test1);
  s21_remove_matrix(&matrix_res2);
  s21_remove_matrix(&matrix_res1);

  s21_create_matrix(3, 3, &matrix_test1);
  s21_create_matrix(3, 3, &matrix_res2);
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      matrix_test1.matrix[i][j] = i + j;
    }
  }
  int value_5 = s21_mult_number(&matrix_test1, 0, &matrix_res1);
  ck_assert_int_eq(value_5, 0);
}
END_TEST

START_TEST(s21_mult_matrix_test) {
  matrix_t matrix_test1, matrix_test2, matrix_res1, matrix_res2;

  s21_create_matrix(2, 2, &matrix_test1);
  s21_create_matrix(2, 2, &matrix_test2);
  s21_create_matrix(2, 2, &matrix_res2);
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      matrix_test1.matrix[i][j] = i + j;
      matrix_test2.matrix[i][j] = i + j;
    }
  }
  matrix_res2.matrix[0][0] = 1;
  matrix_res2.matrix[0][1] = 2;
  matrix_res2.matrix[1][0] = 2;
  matrix_res2.matrix[1][1] = 5;

  int value = s21_mult_matrix(&matrix_test1, &matrix_test2, &matrix_res1);
  ck_assert_int_eq(value, 0);
  value = s21_eq_matrix(&matrix_res1, &matrix_res2);

  ck_assert_int_eq(value, 1);
  s21_remove_matrix(&matrix_test1);
  s21_remove_matrix(&matrix_test2);
  s21_remove_matrix(&matrix_res1);
  s21_remove_matrix(&matrix_res2);

  s21_create_matrix(7, 3, &matrix_test1);
  s21_create_matrix(3, 3, &matrix_test2);
  s21_create_matrix(7, 3, &matrix_res2);
  value = s21_mult_matrix(&matrix_test1, &matrix_test2, &matrix_res1);
  ck_assert_int_eq(value, 0);
  value = s21_eq_matrix(&matrix_res1, &matrix_res2);
  ck_assert_int_eq(value, 1);
  s21_remove_matrix(&matrix_test1);
  s21_remove_matrix(&matrix_test2);
  s21_remove_matrix(&matrix_res1);
  s21_remove_matrix(&matrix_res2);

  s21_create_matrix(5, 7, &matrix_test1);
  s21_create_matrix(6, 7, &matrix_test2);
  value = s21_mult_matrix(&matrix_test1, &matrix_test2, &matrix_res1);
  ck_assert_int_eq(value, 2);
  s21_remove_matrix(&matrix_test1);
  s21_remove_matrix(&matrix_test2);
}
END_TEST

START_TEST(s21_transpose_test) {
  matrix_t matrix_test1, matrix_res1, matrix_res2;

  s21_create_matrix(2, 2, &matrix_test1);
  s21_create_matrix(2, 2, &matrix_res2);
  matrix_test1.matrix[0][0] = 7;
  matrix_test1.matrix[0][1] = 2;
  matrix_test1.matrix[1][0] = 6;
  matrix_test1.matrix[1][1] = 1;
  matrix_res2.matrix[0][0] = 7;
  matrix_res2.matrix[0][1] = 6;
  matrix_res2.matrix[1][0] = 2;
  matrix_res2.matrix[1][1] = 1;
  int value = s21_transpose(&matrix_test1, &matrix_res1);
  ck_assert_int_eq(value, 0);
  value = s21_eq_matrix(&matrix_res1, &matrix_res2);
  ck_assert_int_eq(value, 1);
  s21_remove_matrix(&matrix_test1);
  s21_remove_matrix(&matrix_res1);
  s21_remove_matrix(&matrix_res2);

  double matrix[2][2] = {
      {2, 6},
      {3, 7},
  };
  double res[2][2] = {{2, 3}, {6, 7}};
  s21_create_matrix(2, 2, &matrix_test1);
  s21_create_matrix(2, 2, &matrix_res2);
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      matrix_test1.matrix[i][j] = matrix[i][j];
    }
  }
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      matrix_res2.matrix[i][j] = res[i][j];
    }
  }
  value = s21_transpose(&matrix_test1, &matrix_res1);
  ck_assert_int_eq(value, 0);
  value = s21_eq_matrix(&matrix_res1, &matrix_res2);
  ck_assert_int_eq(value, 1);
  s21_remove_matrix(&matrix_test1);
  s21_remove_matrix(&matrix_res1);
  s21_remove_matrix(&matrix_res2);
}
END_TEST

START_TEST(s21_determinant_test) {
  matrix_t matrix_test1;
  s21_create_matrix(4, 4, &matrix_test1);
  int count = 1;
  for (int i = 0; i < matrix_test1.rows; i++) {
    for (int j = 0; j < matrix_test1.columns; j++) {
      matrix_test1.matrix[i][j] = count++;
    }
  }
  matrix_test1.matrix[2][2] = 10;
  matrix_test1.matrix[3][3] = 10;
  double res;
  int value = s21_determinant(&matrix_test1, &res);
  ck_assert_int_eq(res, -24);
  ck_assert_int_eq(value, 0);
  s21_remove_matrix(&matrix_test1);
}
END_TEST

START_TEST(s21_calc_complements_test) {
  double ex1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 10}};
  double ex2[3][3] = {{2, 2, -3}, {4, -11, 6}, {-3, 6, -3}};
  matrix_t matrix_test1, matrix_res1, matrix_res2;
  s21_create_matrix(3, 3, &matrix_test1);
  s21_create_matrix(3, 3, &matrix_res1);
  for (int i = 0; i < matrix_test1.rows; i++) {
    for (int j = 0; j < matrix_test1.columns; j++) {
      matrix_test1.matrix[i][j] = ex1[i][j];
    }
  }
  for (int i = 0; i < matrix_res1.rows; i++) {
    for (int j = 0; j < matrix_res1.columns; j++) {
      matrix_res1.matrix[i][j] = ex2[i][j];
    }
  }

  int value = s21_calc_complements(&matrix_test1, &matrix_res2);
  ck_assert_int_eq(value, 0);
  value = s21_eq_matrix(&matrix_res1, &matrix_res2);
  ck_assert_int_eq(value, 1);
  s21_remove_matrix(&matrix_test1);
  s21_remove_matrix(&matrix_res2);
  s21_remove_matrix(&matrix_res1);

  double ex3[3][3] = {{1, 2, 3}, {0, 4, 2}, {5, 2, 1}};
  double ex4[3][3] = {{0, 10, -20}, {4, -14, 8}, {-8, -2, 4}};
  matrix_t matrix_test3, matrix_res3, matrix_res4;
  s21_create_matrix(3, 3, &matrix_test3);
  s21_create_matrix(3, 3, &matrix_res3);
  for (int i = 0; i < matrix_test3.rows; i++) {
    for (int j = 0; j < matrix_test3.columns; j++) {
      matrix_test3.matrix[i][j] = ex3[i][j];
    }
  }
  for (int i = 0; i < matrix_res3.rows; i++) {
    for (int j = 0; j < matrix_res3.columns; j++) {
      matrix_res3.matrix[i][j] = ex4[i][j];
    }
  }

  int value2 = s21_calc_complements(&matrix_test3, &matrix_res4);
  ck_assert_int_eq(value2, 0);
  value2 = s21_eq_matrix(&matrix_res3, &matrix_res4);
  ck_assert_int_eq(value2, 1);
  s21_remove_matrix(&matrix_test3);
  s21_remove_matrix(&matrix_res4);
  s21_remove_matrix(&matrix_res3);

  double ex5[3][3] = {{2, 5, 7}, {6, 3, 4}, {5, -2, -3}};
  double ex6[3][3] = {{-1, 38, -27}, {1, -41, 29}, {-1, 34, -24}};
  matrix_t matrix_test5, matrix_res5, matrix_res6;
  s21_create_matrix(3, 3, &matrix_test5);
  s21_create_matrix(3, 3, &matrix_res5);
  for (int i = 0; i < matrix_test5.rows; i++) {
    for (int j = 0; j < matrix_test5.columns; j++) {
      matrix_test5.matrix[i][j] = ex5[i][j];
    }
  }
  for (int i = 0; i < matrix_res5.rows; i++) {
    for (int j = 0; j < matrix_res5.columns; j++) {
      matrix_res5.matrix[i][j] = ex6[i][j];
    }
  }
  int value3 = s21_calc_complements(&matrix_test5, &matrix_res6);
  // s21_print_matrix(&matrix_res5);
  // s21_print_matrix(&matrix_res6);
  ck_assert_int_eq(value3, 0);
  value3 = s21_eq_matrix(&matrix_res5, &matrix_res6);
  // s21_print_matrix(&matrix_res5);
  // s21_print_matrix(&matrix_res6);
  ck_assert_int_eq(value3, 1);
  s21_remove_matrix(&matrix_test5);
  s21_remove_matrix(&matrix_res6);
  s21_remove_matrix(&matrix_res5);
}
END_TEST

START_TEST(s21_inverse_matrix_test) {
  double test1[3][3] = {{2, 5, 7}, {6, 3, 4}, {5, -2, -3}};
  double test2[3][3] = {{1, -1, 1}, {-38, 41, -34}, {27, -29, 24}};
  matrix_t matrix_test1, matrix_res2, matrix_res1;
  s21_create_matrix(3, 3, &matrix_test1);
  s21_create_matrix(3, 3, &matrix_res2);
  for (int i = 0; i < matrix_test1.rows; i++) {
    for (int j = 0; j < matrix_test1.columns; j++) {
      matrix_test1.matrix[i][j] = test1[i][j];
    }
  }
  for (int i = 0; i < matrix_res2.rows; i++) {
    for (int j = 0; j < matrix_res2.columns; j++) {
      matrix_res2.matrix[i][j] = test2[i][j];
    }
  }
  int value = s21_inverse_matrix(&matrix_test1, &matrix_res1);
  ck_assert_int_eq(value, 0);
  // s21_print_matrix(&matrix_res2);
  // s21_print_matrix(&matrix_res1);
  value = s21_eq_matrix(&matrix_res2, &matrix_res1);

  ck_assert_int_eq(value, 1);
  s21_remove_matrix(&matrix_test1);
  s21_remove_matrix(&matrix_res1);
  s21_remove_matrix(&matrix_res2);
}
END_TEST

int main(void) {
  Suite *s1 = suite_create("Core");
  TCase *tc1_1 = tcase_create("Core");
  SRunner *sr = srunner_create(s1);
  int nf;

  suite_add_tcase(s1, tc1_1);
  tcase_add_test(tc1_1, s21_create_matrix_test);
  tcase_add_test(tc1_1, s21_eq_matrix_test);
  tcase_add_test(tc1_1, s21_sum_matrix_test);
  tcase_add_test(tc1_1, s21_sub_matrix_test);
  tcase_add_test(tc1_1, s21_mult_number_test);
  tcase_add_test(tc1_1, s21_mult_matrix_test);
  tcase_add_test(tc1_1, s21_transpose_test);
  tcase_add_test(tc1_1, s21_determinant_test);
  tcase_add_test(tc1_1, s21_calc_complements_test);
  tcase_add_test(tc1_1, s21_inverse_matrix_test);

  srunner_run_all(sr, CK_ENV);
  nf = srunner_ntests_failed(sr);
  srunner_free(sr);

  return nf == 0 ? 0 : 1;
}
