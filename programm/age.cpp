#include <iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter Your Age:-";
    cin>>age;
    if (age<12)
    {
        cout<<"Lol!! You are child"<<endl;
    }
    else if (age<18)
    {
        cout<<"Wow!! you are teenager"<<endl;
    }
    else
    {
        cout<<"Great!! You are adult!"<<endl;
    }
    
}