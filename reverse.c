#include <stdio.h>

int main(){

    int Num, rev_Num = 0, remainder;

    printf("Enter the number to reverse: ");

    scanf("%d", &Num);    

    while (Num != 0){

        remainder = Num % 10;

        rev_Num = rev_Num * 10 + remainder;

        Num = Num/10;

    }    

    printf("The reversed number is: %d", rev_Num);

    return 0;

}
