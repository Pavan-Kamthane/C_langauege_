#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
    int a=0,b=0,c=0,x,y,z;
   for(int i=1;i<n;i++){
       for(int j=i+1;j<n+1;j++){
        x=i&(j);
        if (a<x && x<k)
            a=x;
        y=i|(j);
        if(b<y && y<k)
            b=y;
        z=i^(j);
        if(c<z && z<k)
            c=z;
    }}

        printf("%d\n",a);

        printf("%d\n",b);
        printf("%d\n",c);

}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
