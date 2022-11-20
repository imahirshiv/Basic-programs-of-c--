#include <iostream>
using namespace std;
int voter(int age)
{
    if (age >= 18)
    {
        return true;
    }
    return false;
}
int main(){

    int age;
    cout<<"Enter The age: ";
    cin>>age;
    if (voter(age)==true)
    {
        cout<<"Yes!!";
    }
    else
    {
        cout<<"No!!!";
    }
    cout<<endl;
    

    return 0;
}