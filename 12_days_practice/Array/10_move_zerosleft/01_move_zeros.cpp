#include"bits/stdc++.h"
using namespace std;

void moveZerosToLeft(vector<int> &arr,int n)
{
    vector<int> storeNonZero;

    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            storeNonZero.push_back(arr[i]);
        }
    }
    int i=n-1;
    for(int j=storeNonZero.size()-1;j>=0;j--)
    {
        arr[i]=storeNonZero[j];
        i--;
    }
    while (i>=0)
    {
        arr[i]=0;
        i--;
    }
    
}

int main(){
    vector<int> a={1,0,2,3,0,1,4,0,2,0,0,1,3,4,2,5,0,1,0,1};
    moveZerosToLeft(a,a.size());
    for(auto &i: a)
    {
        cout<<i<<" ";
    }
    return 0;
}