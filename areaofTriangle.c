#include<stdio.h>

int main()
{
    int h, a;
    float area;
    printf("Enter the height of the Triangle: ");
    scanf("%d", &h);
    printf("\nEnter the base of the Triangle: ");
    scanf("%d", &a);
    area = (h*a)/(float)2;
    printf("\nThe area of the triangle is: %f", area);

    return 0;
}
