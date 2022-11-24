#include<iostream>

using namespace std;

int linearSearch(int arr[],int n,int k){
    for(int i=0;i<n;i++){
        if(arr[i]==k)
            return i;
    }
    return -1;
}
int binarySearch(int arr[],int n,int k){
    int s=0,e=n;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]==k){
            return mid;
        }else if(arr[mid]>k){
            e = mid -1;
        }else{
            s= mid+1;
        }
    }
    return -1;

}
int main(){
    // linear search
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    // cout<<linearSearch(arr,n,key)<<endl;
    // binary search the array must be in the sorted order
    cout<<binarySearch(arr,n,key)<<endl;
    return 0;
}