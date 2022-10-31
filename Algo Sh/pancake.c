#include <stdio.h>
#include <stdlib.h>

 

void flips(int *, int, int);

int pancake_sort(int *list, unsigned int length)

{

    if (length < 2)
        return 0;

    int i, a, max_num, nmove;

    nmove = 0;

    for (i = length;i > 1;i--)

    {

        max_num = 0;

        for (a = 0;a < i;a++)

        {

            if (list[a] > list[max_num])

                max_num = a;

        }

        if (max_num ==  i - 1)

            continue;

        if (max_num)

        {

            nmove++;

            flips(list, length, max_num + 1);

        }

        flips(list, length, i);

    }

    return nmove;

}

void flips(int *list,  int length,  int num)

{

    int swap;

    int i = 0;

    for (i;i < --num;i++)

    {

        swap = list[i];

        list[i] = list[num];

        list[num] = swap;

    }

}

 

void print_array(int list[], int length)

{

    int i;

    for (i = 0;i < length;i++)

    {

        printf("%d ", list[i]);

    }

}

 

int main(int argc,  char **argv)

{

   int list[9];

   int i;

   printf("Enter elements of array (9) :\n");

   for (i = 0;i < 9;i++)

       scanf("%d", &list[i]);

   printf("\nOriginal: ");

   print_array(list, 9);

   int nmove  =  pancake_sort(list, 9);

   printf("\nSorted: ");

   print_array(list, 9);

   printf(" - with a total of %d moves\n",  nmove);

}