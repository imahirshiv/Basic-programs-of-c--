#include <iostream>
#include <vector>
using namespace std;
bool checkPrefixSuffixSum(vector<int> &v)
{
    int total_sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        total_sum += v[i];
    }
    int prefix_Sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        prefix_Sum += v[i];
        int suffix_Sum = total_sum - prefix_Sum;

        if (prefix_Sum == suffix_Sum)
        {
            return true;
        }
    }
    return false;
}
int main()
{

    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int elm;
        cin >> elm;
        v.push_back(i);
    }
    cout << checkPrefixSuffixSum(v) << endl;

    return 0;
}