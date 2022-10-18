#include<iostream>
using namespace std;
int main()
{
    char op;
    int a,b;
    cout<<"Enter any operator:";
    cin>>op;
    cout<<"Enter any number a and b:";
    cin>>a >>b;
    switch(op)
    {
        case '+':
        cout<<"Sum is "<<a<<"+"<<b<<"="<<a+b;
        break;

        case '-':
        cout<<"Subtraction is "<<a<<"-"<<b<<"="<<a-b;
        break;

        case '*':
        cout<<"Multiplication is "<<a<<"*"<<b<<"="<<a*b;
        break;

        case '/':
        cout<<"Division is "<<a<<"/"<<b<<"="<<a/b;
        break;

        default:
        cout<<"ERROR 404";
    }
    return 0;
    
}
