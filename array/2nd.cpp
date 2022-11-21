#include <iostream>
using namespace std;
int sum(int arr[], int n)
{
    int max_val ;
    int min_val ;
    for (int i = 0; i < n; i++)
    {
        max_val = max(max_val, arr[i]);
        min_val = min(min_val, arr[i]);
    }
    int ans = max_val + min_val;
    return ans;
}