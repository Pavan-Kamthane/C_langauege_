#include <stdio.h>

int sum=0, rem;

int rev_func(int num){
  if(num){
    rem = num%10;
    sum = sum*10+rem;
    rev_func(num/10);
  }
  else
    return sum;
  return sum;
}

int main(){
  int num, rev_num;

  printf("Enter a number : ");
  scanf("%d", &num);

  rev_num = rev_func(num);
  printf("The reverse of entered number : %d", rev_num);
  
  return 0;
}
