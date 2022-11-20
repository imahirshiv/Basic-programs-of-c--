#include <iostream>
using namespace std;
double circum(int r){
    double cir=2*3.14*r;
    return cir;
}
double area(int r){
    double ar=3.14*r*r;
    return ar;
}
int main(){
    int r;
    cout<<"Enter the radius: ";
    cin>>r;
    cout<<"area= "<<area(r)<<"cm^2"<<endl;
    cout<<"circum="<<circum(r)<<endl;
}