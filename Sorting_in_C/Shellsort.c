#include <stdio.h>
#include <stdlib.h>

int main()
{
    //an array of integers
    //number of elements = 9
    int a[9] = {23, 29, 15, 19, 31, 7, 9, 5, 2};



    //printing unsorted array
    for(int i=0; i<9; i++){
        printf("%d \t", a[i]);
    }

    int nElements = 9;

    //SHELL sort
    for(int gap = nElements /2; gap >=1; gap = gap/2){ // loop for gap

        for(int j = gap ; j<= nElements -1 ; j++){ //for passes

            for(int i = j-gap ; i>=0; i=  i-gap){ //3rd loop - for comparisons within an each pass

                  if(a[i+gap] > a[i]){
                    break;
                  } else{
                    //swap this a[i+gap] with a[i]
                    int temp;
                    temp = a[i+gap];
                    a[i+gap] = a[i];
                    a[i] = temp;
                  }

            }
        }
    }

     printf("\n");
    //sorted array
    for(int i=0; i<9; i++){
        printf("%d \t", a[i]);
    }



    return 0;
}
