#include <iostream>
using namespace std;
int main(){
    int day;
    cout<<"Enter Number Of Day You Want Check!:-";
    cin>>day;
    switch (day)
    {
    case 1:
        cout<<"Monday"<<endl;
        break;
    case 2:
        cout<<"Tuesday"<<endl;
        break;
    case 3:
        cout<<"Wednsday"<<endl;
        break;
    case 4:
        cout<<"Thursday"<<endl;
        break;
    case 5:
        cout<<"Friday"<<endl;
        break;
    case 6:
        cout<<"sturday"<<endl;
        break;
    case 7:
        cout<<"Sunday"<<endl;
        break;
    
    default:
        cout<<"please Enter bitween 1 to 7 Thankyou!"<<endl;
        break;
    }
}