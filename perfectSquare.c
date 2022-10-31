#include<stdio.h>
int main()
{
    int i, number;

    printf("Enter a number: ");
    scanf("%d", &number);
    for(i = 0; i <= number; i++)
    {
        if(number == i*i)
        {
            printf("\n%d is a perfect square\n", number);


            return 0;
        }
    }
    printf("\n%d is not a perfect square\n", number);
    return 0;
}
