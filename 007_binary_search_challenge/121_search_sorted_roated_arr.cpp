#include"bits/stdc++.h"
using namespace std;

int searchInRotateArray(int arr[],int key,int left,int right){
    if(left>right){
        return -1;
    }
    int mid = (left+right)/2;
    if(arr[mid]==key){
        return mid;
    }
    //?1. first case
    if(arr[left]<arr[mid]){
        if(key >= arr[left]&& key <= arr[mid]){
            return searchInRotateArray(arr,key,left,mid-1);
        }
        return searchInRotateArray(arr,key,mid+1,right);
    }
    //? second case
    if(key>=arr[mid] && key <= arr[right]){
        return searchInRotateArray(arr,key,mid+1,right);
    }
    return searchInRotateArray(arr,key,left,mid-1);
}
int main()
{
    int arr[]={30,40,50,10,20};
    int k = 10;
    cout<<searchInRotateArray(arr,k,0,5)<<endl;
    return 0;
}