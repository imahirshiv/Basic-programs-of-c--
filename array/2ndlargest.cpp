#include<iostream>
using namespace std;
int largestelementindex(int array[],int size){
    int max=INT8_MIN;
    for (int  i = 0; i < size; i++)
    {
        if (array[i]>max)
        {
            max=array[i];
        }
        
    }
return max;    

}
int main(){
     
     int array[]={2,3,5,7,6,1};
    int largestel=largestelementindex(array,5);


    return 0;
}