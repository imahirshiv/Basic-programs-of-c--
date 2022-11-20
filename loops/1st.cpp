#include <iostream>
using namespace std;
int main(){
    int i,number;
    cout<<"Enter Number:";
    cin>>number;
    int fact= 1;
    for (i = 1; i <= number; i++)
    {
        fact= fact*i;
    }
    cout<<"Factorial of a given number is: "<<fact<<endl;
    
    return 0;
}