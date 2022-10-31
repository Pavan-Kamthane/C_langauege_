#include <stdio.h>  
  
int main(void) {  
    
  int n;
  int a;
  int b;
  int c;   
  printf("Enter the number of columns: ");  
  scanf("%d",&n);  
  
   
 for( a=1;a<=n;a++)  
 {  
   for( b=1;b<=n-a;b++)  
   {  
       printf(" ");  
   }  
   for( c=0;c<=n-b;c++)  
   {  
     printf("*");  
   }  
   printf("\n");  
 }  
for(a=1;a<n;a++)  
{ 
  for( b=1;b<a+1;b++)  
  {  
    printf(" ");  
  }  
  for( c=1;c<=a+1;c++)  
  {  
    printf("*");  
  }  
  printf("\n");  
}  
  return 0;  
}  