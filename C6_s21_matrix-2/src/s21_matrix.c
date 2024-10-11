#include "s21_matrix.h"

#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int s21_create_matrix(int rows, int columns, matrix_t *result) {
  if (rows <= 0 || columns <= 0) {
    return INCORRECT_MATRIX;
  }

  // выделение памяти для структуры происходит статически в тесте

  // Инициализация переменных, как частей структуры
  result->rows = rows;
  result->columns = columns;
  // Выделение памяти внешнего массива массивов (строк [ [ ][ ] ])
  result->matrix = malloc(rows * sizeof(double *));
  if (result->matrix == NULL) {
    return INCORRECT_MATRIX;
  }
  // Выделение памяти для внутреннего массива ([])
  for (int i = 0; i < rows; i++) {
    result->matrix[i] = malloc(columns * sizeof(double));
    if (result->matrix[i] == NULL) {
      for (int j = 0; j < i; j++) {
        free(result->matrix[j]);
      }
      free(result->matrix);
      return INCORRECT_MATRIX;
    }
  }

  return OK;
}

void s21_remove_matrix(matrix_t *A) {
  for (int i = 0; i < A->rows; i++) {
    free(A->matrix[i]);
  }
  free(A->matrix);

  A->matrix = NULL;
  A->rows = 0;
  A->columns = 0;
}

int s21_eq_matrix(matrix_t *A, matrix_t *B) {
  if (A == NULL || B == NULL) {
    return FAILURE;
  }
  if (A->matrix == NULL || B->matrix == NULL) {
    return FAILURE;
  }
  if (A->rows != B->rows || A->columns != B->columns) {
    return FAILURE;
  }
  // Еее перебор по матрице, всегда люблю его
  for (int i = 0; i < A->rows; i++) {
    for (int j = 0; j < A->columns; j++) {
      if (fabs(A->matrix[i][j] - B->matrix[i][j]) > EPSILON) {
        return FAILURE;
      }
    }
  }
  return SUCCESS;
}

int s21_sum_matrix(matrix_t *A, matrix_t *B, matrix_t *result) {
  if (A == NULL || B == NULL) {
    return INCORRECT_MATRIX;
  }

  if (A->matrix == NULL || B->matrix == NULL) {
    return INCORRECT_MATRIX;
  }

  if (A->rows != B->rows || A->columns != B->columns) {
    return CALC_ERROR;
  }
  s21_create_matrix(A->rows, A->columns, result);
  for (int i = 0; i < A->rows; i++) {
    for (int j = 0; j < A->columns; j++) {
      result->matrix[i][j] = A->matrix[i][j] + B->matrix[i][j];
    }
  }
  return OK;
}

int s21_sub_matrix(matrix_t *A, matrix_t *B, matrix_t *result) {
  if (A == NULL || B == NULL) {
    return INCORRECT_MATRIX;
  }

  if (A->matrix == NULL || B->matrix == NULL) {
    return INCORRECT_MATRIX;
  }

  if (A->rows != B->rows || A->columns != B->columns) {
    return CALC_ERROR;
  }
  s21_create_matrix(A->rows, A->columns, result);

  for (int i = 0; i < A->rows; i++) {
    for (int j = 0; j < A->columns; j++) {
      result->matrix[i][j] = A->matrix[i][j] - B->matrix[i][j];
    }
  }
  return OK;
}

int s21_mult_matrix(matrix_t *A, matrix_t *B, matrix_t *result) {
  if (!is_correct_matrix(A) || !is_correct_matrix(B)) return INCORRECT_MATRIX;
  if (A->columns != B->rows) return CALC_ERROR;

  s21_create_matrix(A->rows, B->columns, result);
  for (int i = 0; i < A->rows; i++) {
    for (int j = 0; j < B->columns; j++) {
      result->matrix[i][j] = 0;
      for (int k = 0; k < A->columns; k++) {
        result->matrix[i][j] += (A->matrix[i][k] * B->matrix[k][j]);
      }
    }
  }

  return OK;
}

int s21_mult_number(matrix_t *A, double number, matrix_t *result) {
  if (A == NULL) {
    return INCORRECT_MATRIX;
  }

  if (A->matrix == NULL) {
    return INCORRECT_MATRIX;
  }

  s21_create_matrix(A->rows, A->columns, result);

  if (A->rows != result->rows || A->columns != result->columns) {
    return CALC_ERROR;
  }

  for (int i = 0; i < A->rows; i++) {
    for (int j = 0; j < A->columns; j++) {
      result->matrix[i][j] = A->matrix[i][j] * number;
    }
  }
  return OK;
}

