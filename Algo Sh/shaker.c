    #include <stdio.h>

    void swap(int *n1, int *n2){
        int temp;
        temp = *n1;
        *n1 = *n2;
        *n2 = temp;
    }

    void shakersort(int arr[], int num)

    {

        int i,j;
        for (i = 1; i <= num / 2; i++)
        {
            for (j = i - 1; j < num - i; j++)
                if (arr[j] > arr[j+1])
                    swap(&arr[j], &arr[j + 1]);

            for (j = num - i - 1; j >= i; j--)
                if (arr[j] < arr[j-1])
                    swap(&arr[j], &arr[j - 1]);

        }

    }

    int main()

    {

        int arr1[10] = {89, 785, -9, 0, 86, 467, 25, 80, 35, 245};
        int i;
        printf("Before Sorting \n");
        for (i = 0 ; i < 10; i++)
            printf("%d ", arr1[i]);
        printf("\nAfter Sorting \n");
        shakersort(arr1, 10);
        for (i = 0 ; i < 10; i++)
            printf("%d ", arr1[i]);
        return 0;

    }