#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the vallue of a:";
    cin>>a;
    cout<<"Enter the value of b:";
    cin>>b;
    int c;
    c=b;
    b=a;
    a=c;
    cout<<"Now The value of a is:"<<a<<endl;
    cout<<"and The value of b is:"<<b<<endl;
    cout<<"Addition of a and b is: "<<a+b<<endl;
    return 0;
}