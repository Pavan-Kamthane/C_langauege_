// Author: Siddharth Verma
#include<stdio.h>
void bubble_sort(int a[],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(a[j]<a[i])
            {
                a[i]=a[i]+a[j];
                a[j]=a[i]-a[j];
                a[i]=a[i]-a[j];
            }
        }
    }
}
int main()
{
    int a[]={12, 8, 91, 5, 2, 23, 16, 56, 72, 38};
    int n=sizeof(a)/sizeof(a[0]);
    printf("Unsorted array:\n");
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    bubble_sort(a,n);
    printf("\nSorted array:\n");
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}