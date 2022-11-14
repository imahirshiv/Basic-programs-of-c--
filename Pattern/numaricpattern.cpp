#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter YOur Number:-";
    cin >> n, m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i == m || j == 1 || i == n || j == m)
            {
                cout << i;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}