int s21_transpose(matrix_t *A, matrix_t *result) {
  if (A == NULL) {
    return INCORRECT_MATRIX;
  }

  if (A->matrix == NULL) {
    return INCORRECT_MATRIX;
  }

  s21_create_matrix(A->columns, A->rows, result);

  if (A->rows != result->columns || A->columns != result->rows) {
    return CALC_ERROR;
  }

  for (int i = 0; i < A->rows; i++) {
    for (int j = 0; j < A->columns; j++) {
      result->matrix[j][i] = A->matrix[i][j];
    }
  }
  return OK;
}

int s21_determinant(matrix_t *A, double *result) {
  if (A == NULL || A->matrix == NULL) {
    return INCORRECT_MATRIX;
  }

  // проверка на квадратную матрицу
  if (A->rows != A->columns) {
    return INCORRECT_MATRIX;
  }

  // временная матрица для перестановки строк
  matrix_t matrix_temp;
  s21_create_matrix(A->rows, A->columns, &matrix_temp);
  for (int y = 0; y < A->rows; y++) {
    for (int u = 0; u < A->columns; u++) {
      matrix_temp.matrix[y][u] = A->matrix[y][u];
    }
  }
  *result = 1.0;
  // Поиск максимального элемента в текущем столбце
  for (int i = 0; i < matrix_temp.rows; i++) {
    int max_row = i;
    for (int k = i + 1; k < matrix_temp.rows; k++) {
      if (fabs(matrix_temp.matrix[k][i]) >
          fabs(matrix_temp.matrix[max_row][i])) {
        max_row = k;
      }
    }

    // Перестановка строк
    if (max_row != i) {
      double *temp = matrix_temp.matrix[i];
      matrix_temp.matrix[i] = matrix_temp.matrix[max_row];
      matrix_temp.matrix[max_row] = temp;
      *result *= -1;
    }

    // Обнуление элементов ниже главного элемента
    for (int j = i + 1; j < matrix_temp.rows; j++) {
      double ratio = matrix_temp.matrix[j][i] / matrix_temp.matrix[i][i];
      for (int k = i; k < matrix_temp.rows; k++) {
        matrix_temp.matrix[j][k] -= ratio * matrix_temp.matrix[i][k];
      }
    }
  }

  // нахождение определителя по произведение элементов главной диагонали
  for (int p = 0, l = 0; p < matrix_temp.rows; p++, l++) {
    *result *= matrix_temp.matrix[p][l];
  }

  s21_remove_matrix(&matrix_temp);

  return OK;
}

int s21_calc_complements(matrix_t *A, matrix_t *result) {
  if (A == NULL || A->matrix == NULL) {
    return INCORRECT_MATRIX;
  }

  // квадратная матрица или нет
  if (A->rows != A->columns) {
    return INCORRECT_MATRIX;
  }

  if (s21_create_matrix(A->rows, A->columns, result) != OK) {
    return INCORRECT_MATRIX;
  }

  matrix_t minor_matrix;
  if (s21_create_matrix(A->rows - 1, A->columns - 1, &minor_matrix) != OK) {
    s21_remove_matrix(result);
    return INCORRECT_MATRIX;
  }

  for (int i = 0; i < A->rows; i++) {
    for (int j = 0; j < A->columns; j++) {
      int minor_row = 0;
      int minor_column = 0;
      for (int p = 0; p < A->rows; p++) {
        if (p == i) continue;  // условие удаления строки в новой матрице
        minor_column = 0;
        for (int l = 0; l < A->columns; l++) {
          if (l == j) continue;  // условие удаления столбца в новой матрице
          minor_matrix.matrix[minor_row][minor_column] = A->matrix[p][l];
          minor_column++;
        }
        minor_row++;
      }

      double minor_determinant = 0.0;
      double algebraic_complement = 0.0;
      s21_determinant(&minor_matrix, &minor_determinant);
      if (fabs(minor_determinant) > EPSILON) {
        algebraic_complement = minor_determinant * ((i + j) % 2 == 0 ? 1 : -1);
      }
      result->matrix[i][j] = algebraic_complement;
    }
  }
  s21_remove_matrix(&minor_matrix);

  return OK;
}

int is_correct_matrix(matrix_t *A) {
  return A->matrix != NULL && A->rows > 0 && A->columns > 0;
}

int s21_inverse_matrix(matrix_t *A, matrix_t *result) {
  if (!is_correct_matrix(A)) {
    return INCORRECT_MATRIX;
  }
  if (A->rows != A->columns) {
    return CALC_ERROR;
  }
  double determ;
  s21_determinant(A, &determ);
  if (determ == 0) {
    return CALC_ERROR;
  }

  matrix_t complements;
  matrix_t transpose_complements;

  s21_calc_complements(A, &complements);
  s21_transpose(&complements, &transpose_complements);

  s21_mult_number(&transpose_complements, 1.0 / determ, result);

  s21_remove_matrix(&complements);
  s21_remove_matrix(&transpose_complements);
  return 0;
}