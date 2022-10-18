//A c program to check whether the given number is zero, a positive number or a negative number.

#include<stdio.h>

void main()
{
    int num = 0;
    printf("Enter a number: "); //Enter a number:
    scanf("%d", &num); 
    if (num == 0)
    {
        printf("Number is zero."); //Number is zero.
    }
    else if (num > 0)
    {
        printf("Number is greater than zero. It is a positive number."); //Number is greater than zero. It is a positive number.
    }
    else {
        printf("Number is lesser than zero. It is a negative number."); //Number is lesser than zero. It is a negative number.
    }
}