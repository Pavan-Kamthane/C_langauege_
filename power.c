#include <stdio.h>
int power(int x, int y);
int main() {
    int base, z, result;
    printf("Enter base number: ");
    scanf("%d", &base);
    printf("Enter power number(positive integer): ");
    scanf("%d", &z);
    if(z>0){
        result = power(base, z);
        printf("%d^%d = %d", base, z, result);
    }else{
        printf("Enter the positive number for power.");
    }

    return 0;
}

int power(int base, int z) {
    if (z != 0)
        return (base * power(base, z - 1));
    else
        return 1;
}
