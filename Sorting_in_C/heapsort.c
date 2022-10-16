#include <stdio.h>
void max_heapify(int A[],int i,int heap_size){
    int largest,temp,l,r;
    l=2*i+1;
    r=2*i+2;
    if(l<heap_size && A[l]>A[i]){
        largest=l;
    }
    else{
        largest=i;
    }
    if(r<heap_size && A[r]>A[largest]){
        largest=r;
    }
    if(largest != i){
        temp=A[largest];
        A[largest]=A[i];
        A[i]=temp;
        max_heapify(A,largest,heap_size);
    }
    

}
void build_heap(int A[],int n){
    for(int i=(n-2)/2;i>=0;i--){
        max_heapify(A,i,n);
    }
}
void heapsort(int A[],int n){
    int temp,heap_size;
    heap_size=n;
    build_heap(A,n);
    for(int i=n-1;i>0;i--){
        temp=A[i];
        A[i]=A[0];
        A[0]=temp;
        heap_size--;
        max_heapify(A,0,heap_size);
    }
}
int main(){
    int n;
    printf("Enter number of elements to be sorted: ");
    scanf("%d",&n);
    int A[n];
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",A+i);
    }
    heapsort(A,n);
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
    return 0;
}