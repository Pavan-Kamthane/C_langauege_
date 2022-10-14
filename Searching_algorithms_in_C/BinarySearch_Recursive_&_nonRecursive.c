#include <stdio.h>
#include <stdlib.h>

int BinarySearch(int array[], int numberofElements, int data);

int recursiveBinary(int array[], int lower_bound, int upper_bound, int searchValue);

int main()
{
    int a[5] = {3,5,9,19,21};
    int search = 9;

    //int result = recursiveBinary(a,0,4,search);
    int result = BinarySearch(a,5,search);
    printf("Searched data is at the index: %d", result);

    return 0;

}


int  BinarySearch(int array[], int numberofElements, int data){
    int left= 0;
    int right = numberofElements-1;
    int mid = (left + right)/2;

    while(left<=right){ //if left > right, that means data not found
          if(data == array[mid]){ //CASE 1
            return mid;
          }else if(data < array[mid]){ //CASE 2
            right = mid -1;
          }else if(data > array[mid]){ //CASE 3
            left = mid + 1;
          }
    }
    return -1;


}


int recursiveBinary(int array[], int lower_bound, int upper_bound, int searchValue){
    if(lower_bound > upper_bound){
        return -1;
    }
    int i = (lower_bound + upper_bound)/2;
    if(array[i] == searchValue){
        return i;
    }else if(array[i]<searchValue){
        return recursiveBinary(array, i+1, upper_bound,  searchValue);
    }else{
        return recursiveBinary(array, lower_bound, i-1, searchValue);
    }
}
