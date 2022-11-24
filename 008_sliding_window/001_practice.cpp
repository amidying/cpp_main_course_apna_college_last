#include"bits/stdc++.h"
using namespace std;

int maxSubarray(int arr[],int n,int k,int x){
    int ans = 0;
    int sum = 0;
    for(int i=0;i<k;i++){
        sum += arr[i];
    }
    if(sum<x){
        ans = sum;
    }
    for(int i=k;i<n;i++){
        sum = sum-arr[i-k];
        sum = sum+arr[k];
        if(sum<x){
            ans = max(ans,sum);
        }
    }
    return ans;
}

int main()
{
    
    return 0;
}