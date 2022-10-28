#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
 
int main(int argc, char **argv) {
    int p = 7, l = 3, g = 2, n = 4, x, i, j, k;
    int mul = 1;
    int a[] = { 1, 2, 2, 1 };
    int bin[4];
    printf("The Random numbers are: ");
    for (i = 0; i < 10; i++) {
        x = rand() % 16;
        for (j = 3; j >= 0; j--) {
            bin[j] = x % 2;
            x /= 2;
        }
        for (k = 0; k < 4; k++)
            mul *= pow(a[k], bin[k]);
        printf("%f ", pow(g, mul));
    }
}
