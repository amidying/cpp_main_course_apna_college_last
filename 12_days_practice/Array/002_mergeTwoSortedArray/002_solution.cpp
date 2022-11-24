// #include <iostream>
#include"bits/stdc++.h"
using namespace std;
vector<int> mergeSorted(vector<int> &arr1,int m,vector<int>&arr2,int n){
    for(int i=0;i<n;i++){
        arr1[m+i]=arr2[i];
    }
    sort(arr1.begin(),arr1.end());
}
int main(){
    
    return 0;
}