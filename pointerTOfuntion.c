
#include<stdio.h>

int fun(int a, int b)
{
    printf("\n\n a = %d \n", a);
    printf("\n\n b = %d \n", b);
}

int main()
{
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");


    int(*fptr)(int , int);


    fptr = fun;


    fun(2,3);
    fptr(2,3);

    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}
