#include <iostream>
using namespace std;
int main()
{
    char op;
    float num1, num2;
    cout << "Enter any Operator(+ ,- ,* ,/):";
    cin >> op;
    cout << "Enter two number :";
    cin >> num1 >> num2;

    switch (op)
    {
    case '+':
        cout << num1 << "+" << num2 << "=" << num1 + num2 << endl;
        break;

    case '-':
        cout << num1 << "-" << num2 << "=" << num1 - num2 << endl;
        break;

    case '*':
        cout << num1 << "*" << num2 << "=" << num1 * num2 << endl;
        break;

    case '/':
        cout << num1 << "/" << num2 << "=" << num1 / num2 << endl;
        break;

    default:
        cout << "Error! The operator is not correct";
        break;
    }

    return 0;
}