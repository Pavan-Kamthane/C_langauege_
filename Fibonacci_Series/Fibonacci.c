#include <stdio.h>
int main() {

  int i, num;

  int t1 = 0, t2 = 1;

  int nextTerm = t1 + t2;

  printf("Enter the number of terms: ");
  scanf("%d", &num);

  printf("Fibonacci Series: %d, %d, ", t1, t2);

  for (i = 3; i <= num; ++i) {
    printf("%d, ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }

  return 0;
}
