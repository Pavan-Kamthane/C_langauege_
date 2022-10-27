#include<stdio.h>  
int main(){  

int a,b,c=0,flag=0;  
//get input  
printf("Enter the number to check prime:");    
scanf("%d",&a);  

c=a/2;    
for(b=2;b<=c;b++){    
if(a%b==0){    
printf("Number is not prime");    
flag=1;    
break;    
}    
}    
if(flag==0)    
printf("Number is prime");     
return 0;  
 }  