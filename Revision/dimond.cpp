#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Entet number:";
    cin>>n;

    // loop to print uppre triangle
    for (int line = 1; line <= n; line++)
    {
        int num_Of_Chars = 2 * line - 1;
        // this is for spaces
        int space = (n - line);
        for (int k = 0; k <= space; k++)
        {
            cout << " ";
        }
        // this loop is for print characters
        for (int j = 0; j < num_Of_Chars; j++)
        {
            char ch = (char)('A' + j);
            cout << ch;
        }
        cout << "\n";
    }
    // upper triangle ended

    // loop to print lower triangle

    // this is for printing spaces in lower triangle
    for (int line = n + 1; line <= 2 * n - 1; line++)
    {
        int space = (line - n);
        for (int k = 0; k < space; k++)
        {
            cout << " ";
        }

        // this is for lower triangle characters

        int no_Of_Chars = 2 * (2 * n - line) - 1;
        for (int j = 0; j < no_Of_Chars; j++)
        {
            cout << (char)('A' + j);
        }
        cout << "\n";
    }

    return 0;
}