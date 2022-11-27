#include <iostream>
using namespace std;
int main()
{

    int arrays[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(arrays) / sizeof(arrays[0]);
    cout << size << endl;
    for (int idx = 0; idx < size; idx++)
    {
        /* code */ cout << arrays[idx] << endl;
    }
    cout << "\n";
    // for each loop
    for (int elm : arrays)
    {
        cout << elm << endl;
    }

    cout << "\n";
    // while loop in array

    int index = 0;
    while (index < size)
    {
        cout << arrays[index] << endl;
        index++;
    }

    return 0;
}