#include <stdio.h>
#include <stdlib.h>
 
int main()
{
 int n,*a,i;
 printf("enter size of array");
 scanf("%d",&n);
 a=(int*)calloc(n,sizeof(int));
 for(i=0;i<n;i++)
 {
    printf("\n enter elements");
    scanf("%d ",&a+i);
 }
 printf("entered elements are");
 for(i=0;i<n;i++)
 {
    printf("\t %d",*a+i);
 }
 free(a);
 return 0;
}