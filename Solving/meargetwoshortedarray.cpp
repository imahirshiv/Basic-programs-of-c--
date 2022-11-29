#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void mergeArrays(int array1[], int array2[], int n1, int n2, int array3[])
{
    int i=0,j=0, k=0;

    while (i<n1)
    {
        array3[k++]=array1[i++];
    }
    while (j<n2)
    {
        array3[k++]=array2[j++];
    }
    sort(array3,array3+n1+n2);
}

int main()
{
    int array1[]={1,3,5,7};
    int n1=sizeof(array1)/sizeof(array1[0]);

    int array2[]={2,4,6,8};
    int n2=sizeof(array2)/sizeof(array2[0]);

    int array3[n1+n2];
    mergeArrays(array1,array2,n1,n2,array3);
    cout<<"Array after merging"<<endl;
    for (int i = 0; i < n1+n2; i++)
    {
        cout<<array1[i]<<" ";
    }
    

    return 0;
}