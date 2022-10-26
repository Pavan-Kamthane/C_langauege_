#include <stdio.h>
#include <stdlib.h>

int BSearch(int n,int arr[],int value){
    int lbound=0;
    int ubound=n-1;
    while(lbound<ubound){

       int mid=(lbound+ubound)/2;
    printf("%d",mid);
        if(arr[mid]==value){
            return mid;
        }
        else if(arr[mid]<value){
            lbound=mid+1;
        }
        else{
            ubound=mid-1;
        }



    }
 return -1;


}

int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);

    int val =6;
    int index = BSearch(n,arr,val);
    if(index==-1){
        printf("Not found");
    }
    else{
        printf("Found at %d",index);
    }
    return 0;
}
