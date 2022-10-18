#include<stdio.h>
#include<stdlib.h>

int* arr;
int n;

void input()
{
	int i;
    printf("Enter the size of array : ");
    scanf("%d",&n);

    arr=(int*)malloc(n*sizeof(int));
    //array of capacity to store 'n' integers

    printf("Enter %d numbers : \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
}



void display()
{
	int i;
    printf("DISPLAYING ALL THE ARRAY ELEMENTS :- ");

    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void calc_freq()
{
    int i,j,freq,flag=0;

    for(i=0;i<n;i++)
    {
        freq=1;
        flag=0;

        for(j=i-1;j>=0;j--)
        {
            if(arr[j]==arr[i])
            {
                flag=1;//flag=1 means the elements has already occured previously in array
                break;
            }

        }

        if(flag!=1)
        {
        	
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                freq++;
            }
        }

        printf("Frequency of %d is : %d \n",arr[i],freq);
        }
         
    }

}

int main()
{
    input();
    display();
    calc_freq();

    return 0;
}
