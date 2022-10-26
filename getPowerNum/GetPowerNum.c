// C Program to find power of a number (a^b) using recursion

#include <stdio.h>
#include <conio.h>
 
int main(){
    int base, power, counter, result = 1;
    printf("Enter base and power \n");
    scanf("%d %d", &base, &power);
     
    result = getPower(base, power);
     
    printf("%d^%d = %d", base, power, result);
    getch();
    return 0;
}

// Function to calculate base^power using recursion
 
int getPower(int base, int power){
    // Recursion termination condition,
    // Anything^0 = 1
     
    if(power == 0){
        return 1;
    }
    return base * getPower(base, power - 1);
}
