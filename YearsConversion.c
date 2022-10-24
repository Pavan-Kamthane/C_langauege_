#include<stdio.h>
int main()
{
int ch,min,hrs,ds,mon,yrs,se;
printf("\n[1] MINUTES");
printf("\n[2] HOURS");
printf("\n[3] DAYS");
printf("\n[4] MONTHS");
printf("\n[5] SECONDS");
printf("\n Enter Your Choice :");
scanf("%d", &ch);
if(ch>0 && ch<6 )
{printf("Enter Years :");
scanf("%ld",&yrs);
}
 mon=yrs*12;
 ds=mon*30;
 ds=ds+yrs*5;
 hrs=ds*24;
 min=hrs*60;
 se=min*60;
 switch(ch)
 {
 case 1 :
 printf("\n Minutes : %d",min);
 break;
 case 2 :
 printf("\n Hours : %d",hrs);
 break;
 case 3 :
 printf("\n Days : %d",ds);
 break;
 case 4 :
 printf("\n Months : %d",mon);
 break;
 case 5 :
 printf("\n Seconds: %d",se);
 break;
 default :
 printf("\nInvalid choice");
 }
 return 0;
}
