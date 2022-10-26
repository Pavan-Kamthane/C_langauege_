#include <stdio.h>
int main() {
   int p, space, lines, j = 0, count1 = 0, count2 = 0;
   printf("Enter the number of rows: ");
   scanf("%d", &lines);
   for (p = 1; p <= lines; ++p) {
      for (space = 1; space <= lines - p; ++space) {
         printf("  ");
         ++count1;
      }
      while (j != 2 * p - 1) {
         if (count1 <= lines - 1) {
            printf("%d ", p + j);
            ++count1;
         } else {
            ++count2;
            printf("%d ", (p + j - 2 * count2));
         }
         ++j;
      }
      count2 = count1 = j = 0;
      printf("\n");
   }
   return 0;
}
