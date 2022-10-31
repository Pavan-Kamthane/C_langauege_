//Largest Element in an array
#include <stdio.h>
int main() {
  int x;
  double arr[100];
  printf("Enter number of elements (1 to 100): ");
  scanf("%d", &x);

  for (int i = 0; i < x; ++i) {
    printf("Enter number%d: ", i + 1);
    scanf("%lf", &arr[i]);
  }

  
  for (int i = 1; i < x; ++i) {
    if (arr[0] < arr[i]) {
      arr[0] = arr[i];
    }
  }

  printf("Largest element = %.2lf", arr[0]);

  return 0;
}