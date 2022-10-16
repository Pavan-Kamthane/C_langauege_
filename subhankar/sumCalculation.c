#include <stdio.h>

int main()
{

    // Write a program to calculate (1 * 1) + (2 * 2) + (3 * 3) + (4 * 4) + (5 * 5) + ... + (n * n) series, where 'n' is the user input.

     int n;
     puts("enter the value of n: ");
     scanf("%d", &n);
     long sum = 0;

     for(int i = 1; i <= n; i++){
         sum = sum + (i * i);
     }
     
      for(int i = 1; i <= n; i++){
         sum = sum + (i * i);
     }

     printf("solution is %ld", sum);
return 0;
}
