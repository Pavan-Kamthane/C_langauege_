/*A Simple Program toConvert Farheniet temperature to Celsius
*/

#include<stdio.h>
#include<conio.h>

void main()
{
float c,f;
clrscr();
printf("Enter the Temprature in F \n");
scanf("%f",&f);
c=0.55*(f-32);
printf("C=%f",c);
getch();
}