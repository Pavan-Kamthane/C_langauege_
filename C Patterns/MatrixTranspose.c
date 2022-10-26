#include <stdio.h>
int main() {
  int a[20][20], transpose[20][20], row, column;
  printf("Enter rows and columns: ");
  scanf("%d %d", &row, &column);

  printf("\nEnter matrix elements:\n");
  for (int i = 0; i < row; ++i)
  for (int j = 0; j < column; ++j) {
    printf("Enter element a%d%d: ", i + 1, j + 1);
    scanf("%d", &a[i][j]);
  }

  printf("\nEntered matrix: \n");
  for (int i = 0; i < row; ++i)
  for (int j = 0; j < column; ++j) {
    printf("%d  ", a[i][j]);
    if (j == column - 1)
    printf("\n");
  }

  for (int i = 0; i < row; ++i)
  for (int j = 0; j < column; ++j) {
    transpose[j][i] = a[i][j];
  }

  printf("\nTranspose of the matrix:\n");
  for (int i = 0; i < column; ++i)
  for (int j = 0; j < row; ++j) {
    printf("%d  ", transpose[i][j]);
    if (j == row - 1)
    printf("\n");
  }
  return 0;
}