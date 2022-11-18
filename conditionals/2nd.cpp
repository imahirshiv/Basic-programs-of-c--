#include <iostream>
using namespace std;
int main()
{

    int num1;
    cout << "Enter the number:-";
    cin >> num1;

    if (num1 < 0)
    {
        num1 = num1 * (-1);
        cout << "The absolute value is :" << num1<<endl;
    }

    return 0;
}