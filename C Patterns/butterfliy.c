#include<stdio.h>
int main()
{   int r;
    //int i,j;
	printf("Enter number of rows: ");
	scanf("%d",&r);
    for (int i=1;i<=r;i++)
    { for (int j=1;j<=(2*r);j++)
        {   if (i<j) 
               { printf(" ");}
            else
                {printf("*");}
             
            if (i<=((2*r)-j))
                {printf(" ");}
            else
                printf("*"); }
        printf("\n");}
     for (int i=1;i<=r;i++)
    { for (int j=1;j<=(2*r);j++)
        {   if (i>(r-j+1))
                {printf(" ");}
            else
                {printf("*");}
             if ((i+r)>j)
                printf(" ");
            else
                printf("*"); }
        printf("\n");
    }
	return 0;
}
