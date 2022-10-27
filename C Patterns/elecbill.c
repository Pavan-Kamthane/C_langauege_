#include<stdio.h>
/*Program to input electricity unit charges & calculate total bill*/
int main()
{
	int u;
	float total;
	printf("Enter No. of elecricity units:");
	scanf("%d",&u);
	if(50>=u)
	{
        total = (u*0.5);
	}
	else if(150>=u)
	{
		total = 50*0.5 + (u-50)*0.75;
	}
    else if(250>=u)
    {
		total = 50*0.5 + 100*0.75 + (u-150)*1.20;		
	}
	else
	{
		total = 50*0.5 + 100*0.75 + 100*1.20 + (u-250)*1.50;
	}
	total = total + total*0.2;
	printf("Your electricity bill is %.2f\n",total);
	return 0;
}