#include<stdio.h>

int main()
{
    int num1,num2,lcm;
    int count=1;

    printf("Enter 2 numbers:\n");
    scanf("%d %d",&num1,&num2);

    
    while(count<=num1*num2)
    {
        if(count%num1==0&&count%num2==0)
        { lcm=count;
          break;
        }
         count=count+1;

    }
    printf("\nLCM of %d and %d is %d",num1,num2,lcm);
    return 0;
}
