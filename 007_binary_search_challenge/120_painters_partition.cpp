#include"bits/stdc++.h"
using namespace std;

int findFeasible(int arr[],int n,int mid){
    int sum = 0,painters = 1;
    for(int i=0;i<n;i++){
        sum = sum+arr[i];
        if(sum>mid){
            sum = arr[i];
            painters++;
        }
    }
    return painters;
}
int paintersPartition(int arr[],int n,int m){
    int totalLength = 0,k = 0;
    for(int i=0;i<n;i++){
        k = max(k,arr[i]);
        totalLength+=arr[i];
    }
    int low = k,high = totalLength;
    while(low<high){
        int mid = (low+high)/2;
        int painters = findFeasible(arr,n,mid);
        if(painters<=m){
            high = mid;
        }else{
            low = mid+1;
        }
    }
    //* we don't need to save the answer into another variable the ans is already low
    return low;
}

int main()
{
    int arr[]={10,20,30,40};
    int n= 4;
    int m = 2;
    cout<<paintersPartition(arr,n,m)<<endl;
    return 0;
}