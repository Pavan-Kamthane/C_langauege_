#include <stdio.h>
int main()
{
    int num1, num2, number;
    scanf("%d", &number);
    
    for(num1 = 0; num1 < number; num1++) 
    {
        for(num2 = 0; num2 < (2 * number); num2++)
        { 
            if(num1 + num2 <= number - 1)  
                printf("*");
            else
                printf(" ");
            if((num1 + number) <= num2)  
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    
    for(num1 = 0; num1 < number; num1++)
    {
        for(num2 = 0; num2 < (2 * number); num2++)
        {
            if(num1 >= num2)  
                printf("*");
            else
                printf(" ");
            if(num1 >= (2 * number - 1) - num2) 
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}