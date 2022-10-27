//Md Zeeshan
//Topic- Calculate Purchase Amount to be Paid after Discount


// If user has purchased something that costs from 101 to 200, the discount will be 5%
// If user has purchased something that costs from 201 to 400, the discount will be 10%
// If user has purchased something that costs from 401 to 800, the discount will be 20%
// And if user has purchased something that costs above 800, the total discount that will be applied on the whole purchase amount is 25%

#include<stdio.h>
#include<conio.h>
int main()
{
    float amount, discount, amountToBePaid;
    printf("How much shopping amount you have done here ? ");
    scanf("%f", &amount);
    printf("\n");
    if(amount<=100)
        printf("You have to paid: %0.2f", amount);
    else
    {
        if(amount>100 && amount<=200)
        {
            discount = (amount*5)/100;
            amountToBePaid = amount-discount;
            printf("After applying the discount, you have to paid: %0.2f", amountToBePaid);
        }
        else if(amount>200 && amount<=400)
        {
            discount = (amount*10)/100;
            amountToBePaid = amount-discount;
            printf("After applying the discount, you have to paid: %0.2f", amountToBePaid);
        }
        else if(amount>400 && amount<=800)
        {
            discount = (amount*20)/100;
            amountToBePaid = amount-discount;
            printf("After applying the discount, you have to paid: %0.2f", amountToBePaid);
        }
        else
        {
            discount = (amount*25)/100;
            amountToBePaid = amount-discount;
            printf("After applying the discount, you have to paid: %0.2f", amountToBePaid);
        }
    }
    getch();
    return 0;
}