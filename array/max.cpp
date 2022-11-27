#include <iostream>
using namespace std;
int main()
{
    int myarray[] = {3, 2, 8, 18, 9};
    int max = myarray[0];
    for (int i = 1; i < 5; i++)
    {
        if (myarray[i] > max)
        {
            max = myarray[i];
        }
    }
    cout << max << endl;
    return 0;
}