    #include <stdio.h>  
      
    int main(void) {  
      int x,y;  
      printf("Enter the number = ");  
      scanf("%d",&x);  
      y=2*x-1;  
      for(int i=1;i<=y;i++)  
      {  
        for(int j=1;j<=y;j++)  
        {  
           if(i==j || j==(y-i+1))  
           {  
             printf("*");  
           }  
           else  
           {  
             printf(" ");  
           }  
        }  
        printf("\n");  
      }  
      return 0;  
    }  