#include <stdio.h>

void swap(int *num1, int *num2);
int partition(int arr[], int start, int end);
void QuickSort(int arr[], int start, int end);

int main()
{
    int arr[] = {1, 5, 4, 2, 1, 15, 9, 13};

    int n = sizeof(arr) / sizeof(arr[0]);

    printf("\nArray before sorting : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    QuickSort(arr, 0, n - 1);

    printf("After sorting array : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int start, int end)
{

    int pivot = arr[end];
    int i = (start - 1);
    for (int j = start; j < end; j++)
    {
        if (arr[j] <= pivot)
        {

            i++;

            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[end]);
    return (i + 1);
}

void QuickSort(int arr[], int start, int end)
{
    if (start < end)
    {

        int pi = partition(arr, start, end);
        QuickSort(arr, start, pi - 1);
        QuickSort(arr, pi + 1, end);
    }
}
