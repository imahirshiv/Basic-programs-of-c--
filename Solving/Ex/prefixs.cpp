#include <iostream>
#include <vector>
using namespace std;
void prefixSum(vector<int> &v)
{
    for (int i = 1; i < v.size(); i++)
    {
        v[i] = v[i - 1] + v[i];
    }
    return;
}
int main()
{

    int n;
    cout << "Enter How many element you have in vector: ";
    cin >> n;
    cout << "Enter those " << n << " Elements: "<<endl;

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int elm;
        cin >> elm;
        v.push_back(elm);
    }
    prefixSum(v);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}