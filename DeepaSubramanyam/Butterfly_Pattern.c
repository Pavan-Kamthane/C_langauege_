/*
Sample Input:n=7
sample Output:

7           7
76         67
765       567
7654     4567
76543   34567
765432 234567
7654321234567
765432 234567
76543   34567
7654     4567
765       567
76         67
7           7
*/

#include<stdio.h>

void main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=2*(n)-1;i++)
    {
        int count=n;
        for(j=1;j<=(2*n)-1;j++)
        {
            if(i>=j &&j<=2*n-i)
            {
                printf("%d",count);
                count--;
            }
            else if(j>=i &&j>=2*n-i)
            {
                printf("%d",j%n+1);
            }
            else
            {
                printf(" ");
            }

        }
        printf("\n");
    }
}
