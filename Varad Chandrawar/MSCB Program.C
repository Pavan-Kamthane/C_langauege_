#include<stdio.h>
main()
{
float x;
clrscr();
printf(" enter the value of x");
scanf("%f",&x);
if(x>0 && x<=100)
{
printf("\n value of x is %f",x*3.36);
}
else if(x>=101 && x<=300)
{
printf("\n value of x is %f",x*7.34);
}
else if(x>=301 && x<=500)
{
printf("\n value of x is %f",x*10.37);
}
else if (x>=501 && x<=1000)
{
printf("\n value of x is %f",x*11.86);
}
else
{
printf("\n value of x is %f",x*13.20);
}
getch();
}