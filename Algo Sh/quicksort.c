#include <stdio.h>


void swap(int *num1, int *num2) {
  int temp = *num1;
  *num1 = *num2;
  *num2 = temp;
}


int partition(int arr1[], int l, int h) {
  
  int pivot = arr1[h];
  int i = (l - 1);
  
  for (int j = l; j < h; j++) {
    if (arr1[j] <= pivot) {
        
      i++;
      swap(&arr1[i], &arr1[j]);
    }
  }

  swap(&arr1[i + 1], &arr1[h]);
  return (i + 1);
}

void quickSort(int arr1[], int l, int h) {
  if (l < h) {
    
    int pi = partition(arr1, l, h);
    quickSort(arr1, l, pi - 1);
    
    quickSort(arr1, pi + 1, h);
  }
}

void printArry(int arr1[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", arr1[i]);
  }
  printf("\n");
}

int main() {
  int arry[] = {43, 55, 1, -11, 40, 83, 92, 47};
  int num = sizeof(arry) / sizeof(arry[0]);
  printf("Unsorted Array\n");
  printArry(arry, num);
  quickSort(arry, 0, num - 1);
  printf("Sorted Array: \n");
  printArry(arry, num);
}