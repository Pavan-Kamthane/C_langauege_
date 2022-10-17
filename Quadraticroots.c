//WAP to find square roots of Quadratic equation
#include<stdio.h>
#include<math.h>
int main()
{
   int a,b,c;  float d,d2,x1,x2;
   printf("Enter coefficients of Quadratic equation of format ax^2 + bx + c = 0\n");
   scanf("%d%d%d",&a,&b,&c);
   
   d = (b*b) - (4*a*c);
   d2 = sqrt(d);
   x1 = 0.5*(-b+d2);
   x2 = 0.5*(-b-d2);
   
   (d>=0)?(printf("roots of equation are %f and %f\n",x1,x2)):(printf("Roots are imaginery"));
   
   return 0;
   } 
