#include"bits/stdc++.h"
using namespace std;
//! code not working properly
int smallestSubarrayWithSum(int arr[],int n,int x){
    int sum = 0,minLength = n+1,start = 0,end = 0;
    while(end<n){
        while(sum<x && end<n){
            sum += arr[end++];
        }
        while(sum>=x && start<n){
            if(end-start <minLength){
                minLength = end - start;
            }
            sum -= arr[start++];
        }
    }
    return minLength;
}
//* practice
int smallestSubarrWithSum(int arr[],int n,int x){
    int sum = 0,minLength=n+1,start = 0,end = 0;
    while(end<n){
        while(sum<x && end<n){
            sum += arr[end++];
        }
        while(sum>=x && start<n){
            if(end-start<minLength){
                minLength = end -start;
            }
            sum -=arr[start++];
        }
    }
    return minLength;
}
int main()
{
    int arr[]={1,4,45,6,10,19};
    int n = 6;
    int x = 51;
    // cout<<smallestSubarrayWithSum(arr,n,x)<<endl;
    int minlength = smallestSubarrayWithSum(arr,n,x);
    if(minlength==n+1){
        cout<<"No such subarray exists..."<<endl;
    }else{
        cout<<"The smallest subarray length is: "<<minlength<<endl;
    }
    return 0;
}