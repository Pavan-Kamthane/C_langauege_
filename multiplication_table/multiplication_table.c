#include <stdio.h>

int main()
{
 int i, j;
 printf("\n Multiplication Table of 8 and 9 are: \n");
 for (i = 8; i < 10; i++)
  {
   for (j = 1; j <= 10; j++)
    {
      printf("%d * %d = %d\n",i ,j, i*j);
    }
    printf("\n ==========\n");
  }
 return 0;
}
