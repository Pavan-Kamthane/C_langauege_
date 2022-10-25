    #include <stdio.h>  
      
    int main(void) {  
      int n;  
      printf("Enter the odd number = ");  
      scanf("%d", &n);

      if(n%2==1){
        for(int i=1;i<=n;i++)  
        {  
        if(i==((n/2)+1))  
        {  
          for(int j=1;j<=n;j++)  
          {  
            printf("+");  
          }  
       
        }  
        else  
        {  
        for(int j=1;j<=n/2;j++)  
        {  
          printf(" ");  
        }  
        printf("+");  
        }  
        printf("\n");  
        } 
      }else{
        printf("Enter the odd number only.");
      }
 
      return 0;  
    }  