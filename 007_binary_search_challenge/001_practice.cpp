#include"bits/stdc++.h"
using namespace std;


bool isFeasible(int mid,int arr[],int n,int k){
    int pos = arr[0],element = 1;
    for(int i=1;i<n;i++){
        if(arr[i]-pos>=mid){
            pos= arr[i];
            element++;
            if(element==k){
                return true;
            }
        }
    }
    return false;
}
int largetMinDistance(int arr[],int n,int k){
    sort(arr,arr+n);
    int result = -1;
    int left = 1;
    int right = arr[n-1];
    while(left<right){
        int mid = (left+right)/2;
        if(isFeasible(mid,arr,n,k)){
            result = max(result,mid);
            left = mid+1;
        }else{
            right = mid;
        }
    }
    return result;
}
// * page allocation problem
bool isFeasible2(int arr[],int n,int m,int min){
    int studentRequired = 1,sum = 0;
    for(int i=0;i<n;i++){
        if(arr[i]>min){
            return false;
        }
        if(sum+arr[i]>min){
            studentRequired++;
            sum = arr[i];
            if(studentRequired>m){
                return false;
            }
        }else{
            sum += arr[i];
        }
    }
    return true;
}
int allocateMinimum(int arr[],int n,int m){
    int sum = 0;
    if(n<m){
        return -1;
    }
    for(int i=0;i<n;i++){
        sum+= arr[i];
    }
    int start = 0,end = sum,ans = INT_MAX;
    while(start<=end){
        int mid = (start+end)/2;
        if(isFeasible2(arr,n,m,mid)){
            ans = min(ans,mid);
            end = mid-1;
        }else{
            start = mid+1;
        }
    }
    return ans;
}
int main()
{
    
    return 0;
}