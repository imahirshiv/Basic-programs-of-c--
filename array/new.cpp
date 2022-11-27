#include<iostream>
using namespace std;
int main(){

            int arrays[]={1,2,3,4};
            int size=sizeof(arrays)/sizeof(arrays[0]);
            for (int idx = 0; idx < size; idx++)
            {
                cout<<arrays[idx]<<endl;
            }
            

    return 0;
}