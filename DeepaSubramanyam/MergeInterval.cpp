/*You are given an array of intervals- that is, an array of tuples(start,end).
The array may not be sorted, and could contain overlapping intervals. Return
another array where the overlapping intervals are merged. Input:[(1,3),(5,8),(4,10),(20,25)] Output:[(1,3),(4,10),(20,25)]*/
#include<bits/stdc++.h>
using namespace std;
struct Interval
{
	int s, e;
};
bool mycomp(Interval a, Interval b)
{ return a.s < b.s; }

void mergeIntervals(Interval arr[], int n)
{
    int i;
	sort(arr, arr+n, mycomp);
    for (i=0; i<n;)
	{
		if (arr[i].e >= arr[i+1].s && i!=n-1)
		{
		     cout << "{" << arr[i].s<< ", " << arr[i].e<< "} ";
		     i+=2;
        }
        else
        {
            cout << "{" << arr[i].s<< ", " << arr[i].e<< "} ";
            i++;
        }
	}
}
int main()
{
	Interval arr[] = {{2,3},{4,6},{6,8},{7,10},{8,9}};
	int n = sizeof(arr)/sizeof(arr[0]);
	mergeIntervals(arr, n);
	return 0;
}

