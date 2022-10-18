#include <stdio.h>
int main( )
{
    int o1, o2, int first, second;
    int  max,min,z=0,sum=0,mid,i=0,p=1;
     
    scanf("%d", &o1); 
    scanf("%d", &o2);
     
    if(o1 > o22)
    {
        max = o1; 
        min = o2;
    }
  
    else
    {
        max=o2; 
        min=o1;
    }
  
    while(max>0)
    {
        first = max%10;
        max=max/10;
         
        second = min%10;
        min = min/10;
     
        mid = (first + second +z) % 8;
        z = (first_temp+second+z)/8;
     
        sum=p*mid+sum;
         
        p=p*10;
      
        if(max==0 && z>0)
        {
            suuum = p*z+sum;
        }
    }
    printf("%d", sum);
    return 0;
}
