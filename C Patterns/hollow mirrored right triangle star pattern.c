#include <stdio.h>

int main()
{
    int i, x, rows;

    printf("Enter number of rows : ");
    scanf("%d", &rows);

    for(i=1; i<=rows; i++)
    {
        for(x=i; x<rows; x++)
        {
            printf(" ");
        }

        for(x=1; x<=i; x++)
        {

            if(i==rows || x==1 || x==i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}
