//WAP to print kajukatli borders
#include<stdio.h>
int main()
{
 printf("Enter number of rows: ");
 int n,a,b,d=1,c;
 scanf("%d",&n);
 for(a=0;a<=n;a++)
 {
   for(b=n;b>a;b--)
  {
   printf(" ");
  }
  printf("*");
  if (a>0)
 {
    for(c=1;c<=d;c++)
   {
     printf(" ");
   }
    d=d+2;
   printf("*");
 }
   printf("\n");
 }
   d=d-4;
   for(a=0;a<=n-1;a++)
 {
   for(b=0;b<=a;b++)
   {
     printf(" ");
   }
   printf("*");
   for(c=1;c<=d;c++)
   {
     printf(" ");
   }
   d=d-2;
   if(a!=n-1)
   {
     printf ("*");
   }
   printf("\n");
}
 return 0;
}
