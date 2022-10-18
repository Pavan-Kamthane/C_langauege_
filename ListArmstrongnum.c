#include<stdio.h>
int main()
{
int i,j,a,b,c,d,e,sum;
for(i=100;i<1000;i++)
{j=i;
a=i%10;
b=i/10;
c=b%10;
d=b/10;
e=d%10;
//b=i/10;
sum=a*a*a+c*c*c+e*e*e;
if(j==sum)
printf("Armstrong num %d\n",sum);
}
return 0;
}
