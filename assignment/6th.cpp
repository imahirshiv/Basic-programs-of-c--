#include <iostream>
using namespace std;
int main()
{

    int a, b,temp;
    cout << "Enter A:-";
    cin >> a;
    cout << "Enter B:-";
    cin >> b;
    temp =a;
    a=b;
    b=temp;
    cout<<"After swaping A is:-" << a << endl;
    cout<<"After swaping B is:-" << b << endl;

    return 0;
}