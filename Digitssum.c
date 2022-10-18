#include<stdio.h>
int main()
{
int i=1,n,sum=0,a,b,r;
printf("Enter no.: ");
scanf("%d",&n);
printf("No. of digits: ");
scanf("%d",&r);
while(i<=r)   //while(n>0)
{
a=n%10;
n=n/10;
sum+=a;
i++;
}
printf("%d",sum);
return 0;
}













                        
