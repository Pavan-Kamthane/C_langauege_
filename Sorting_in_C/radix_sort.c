#include <stdio.h>
int max(int A[],int n){
    int m=A[0];
    for(int i=1;i<n;i++){
        if(m<A[i]){
            m=A[i];
        }

    }
    return m;
}
void counting_sort(int A[],int n,int e){
    int B[n],C[10]={0};
    for(int i=0;i<n;i++){
        B[i]=A[i];
        C[(A[i]/e)%10]++;
    }
    for(int i=1;i<10;i++){
        C[i]+=C[i-1];
    }
    for(int i=n-1;i>=0;i--){
        A[--C[(B[i]/e)%10]]=B[i];
    }
    
}
void radix_sort(int A[],int n){
    int m=max(A,n);
    for(int e=1;m/e>0;e*=10){
        counting_sort(A,n,e);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int * A=new int [n];
    for(int i=0;i<n;i++){
        scanf("%d",A+i);
    }
    radix_sort(A,n);
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
    return 0;
}
