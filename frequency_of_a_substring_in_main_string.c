#include <stdio.h>
#include <string.h>

int main()
{
    int count=0,j;
    char str[100], str1[30];
    printf("Enter main string :");
    scanf(" %[^\n]s", str);
    printf("Enter the substring :");
    scanf(" %[^\n]s", str1);
    j=0;
    for (int i=0; str[i]!='\0'; i++)
    {
        if (str[i]==str1[j])
        {
            j++;
        }
        else{
            j=0;
            if (str[i]==str1[j])
            {
                j++;
            }
        }
        if (str1[j]=='\0')
        {
            count++;
            j=0;
        }
    } 
    printf("frequency of substring in main string is: %d\n", count);
    return 0;
}
