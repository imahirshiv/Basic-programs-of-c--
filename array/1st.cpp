#include <iostream>
using namespace std;
int main(){
    int array[]={1,2,3,4,5,6,7,8};
    cout<<sizeof(array)/sizeof(array[1])<<endl;
    
    int array2[4];
    cout<<array2[1]<<endl;
    cout<<array2[2]<<endl;
    cout<<array2[3]<<endl;
    cout<<array2[4]<<endl;


    return 0;
}