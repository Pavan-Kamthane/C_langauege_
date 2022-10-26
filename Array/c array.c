#include<stdio.h>
void main ()
{
    int arr[200],i,x,largest,sec_largest;
    printf("Enter the size of the array?");
    scanf("%d",&x);
    printf("Enter the elements of the array?");
    for(i = 0; i<x; i++)
    {
        scanf("%d",&arr[i]);
    }
    largest = arr[0];
    sec_largest = arr[1];
    for(i=0;i<x;i++)
    {
        if(arr[i]>largest)
        {
            sec_largest = largest;
            largest = arr[i];
        }
        else if (arr[i]>sec_largest && arr[i]!=largest)
        {
            sec_largest=arr[i];
        }
    }
    printf("largest = %d, second largest = %d",largest,sec_largest);

}
