#include <iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter Your marks:-";
    cin>>marks;
    if (marks>33)
    {
        if (marks>80)
        {
            cout<<"You Got A++"<<endl;
        }
        else
        {
            cout<<"You just Passed"<<endl;
        }
    }
    else
    {
        cout<<"Sorry !!You failed!!"<<endl;
    }
    return 0;
}