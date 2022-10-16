#include<stdio.h>
#include<conio.h>
int main()
{
int n, s, a, b;
scanf("%d",&n);
for(a = 0; a <= n; x++)
{
for(s = n; s > a; s--)
printf(" ");
for(b = 0; b < x; b++)
printf("* ");
printf("\n");
}
for(a = 1; a < n; a++)
{
for(s = 0; s < x; s++)
printf(" ");
for(b = n; b > a;  b--)
printf("* ");
printf("\n");
}
return 0;
}
