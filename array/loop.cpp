#include<iostream>
using namespace std;
int main(){

    int arrays[]={1,2,3,4,5,6,7,8};
    int size=sizeof(arrays)/sizeof(arrays[0]);
    cout<<size<<endl;
    for (int idx = 0; idx <size; idx++)
    {
        /* code */cout<<arrays[idx]<<endl;
    }
    cout<<"\n";
    //for each loop
    for(int elm:arrays){
        cout<<elm<<endl;
    }
    

    return 0;
}