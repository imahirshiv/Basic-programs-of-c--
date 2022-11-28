#include <iostream>
using namespace std;
int main()
{
    int myarray[]={2,5,8,9,11};
    int key=2;
    int ans=-1;
    for (int i = 0; i < 5; i++)
    {     
        if (myarray[i]==key)
        {
            ans=i;
            break;
        }

    }
    cout<<ans<<endl;
    return 0;
}