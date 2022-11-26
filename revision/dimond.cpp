#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of lines";
    cin>>n;
    //For Upper triangle


    for (int line = 1; line<n; line++)
    {
        int number_Of_character = 2*line-1;

        //For spaces
        int sp=(n-line);
        for (int i = 0; i <sp; i++)
        {
            cout<<" ";
        }
        //Now printing characters
        for (int j = 0; j <number_Of_character; j++)
        {
            char ch=('A'+j);
            cout<<ch;
        }
        cout<<"\n";
        
    }
    //upper triangle endded

    //for lower triangel
    
    //printing spaces in lower triangle
    for (int line = n+1; line <=2*n-1; line++)
    {
        int sp = (line-n);
        for (int k = 0; k < sp; k++)
        {
            cout<<" ";
        }
        //now for lower triangle character
        int number_of_character =2*(2*n-line)-1;
        for (int j = 0; j <number_of_character; j++)
        {
            cout<<char('A'+j);
        }
     cout<<"\n";   
    }
    return 0;
}