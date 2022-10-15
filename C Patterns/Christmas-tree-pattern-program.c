#include<stdio.h>
int main(void)
{
    char ch;
    int i,j,n;
    printf("Enter the even value of n: ");
    scanf("%d",&n);
    if(n & 1)
    {
        n += 1;
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            ch=(j<=n/2 && i<=n/2)?'/':(i>n/2)?'|':'\\';
            if(j>=(n/2+1)-i && j<=(n/2)+i && i<=n/2)
            {
                printf("%c",ch);
            }else if(i>n/2 && j>=n/2-1 && j<=n/2+2)
            {
                printf("%c",ch);
            }else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}