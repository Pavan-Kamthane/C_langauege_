#include<stdio.h>

/*

    Time Complexity : O(N)

    Space Complexity : O(1)

*/

int main()
{
	int n;
	printf("Enter the size of array");
	scanf("%d",&n);

	printf("Enter %d element in array",n);
	int arr[n];
	for(c=0;c<n;c++)
	{
		scanf("%d",&arr[c]);
	}

	int search;
	printf("Enter the element to be search");
	scanf("%d",&search);

	for(c=0;c<n;c++)
	{
		if(arr[c]==search)
		{
			printf("\n Element %d found at position %d ",search,c+1);
			break;
		}
	}

	if (c == n)
		printf("\n Element not found");

}
