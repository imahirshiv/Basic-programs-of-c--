#include <iostream>
using namespace std;
int main()
{

    int number, t, r, rev;
    rev = 0;
    cout << "Enter number :";
    cin >> number;
    t = number;

    while (t > 0)
    {
        r = t % 10;
        t = t / 10;
        rev = rev * 10 + r;
    }
    cout<<"Reverse of number "<<number<<" is : "<<rev<<endl;

        return 0;
}