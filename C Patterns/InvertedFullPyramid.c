#include <stdio.h>
int main() {
   int rows, i, j, spc; //varibles
   printf("Enter the number of rows: "); //input
   scanf("%d", &rows);
   for (i = rows; i >= 1; --i) {
      for (spc = 0; spc < rows - i; ++spc)
         printf("  ");
      for (j = i; j <= 2 * i - 1; ++j)
         printf("* ");
      for (j = 0; j < i - 1; ++j)
         printf("* ");
      printf("\n");
   }
   return 0;
}
