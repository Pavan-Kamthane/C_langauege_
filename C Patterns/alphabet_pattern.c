#include <stdio.h>
int main() {

   char end, ab = 'A';
   printf("Enter an uppercase character you want to print in the last row: ");
   scanf("%c", &end);
   for (int i = 1; i <= (end - 'A' + 1); ++i) {
      for (int j = 1; j <= i; ++j) {
         printf("%c ", ab);
      }
      ++ab;
      printf("\n");
   }
   return 0;
}
