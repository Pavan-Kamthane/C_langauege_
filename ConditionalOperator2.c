//WAP to find biggest of three numbers
#include<stdio.h>
int main()
{
  int a,b,c;
   printf("Enter three numbers: ");
   scanf("%d%d%d",&a,&b,&c);
   
   (a>b)?((a>c)?(printf("%d is the biggest\n",a)):(printf("%d is biggest\n",c))):((b>c)?(printf("%d is the biggest\n",b)):(printf("%d is the biggest\n",c)));
   
   return 0;
   }
