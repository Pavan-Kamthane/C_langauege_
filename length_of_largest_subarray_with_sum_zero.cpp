#include <iostream>
#include <map> 

using namespace std;

int largestSubarrayWithZeroSum(int arr[], int len){
    int sum=0, maxLength=0;
    map<int, int> sumMap;
    for(int i=0; i<len ; i++){
        sum+=arr[i];
        if(sum==0){
            maxLength=i+1;
        }
        else if(sumMap.find(sum)!=sumMap.end()){
            maxLength = max(sumMap[sum],i-sumMap[sum]);
        }
        else{
            sumMap[sum]=i;
        }
    }
    return maxLength;
}

int main()
{
    int len=6;
    int arr[]={1,0,1,2,-3,2}; 
    cout << "length of largest subarray with zero sum is " << largestSubarrayWithZeroSum(arr,len);
    return 0;
}