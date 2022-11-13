#include <iostream>
using namespace std;
int main(){
    int num1=18;   //1100
    cout<<(num1<<1)<<endl; //24
    cout<<(num1>>1)<<endl;  //6

    int num2=13;    //1000
    cout<<(num1&num2)<<endl;    //1000
    cout<<(num1|num2)<<endl;    //12
    cout<<sizeof(num1)<<endl;
    cout<<(&num2)<<endl;

    int a=5;
    int b=6;
    cout<<(a++)<<endl;
    cout<<(++a)<<endl; 


    return 0;
}