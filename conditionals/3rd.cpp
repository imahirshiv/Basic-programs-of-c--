#include <iostream>
using namespace std;
int main()
{

    int costPrice, sellingPrice;
    cout << "Enter cost price:";
    cin >> costPrice;
    cout << "Enter selling price:";
    cin >> sellingPrice;

    int profit = sellingPrice - costPrice;

    if (profit>0)
    {
        
        cout << "Profit=" << profit << endl;
    }
    else
    {

        int loss = costPrice - sellingPrice;
        cout << "Loss=" << loss << endl;
    }

    return 0;
}