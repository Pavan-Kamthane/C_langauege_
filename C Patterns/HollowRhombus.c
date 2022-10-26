#include <stdio.h>  
      
    int main()  
    {  
        int x;  
        printf("Enter the number of rows = ");  
        scanf("%d",&x);  
        for(int i=x;i>=1;i--)  
        {  
            for(int j=1;j<=i-1;j++)  
            {  
                printf(" ");  
            }  
            for(int k=1;k<=x;k++)  
            {  
               if(i==1 || i==x || k==1 || k==x)  
                printf("*");  
                else  
                printf(" ");   
            }  
            printf("\n");  
        }  
        return 0;  
    }