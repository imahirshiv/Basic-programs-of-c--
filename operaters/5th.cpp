#include <iostream>
using namespace std;
int main()
{
    int n, first, second, third, sum;
    cout << "Enter 3 digit number:-";
    cin >> n;
    first = n / 100;
    n= n%100;

    second = n/10;

    third = n%10;
    sum = first + second + third;
    cout << "The sum of three digit number is:-" << sum << endl;
    return 0;
}