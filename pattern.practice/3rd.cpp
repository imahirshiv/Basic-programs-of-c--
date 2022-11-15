#include <iostream>
using namespace std;

int main()
{
    char input, alphabe = 'A';

    cout << "Enter the uppercase character you want to print in the last row: ";
    cin >> input;

    for(int i = 1; i <= (input-'A'+1); ++i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << alphabe << " ";
        }
        ++alphabe;

        cout << endl;
    }
    return 0;
}