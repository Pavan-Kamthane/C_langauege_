#include<stdio.h>
int main()
{
int i,n;
float sum=0;
printf("Enter any num: ");
scanf("%d",&n);
for(float i=1;i<=n;i++)
{
sum=sum+(1/i); //jis data type me division karengay ussi data type me value aayengi..
//printf("%f",1/i);
}
printf("%f",sum);
return 0;
}
