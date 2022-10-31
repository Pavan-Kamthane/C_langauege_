    #include<stdio.h>    
    #include<stdlib.h>  
    int main(){  
       int x=0,y=1,i,z,n,j;    
    system("cls");  
        printf("Enter the limit = ");    
        scanf("%d",&n);    
        for(i=1;i<=n;i++)    
        {    
            x=0;    
            y=1;    
            printf("%d\t",y);    
            for(j=1;j<i;j++)    
            {    
                z=x+y;    
                printf("%d\t",z);    
                x=y;    
                y=z;    
        
            }    
            printf("\n");    
        }    
    return 0;  
    }  