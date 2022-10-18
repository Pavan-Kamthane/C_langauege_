#include<stdio.h>
int main(){
   int i,j,k;
   printf("Numeric Pattern 1");
   printf("\n");
   printf("\n");
   for(i=1;i<=5;i++){
      k = i;
      for(j=1;j<=i;j++){
         printf("%d ", k);
         k += 5-j;
      }
      printf("\n");
   }
   printf("\n");
   printf("Numeric Pattern 2");
   printf("\n");
   printf("\n");
   for(i = 1;i<=5;i++){
      for(j = i;j<5;j++){
         printf(" ");
      }
      for(k = 1;k<(i*2);k++){
         printf("%d",k);
      }
      printf("\n");
   }
   for(i = 4;i>=1;i--){
      for(j = 5;j>i;j--){
         printf(" ");
      }
      for(k = 1;k<(i*2);k++){
         printf("%d",k);
      }
      printf("\n");
   }
   getch();
   return 0;
}
