#include"bits/stdc++.h"
using namespace std;
int findPeak(int arr[],int low,int high,int n){
    int mid = low+(high-low)/2;
    if((mid==0 || arr[mid-1]<=arr[mid]) && (mid==n-1 || arr[mid+1]<= arr[mid])){
        return mid;
    }
    else if(mid>0 && arr[mid-1]>arr[mid]){
        return findPeak(arr,low,mid-1,n);
    }else{
        return findPeak(arr,mid+1,high,n);
    }
}
int main()
{
    int arr[]={0,6,8,5,7,9};
    // int low = 0,high =  ,n=6;
    int arr2[]={1,2,3,4,5,6};
    int n = 6;
    cout<<findPeak(arr2,0,n-1,n)<<endl;
    // cout<<findPeak(arr2,0,n-1,n)<<endl;
    return 0;
}