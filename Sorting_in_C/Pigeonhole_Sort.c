# include <stdio.h>
#include <stdlib.h>

int* pigeonholeSort(int arra_nums[], int size)
  {
    int i, j, min_val = arra_nums[0], max_val = arra_nums[0], range;

    for (i = 1; i < size; i++)
    {
        if (arra_nums[i] < min_val)
            min_val = arra_nums[i];
        if (arra_nums[i] > max_val)
            max_val = arra_nums[i];
    }
    range = max_val - min_val + 1;

    int *temp = (int *)malloc(sizeof(int) * range);
    for (i = 0; i < range; i++)
    {
        temp[i] = 0;
    }
    for (i = 0; i < size; i++)
    {
        temp[arra_nums[i] - min_val]++;
    }

    j = 0;
    for (i = 0; i < range; i++)
    {
        while (temp[i] > 0)
        {
            arra_nums[j] = i + min_val;
            temp[i]--;
            j++;
        }
    }

    return arra_nums;
}

int main()
{
    int arra_nums[100], i, n=0;    
    printf("Input number of elements you want to sort: ");
    scanf("%d", &n);
    if ( n >= 1)
    {
   printf("\nInput the numbers:\n");    
    for (i = 0; i < n; i++) scanf(" %d", &arra_nums[i]);
    int* result_arra = pigeonholeSort(arra_nums, n);
    printf("Sorted array: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", result_arra[i]);
    }
    printf("\n");
    }
	return 0;
}
