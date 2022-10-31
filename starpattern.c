#include <stdio.h>
int main() {
   int j, k, rows;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (j = 1; j <= rows; ++j) {
      for (k = 1; k <= j; ++k) {
         printf("* ");
      }
      printf("\n");
   }
   return 0;
}

