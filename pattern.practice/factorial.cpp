#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int facorial = 1;
    for (int i = 1; i <= n; i++)
    {
        facorial *= i;
        cout << facorial << endl;
    }
    return 0;
}