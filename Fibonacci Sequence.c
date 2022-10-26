#include <stdio.h>
int main() {

  int i, n;

  int num1 = 0, num2 = 1;


  int nextTerm = num1 + num2;

  printf("Enter the number of terms: ");
  scanf("%d", &n);


  printf("Fibonacci Series: %d, %d, ", num1, num2);

  for (i = 3; i <= n; ++i) {
    printf("%d, ", nextTerm);
    num1 = num2;
    num2 = nextTerm;
    nextTerm = num1 + num2;
  }

  return 0;
}
