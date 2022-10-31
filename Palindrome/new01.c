#include <stdio.h>

int main() {
    int a, n1, rev = 0, rem;
    
    printf("Enter a number: ");
    scanf("%d", &a);    
    n1 = a;
    
    
    while (a > 0){
        rem = a % 10;
        rev = rev * 10 + rem;
        a = a / 10;
    }
    
    if (n1 == rev){
        printf("The entered number is a palindromic number\n"); 
    }
    else{
        printf("GThe entered number is not a palindromic number\n"); 
    }    
    return 0; 
}