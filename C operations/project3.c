#include<stdio.h>  
 int main()    
{    
int p,sum=0,q;    
printf("Enter a number:");    
scanf("%d",&p);    
while(p>0)    
{    
q=p%10;    
sum=sum+q;    
p=p/10;    
}    
printf("Sum is=%d",sum);    
return 0;  
}   