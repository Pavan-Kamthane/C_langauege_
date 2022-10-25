#include <stdio.h>  
int factorial(int z);  
void main()  
{  
    int N, R, nCr;  
    printf("Enter the value of n and r?");  
    scanf("%d %d",&N,&R);  
    nCr = factorial(N) / (factorial(R) * factorial(N-R));  
    printf("\nnCr = %d", nCr);  
}  
  
int factorial(int z)  
{  
    int f = 1, i;  
    if (z == 0)  
    {  
        return(f);  
    }  
    else  
    {  
        for (i = 1; i <= z; i++)  
    {  
            f = f * i;  
    }  
    }  
    return(f);  
}  
