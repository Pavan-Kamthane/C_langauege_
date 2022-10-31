//Fibonacci Series up to n terms
#include <stdio.h>
int main() {

  int x, n;

  
  int t1 = 0, t2 = 1;

  
  int nextTerm = t1 + t2;

  
  printf("Enter the number of terms: ");
  scanf("%d", &n);

  
  printf("Fibonacci Series: %d, %d, ", t1, t2);

 
  for (x = 3; x <= n; ++x) {
    printf("%d, ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }

  return 0;
}