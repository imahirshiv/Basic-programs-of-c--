#include <iostream>
using namespace std;
int main()
{

    char vowels[5];
    cout << "Enter vowels you want to print:" << endl;

    // for (int idx = 0; idx < 5; idx++)
    // {
    //     cin>>vowels[idx];
    // }
    // for (int ix = 0; ix <5; ix++)
    // {
    //     cout<<vowels[ix]<<" ";
    // }
    // for each loop input

    for (char &element : vowels)
    {
        cin >> element;
    }
    for (int idx = 0; idx < 5; idx++)
    {
        cout << vowels[idx] << " ";
    }
    cout << "\n";

    return 0;
}