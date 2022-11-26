#include <iostream>
using namespace std;
double areac(int r ){
   double a = 3.14*r*r;
   return a;
}
double circum(int r){
    double cir =2*3.14*r;
    return cir;
}

int main(){
    int r;
    cout<<"Enter radius of circle :";
    cin>>r;

    cout<<areac(r)<<endl;
    cout<<circum(r)<<endl;
    
    return 0;
}