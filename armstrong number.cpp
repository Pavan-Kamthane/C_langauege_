#include<stdio.h>
int main()
{
 int a,b,c,d,e,f;
 printf("enter the amstrong number");
 scanf("%d",&a);
 b=a%10;
 c=a/10;
 d=c%10;
 e=c/10;
 f=e%10;
if(a==b*b*b+d*d*d+f*f*f)
{
	printf("the given number is armstrong number");
	
}
	else
	{
		printf("The given number is not armstrong number");
	}
}
