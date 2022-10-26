#include<stdio.h>
int main()
{
	int r;
	printf("Enter number of rows: ");
	scanf("%d",&r);
    for (int i=1;i<=r;i++)
	for(int i=0;i<5;i++)
	{
		for(int k=0;k<i;k++)
		{
			printf("  ");
		}
		for(int j=5;j>i;j--)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;