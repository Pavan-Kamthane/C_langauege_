#include<stdio.h>    
#include<stdlib.h>  
int main(){  
int b[10],n,i;    
system ("cls");  
printf("Enter any number: ");    
scanf("%d",&n);    
for(i=0;n>0;i++)    
{    
b[i]=n%2;    
n=n/2;    
}    
printf("\nBinary of Given Number: ");    
for(i=i-1;i>=0;i--)    
{    
printf("%d",b[i]);    
}    
return 0;  
}  