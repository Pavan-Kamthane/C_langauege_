#include<stdio.h>

int main()
{
    int num1,num2;

    printf("Enter two numbers\n");
    scanf("%d",&num1);
    scanf("%d",&num2);
    int count=1,HCF;

    while(count<=num1&&count<=num2)
    {
        if((num1%count==0)&&(num2%count==0))
        HCF=count;
        
        count=count+1;
    }

    printf("%d is the HCF of given numbers",HCF);

    return 0;
}
