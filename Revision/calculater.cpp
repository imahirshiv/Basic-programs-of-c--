#include <iostream>
using namespace std;
int main()
{

    int n1, n2;
    cout << "Enter two numbers ";
    cin >> n1 >> n2;

    cout << "Enter operation (+,-,*,/,%):";
    char oper;
    cin >> oper;

    switch (oper)
    {
    case '+':

        cout << "The sum is :" << n1 + n2 << endl;
        break;

    case '-':

        cout << "The minus is :" << n1 - n2 << endl;
        break;
    case '*':

        cout << "The multi is :" << n1 * n2 << endl;
        break;
    case '/':

        cout << "The division is :" << n1 / n2 << endl;
        break;
    case '%':

        cout << "The remainder is :" << n1 % n2 << endl;
        break;

    default:
        cout << "Please enter valid number or operator";
        break;
    }

    return 0;
}