#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter Number to check:-";
    cin>>num;
    if ((num%3==0)||(num%5==0))
    {
        cout<<"You Rock it's Divisible!"<<endl;
    }
    else
    {
        cout<<"No it's Not!!"<<endl;
    }
    
    return 0;
}