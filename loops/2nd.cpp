#include <iostream>
using namespace std;
int main()
{

    cout << "the armstrong number between range of 100 to 500 is :" << endl;

    for (int i = 0; i < 10000; i++)
    {
        int sum = 0;
        int t = i;
        while (t != 0)
        {
            sum = sum + ((t % 10) * (t % 10) * (t % 10));
            t = t / 10;
        }
        if (sum == i)
        {
            cout << i << endl;
        }
    }

    return 0;
}