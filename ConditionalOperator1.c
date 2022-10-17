//WAP to check if given alphabet is vowel or consonant using conditional operator
#include<stdio.h>
int main()
{
  char a;
  printf("Enter alphabet: ");
  scanf("%c",&a);
  
  (a=='a' || a=='e'|| a=='i' || a=='o' || a=='u')?(printf("%c is a vowel",a)):(printf("%c is a consonant",a));
  
  return 0;
  }
