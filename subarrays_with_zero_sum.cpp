
#include <iostream>
#include <unordered_map>
using namespace std;
 
// Function to print all subarrays with a zero-sum in a given array
void printAllSubarrays(int nums[], int n)
{
    // create an empty multimap to store the ending index of all
    // subarrays having the same sum
    unordered_multimap<int, int> map;
 
    // insert (0, -1) pair into the map to handle the case when
    // subarray with zero-sum starts from index 0
    map.insert(pair<int, int>(0, -1));
 
    int sum = 0;
 
    // traverse the given array
    for (int i = 0; i < n; i++)
    {
        // sum of elements so far
        sum += nums[i];
 
        // if the sum is seen before, there exists at least one
        // subarray with zero-sum
        if (map.find(sum) != map.end())
        {
            auto it = map.find(sum);
 
            // find all subarrays with the same sum
            while (it != map.end() && it->first == sum)
            {
                cout << "Subarray [" << it->second + 1 << "…" << i << "]\n";
                it++;
            }
        }
 
        // insert (sum so far, current index) pair into multimap
        map.insert(pair<int, int>(sum, i));
    }
}
 
int main()
{
    int nums[] = { 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 };
    int n = sizeof(nums)/sizeof(nums[0]);
 
    printAllSubarrays(nums, n);
 
    return 0;
}
