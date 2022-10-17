#include<iostream>
using namespace std;
int fib(int n)
{
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else
    return fib(n-1)+fib(n-2);
}
int main()
{
    int n,i,sum=0;
    cout<<"Enter no. of terms until which u want to print and sum: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
      cout<<fib(i)<<endl;
      sum+=fib(i);
    }
    cout<<"Sum is "<<sum;
    return 0;
}
