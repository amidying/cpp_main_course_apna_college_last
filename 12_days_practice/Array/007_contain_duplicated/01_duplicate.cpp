// #include <iostream>
#include"bits/stdc++.h"
using namespace std;
bool duplicates(vector<int> &nums){
    int n = nums.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]==nums[j]){
                return true;
            }
        }
    }
    return false;
}
int main(){
    vector<int> arr={1,2,3,4,5,1};
    cout<<duplicates(arr)<<endl;
    return 0;
}