#include <stdio.h>
void counting_sort(int A[],int n,int k){
    int B[n];
    int C[k]={0};
    for(int i=0;i<n;i++){
        C[A[i]]++;
    }
    for(int i=1;i<k;i++){
        C[i]=C[i]+C[i-1];
    }
    for(int i=n-1;i>=0;i--){
        B[--C[A[i]]]=A[i];
    }
    for(int i=0;i<n;i++){
        A[i]=B[i];
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++){
        scanf("%d",A+i);
    }
    counting_sort(A,n,100);
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
    return 0;
}
