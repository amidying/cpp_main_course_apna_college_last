#include "bits/stdc++.h"
using namespace std;
int duplicate(vector<int> arr)
{
    int n=arr.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j])
            {
                return arr[j];
            }
        }
    }
    return -1;
}
int main(){
    vector<int> arr={1,2,3,4,4};
    cout<<duplicate(arr)<<endl;
    return 0;
}