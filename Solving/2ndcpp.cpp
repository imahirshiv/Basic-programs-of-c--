#include<iostream>
#include<vector>
using namespace std;
void sortZerosAndOnes(vector<int> &v){
    int zerosCount=0;
    for(int ele:v){
        if (ele==0)
        {
            zerosCount++;
        }
        
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (i<zerosCount)
        {
            v[i]=0;
        }
        else
        {
            v[i]=1;
        }
        
        
    }
    
}
int main(){

    int n;
    cin>>n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int elm; cin>>elm;
        v.push_back(elm);
    }
    sortZerosAndOnes(v);
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";

    }
    cout<<endl;
    

    return 0;
}