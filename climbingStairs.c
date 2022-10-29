#include<stdio.h>

int climbStairs(int n){
    int arr[46];
    arr[0] = 1;
    arr[1] = 1;
    arr[2] = 2;
    
    for(int k=3; k<=n; k++){
        arr[k] = arr[k-1] + arr[k-2];
    }
    
    return arr[n];
}

int main() {
    printf(climbStairs(45))
    return -1;
}