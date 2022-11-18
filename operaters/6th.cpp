#include <iostream>
using namespace std;
int main()
{

    int a, b;
    cout << "Enter input a:-";
    cin >> a;
    cout << "Enter input b:-";
    cin >> b;

    int sum = a + b;
    int diffrence = a - b;
    int division = a / b;
    int product = a % b;
    int multiply = a * b;

    cout << "Sum of a,b is :-" << sum << endl;
    cout << "diffrence of a,b is ;" << diffrence << endl;
    cout << "division  of a,b is ;" << division << endl;
    cout << "product of a,b is ;" << product << endl;
    cout << "multiply of a,b is ;" << multiply << endl;

    return 0;
}