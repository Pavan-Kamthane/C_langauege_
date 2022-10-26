#include<stdio.h>
int main()
{
int i,n,sum=0;
    printf("upper limit: \n");
    scanf("%d",&n);
    for(i=1; i<=2*n-1;i=i+2)
    {
     sum=sum+i;
    }
    printf("sum of odd numbers=%d \n",sum);
return 0;
}