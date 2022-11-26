#include <iostream>
using namespace std;
int squares(int x){
    return x*x;
}
int main(){
    
    for (int i = 0; i <=5; i++)
    {
        cout<<squares(i)<<endl;
    }
    

    return 0;
}