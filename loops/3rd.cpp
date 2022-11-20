#include <iostream>
using namespace std;
int main()
{

    int number, sum;
    sum = 0;
    cout << "Enter number:";
    cin >> number;

    for (int i = 1; i <= number; i++)
    {

        sum += i;
    }
    cout << "The sum of n number is : " << sum << endl;

    return 0;
}