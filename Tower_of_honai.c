#include<stdio.h>

int TOH(int n,int a, int b, int c)
{
    if(n>0)
    {
        TOH(n-1,a,c,b);
        printf("(%d,%d)",a,c);
        TOH(n-1,b,a,c);

    }
}
int main()
{   int n;
    printf("Enter the value of disc:");
    scanf("%d", &n);
    TOH(n,1,2,3);
}
