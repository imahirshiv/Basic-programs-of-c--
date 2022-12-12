#include<iostream>
using namespace std;
int main(){

    int n;
    int fact= 1;
    cout<<"Enter possitive integer :";

    if (n<0)
    {
        cout<<"Error";
    }
    
    else
    {
        for (int i = 0; i < n; ++i)
        {
            fact*= i;
        }
        cout<<"Factorial is "<<fact<<endl;
        
    }

    return 0;
}