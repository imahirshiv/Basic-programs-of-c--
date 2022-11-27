#include <iostream>
using namespace std;
int main()
{
    int myarray[]={2,5,6,9,11};
    int key=9;
    int ans=-1;
    for (int i = 0; i < 5; i++)
    {     
        if (myarray[i]=key)
        {
            cout<<key<<endl;
        }
        
    }
    
    return 0;
}