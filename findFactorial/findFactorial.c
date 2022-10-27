#include<stdio.h>
void main()
{
   int i, n;
   long int f = 1;
   //get the input
   printf("Enter the number: ");
   scanf("%d" , &n);
   //calculate factorial
   for(i = 1; i <= n; i++)
   {
       f = f * i;
   }
   printf("Factorial of %d is %ld", n , f);
}