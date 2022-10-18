#include<stdio.h>

int main()
{
    long int n,temp,var=1,rem;
    int rot;

    printf("Enter a number:\n");
    scanf("%ld",&n);
    temp=n;

    printf("\nEnter how many times you want to rotate the number\n");
    scanf("%d",&rot);
    
    while(n>10)
    {
        n=n/10;
        var=var*10;  
    }
    
    for(int i=1;i<=rot;i++)
    {   
        rem=temp%10;
        temp=temp/10;
        temp=rem*var+temp;
        printf("\nAfter rotation %d  %ld",i,temp);

    }

    printf("\nRotated number = %ld",temp);

    return 0;   
}
