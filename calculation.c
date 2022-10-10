#include<stdio.h>
#include<stdlib.h>
#include <conio.h>
int main()
{
    int a = 0, b = 0;
    char char1;

    printf("Enter the first number :");
    scanf("%d", &a);
    printf("Enter the operation to be performed :");
    scanf(" %c", &char1);
    printf("Enter the second number :");
    scanf("%d", &b);

    if (char1 = '+')
    {
        printf("The addition of %d and %d is %d", a, b, a + b);
    }
    else if (char1 = '-')
    {
        printf("The subtraction of %d and %d is %d", a, b, a - b);
    }
    else if (char1 = '*')
    {
        printf("The multiplication of %d and %d is %d", a, b, a * b);
    }
    else if (char1 = '/')
    {
        printf("The division of %d and %d is %d", a, b, a / b);
    }
    else
    {
        printf("The entered operation cannot be performed.");
    }

    getch();
    return 0;
}