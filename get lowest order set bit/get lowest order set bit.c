#include <stdio.h>
#define INT_SIZE sizeof(int) * 8

int main()
{
    int num, order, x;

    printf("Enter any number: ");
    scanf("%d", &num);

    order = INT_SIZE - 1;

    for(x=0; x<INT_SIZE; x++)
    {
        if((num>>x) & 1)
        {
            order = x;

            break;
        }
    }

    printf("Lowest order set bit in %d is %d", num, order);

    return 0;
}
