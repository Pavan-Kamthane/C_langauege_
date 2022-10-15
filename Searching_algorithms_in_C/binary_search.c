#include<stdio.h>

int binarySearch(int a[],int value,int l,int u){
int mid=(l+u)/2;
if(a[mid]==value) return mid;
else if(l>u) return -1;
else {
    if(a[mid]<value) return binarySearch(a,value,mid+1,u);
    else return binarySearch(a,value,l,mid-1);
}

}
int main(){
    int n;
    printf("Enter number of elements in array : ");
    scanf("%d",&n);
    int arr[n];//defining array of size n
    printf("Enter elements of array(in increasing order) : ");
    int i;
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]); 
    }
    int v;
    printf("Enter the value that is to be searched : ");
    scanf("%d",&v);
    int ans=binarySearch(arr,v,0,n-1);
    if (ans!=-1)printf("Element found at %d index",ans);
    else printf("not found");
    return 0;
}
