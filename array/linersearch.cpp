#include <iostream>
using namespace std;
int main(){
    int array[]={3,9,18,10,7,99};

    int size=sizeof(array)/sizeof(array[1]);
    int key=99;
    int ans=-1;
    for (int i = 0; i < size; i++)
    {
        if (array[i]==key)
        {
            ans=i;
        }
        
    }
    cout<<ans<<endl;
    return 0;
}