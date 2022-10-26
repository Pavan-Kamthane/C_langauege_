#include <stdio.h>

#define MAX_SIZE 100
int main()
{
    int arr[MAX_SIZE];
    int size;
    int x, j, y;

    printf("Enter size of the array : ");
    scanf("%d", &size);
    printf("Enter elements in array : ");
    for(x=0; x<size; x++)
    {
        scanf("%d", &arr[x]);
    }

    for(x=0; x<size; x++)
    {
        for(j=x+1; j<size; j++)
        {
            if(arr[x] == arr[j])
            {
                for(y=j; y < size - 1; y++)
                {
                    arr[y] = arr[y + 1];
                }

                size--;
                j--;
            }
        }
    }

    printf("\nArray elements after deleting duplicates : ");
    for(x=0; x<size; x++)
    {
        printf("%d\t", arr[x]);
    }

    return 0;
}
