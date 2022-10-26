#include <stdio.h>

int main()
{
    int x,y;
    printf("Enter the number of rows:-");
    scanf("%d",&x);
    y=x;
   for(int i=1;i<=x;i++)
   {
       for(int j=1;j<=y-1;j++)
       {
           printf(" ");
       }
       for(int k=1;k<=2*i-1;k++)
       {
          if(k==1 || k==2*i-1 || i==x)
         printf("*");
         else
         printf(" ");
       }
       y--;

      printf("\n");
    }
    return 0;
}
