#include<stdio.h>
#include<stdlib.h>
int main(){
  int ch=65;
    int i,j,k,m;
    int a;
    printf("Enter the rows = ");
    scanf("%d",&a);
  system("cls");
    for(i=1;i<=a;i++)
    {
        for(j=a;j>=i;j--)
            printf(" ");
        for(k=1;k<=i;k++)
            printf("%c",ch++);
            ch--;
        for(m=1;m<i;m++)
            printf("%c",--ch);
        printf("\n");
        ch=65;
    }
return 0;
}
