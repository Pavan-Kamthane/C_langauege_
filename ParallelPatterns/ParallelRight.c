#include<stdio.h>
int main()
{
    int num1,num2,num3,number;
    printf("\nEnter a number :");
    scanf("%d",&number);
    for( num1=0;num1<number;num1++ )
    {
        for( num3=0;num3<num1+1;num3++ )
        {
            printf("  ");
        }
        for( num2=0;num2<number;num2++ )
        {
            if( num1==0 || num1==number-1 )
            {
                printf("* ");
                continue;
            }
            if( num2==0 || num2==number-1 )
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}