#include<stdio.h>
int main()
{float h,m,index;
printf("Enter the height(cm)");
scanf("%f",&h);
printf("Enter the Weight(kg)");
scanf("%f",&m);
index = m/(h*h/10000);
printf("BMI is %f \n",index);
if (index<18.5)
printf("UNDERWEIGHT");
else if (index>18.5 &&index<24.5)
printf("HEALTHY!");
else if (index>24.5 &&index<29.5)
printf("OVERWEIGHT");
else
printf("OEXTREME OBESE");
return 0;
}
