#include <stdio.h>

int main() {
  // size of the square
  int size = 5;
  // external loop
  for (int i = 0; i < size; i++) {
    // innternal loop
    for (int j = 0; j < size; j++) {
      // in first and last row print only stars
      if (i == 0 || i == size - 1) {
        printf("*");
      }
      else {
        // at first and last position
        // of row print stars else print spaces
        if (j == 0 || j == size - 1) {
          printf("*");
        }
        else {
          printf(" ");
        }
      }
    }
    printf("\n");
  }
  return 0;
}
