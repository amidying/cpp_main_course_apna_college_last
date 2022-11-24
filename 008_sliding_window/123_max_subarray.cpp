#include"bits/stdc++.h"
using namespace std;
//? sliding window or two pointer approach

int maxSubarraysSum(int arr[],int n,int k,int x){
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
        sum = sum+arr[i];
        if(sum<x){
            ans = max(ans,sum);
        }
    }
    return ans;
}
int main()
{
    int arr[]={7,5,4,6,8,9};
    cout<<maxSubarraysSum(arr,sizeof(arr)/sizeof(int),3,20)<<endl;
    return 0;
}