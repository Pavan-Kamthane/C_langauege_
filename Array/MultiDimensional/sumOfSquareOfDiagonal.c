// Sum of Square of Diagonals of a Matrix
#include <stdio.h>
int main()
{
    int arr[3][3], i, j, sum = 0;
    printf("Enter the elements of array:");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i == j)
            {
                sum = sum + arr[i][j] * arr[i][j];
            }
        }
    }
    printf("Sum of square of diagonal elements is: %d", sum);
    return 0;
}