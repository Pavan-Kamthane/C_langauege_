#include<stdio.h>  
 int main()    
{   

int x,y,sum=0,temp;    
printf("enter the number=");    
scanf("%d",&x);    
temp=x;    

while(x>0)    
{    
y=x%10;    
sum=sum+(y*y*y);    
x=x/10;    
}    
if(temp==sum)    
printf("armstrong  number ");    
else    
printf("not armstrong number");    
return 0;  
}