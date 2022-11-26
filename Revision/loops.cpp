#include <iostream>
using namespace std;
int main(){

    for (int i = 0; i < 10; i++)
    {
        cout<<"Hello from for"<<endl;
    }
    int i =1;
    while (i<10)
    {
        cout<<"Hello from while"<<endl;
        i++;
    }
    do
    {   i++;
        
    } while (i<10);
        cout<<"hey i am from do!!"<<endl;
    

    return 0;
}