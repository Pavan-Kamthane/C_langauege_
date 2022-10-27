#include <stdio.h>  
  
int main(void) {  
    
  int p;  
  printf("Enter the number of lines ");  
  scanf("%d",&p);  
   
 for(int l=1;l<=p;l++)  
 {  
   for(int m=1;m<=p-l;m++)  
   {  
       printf(" ");  
   }  
   for(int n=0;n<=p-l;n++)  
   {  
     printf("*");  
   }  
   printf("\n");  
 }  
for(int l=1;l<p;l++)  
{  
  for(int m=1;m<l+1;m++)  
  {  
    printf(" ");  
  }  
  for(int n=1;n<=l+1;n++)  
  {  
    printf("*");  
  }  
  printf("\n");  
}  
  return 0;  
}  