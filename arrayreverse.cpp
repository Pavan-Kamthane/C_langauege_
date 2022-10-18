#include<iostream>
using namespace std;
int main(){
    int r,a;
    cout<<"Enter size of array: ";
    cin>>r;
    int array[r];
    cout<<"Enter elements in array: ";
    for(int i=0;i<r;i++)
        cin>>array[i];
    for(int i=0,j=r-1;i<r/2;i++,j--){
        a=array[i];
        array[i]=array[j];
        array[j]=a;    }
    cout<<"Elements in Reverse array is: ";
    for(int i=0;i<r;i++)
    cout<<array[i]<<" ";
    return 0;
}
