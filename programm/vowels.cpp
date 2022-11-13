#include <iostream>
using namespace std;
int main(){
    char charater;
    cout<<"Enter Your Charater:-";
    cin>>charater;
    switch (charater)
    {
    case 'a':
        cout<<"Vowel"<<endl;
        break;
    case 'e':
        cout<<"Vowel"<<endl;
        break;
    case 'i':
        cout<<"Vowel"<<endl;
        break;
    case 'o':
        cout<<"Vowel"<<endl;
        break;
    case 'u':
        cout<<"Vowel"<<endl;
        break;
    default:
        cout<<"Consonants!"<<endl;
        break;
    }
    return 0;
}