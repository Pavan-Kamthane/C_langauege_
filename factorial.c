
#include<stdio.h>

int fact(int);

int main()
{
    printf("\n\n\t\tStudytonight - Best time to learn\n\n\n");
    int num, g;
    printf("\n\nEnter a number: ");
    scanf("%d", &num);
    g= fact(num);
    printf("\n\nFactorial of  %d is  %d\n\n", num, g);
    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}

int fact(int a)
{
    if(a==1 || a==0)
        return 1;
    else
        return (a*fact(a-1));
}
