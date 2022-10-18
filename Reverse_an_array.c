#include <stdio.h>
#include <stdlib.h>
struct array
{
    int a[10];
    int size;
    int length;
};

void Reverse(struct array *arr)
{
    int *b;
    int i, j;
    b = (int *)malloc(arr->length * sizeof(int));
    for (i = arr->length - 1, j = 0; i >= 0; i--, j++)
    {
        b[j] = arr->a[i];
    }
    for (i = 0; i < arr->length; i++)
    {
        arr->a[i] = b[i];
    }
}
int main()
{
    struct array arr = {{2, 8, 4, 15, 36}, 10, 5};
    Reverse(&arr);
    for (int i = 0; i < arr.length; i++)
        
    {
        printf("%d ", arr.a[i]);
    }
}
