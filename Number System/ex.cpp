#include <iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    int ans=0;

    int pw=1;
    while (n>0)
    {
        int parity=n%2;
        ans+=pw*parity;
        pw*=10;
        n/=2;
    }
    cout<<ans<<endl;
    return 0;
}