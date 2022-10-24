#include<stdio.h>
int main()
{   int a,b,c,d,e,f;
    printf("Enter 6 numbers: \n");
    scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
    if(a>b && a>c && a>d && a>e && a>f)
    {printf("%d is Greater",a);}
    else if(b>c && b>d && b>e && b>f)
   {printf("%d is Greater",b);}
    else if(c>d && c>e && c>f)
    {printf("%d is Greater",c);}
    else if(d>e && d>f)
    {printf("%d is Greater",d);}
    else if(e>f)
    {printf("%d is Greater",e);}
    else 
    {printf("%d is Greater",f);}

    return 0;

}
