#include<stdio.h>
int main()
{int a,b,c;
printf("Enter 3 numbers: ");
scanf(“%d %d %d”, &a,&b,&c);
if(a<b)
{
 if(a<c)
printf("Smallest number is %d",a);
 else
printf("Smallest number is %d",c);
}
 else
 {
 if(b<c)
 printf("Smallest number is %d",b);
 else
printf("Smallest number is %d",c);
 }
return 0;
}
