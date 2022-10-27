#include <stdio.h>
int main() {

  int x;

  int a1 = 0, a2 = 1;


  int nextTerm = a1 + a2;


  printf("Enter the number of terms: ");
  scanf("%d", &x);


  printf("Fibonacci Series: %d, %d, ", a1, a2);


  for (int i= 3; i <= x; ++i) {
    printf("%d, ", nextTerm);
    a1 = a2;
    a2 = nextTerm;
    nextTerm = a1 + a2;
  }

  return 0;
}