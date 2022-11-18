#include <iostream>
using namespace std;
int main()
{

    int a, b, c;
    cout << "enter a:-";
    cin >> a;
    cout << "enter b:-";
    cin >> b;
    a = b;
    b = c;
    c = a;
    cout << a << endl;
    cout << b << endl;

    return 0;
}