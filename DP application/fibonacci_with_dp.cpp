#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
ll FunctionEntered=0;
ll dp[100]={0};
ll f(ll a)
{
    FunctionEntered++;
    if(a==1||a==2)
    return 1;
    if(dp[a]!=0)
    return dp[a];
    dp[a]=f(a-1)+f(a-2);
    return dp[a];
}
int main()
{
    ll n;
    cin>>n;
    cout<<f(n)<<endl;
    cout<<FunctionEntered<<endl;
    if(dp[n-2]!=0)
    cout<<dp[n-2];
    return 0;
}
