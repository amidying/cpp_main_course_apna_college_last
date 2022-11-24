
// sorted Array
#include"bits/stdc++.h"

using namespace std;

bool Sorted(int arr[],int n){
    if(n==1){
        return true;
    }
    int restArray= Sorted(arr+1,n-1);
    return (arr[0]<arr[1] && restArray);
}
void dec(int n){
    if(n==0){
        cout<<"1"<<endl;
        return;
    }
    cout<<n<<endl;
    dec(n-1);
}
void inc(int n){
    if(n==1){
        cout<<"1"<<endl;
        return;
    }
    inc(n-1);
    cout<<n<<endl;
}
// find the first and last occarance of an array
int firstocc(int arr[],int n,int i,int key){
    if(i==n){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
    return firstocc(arr,n,i+1,key);
}
int lastocc(int arr[],int n,int i,int key){
    if(i==n){
        return -1;
    }
    int restArr = lastocc(arr,n,i+1,key);
    if(restArr!=-1){
        return restArr;
    }
    if(arr[i]==key){
        return i;
    }
    return -1;
}
int main(){
    int arr[7]={1,2,3,2,3,2,5};
    cout<<firstocc(arr,7,0,2)<<endl;
    cout<<lastocc(arr,7,0,2)<<endl;
    // int n;
    // cin>>n;
    // increasing
    // inc(5);
    // decreasing order
    // dec(n);
    // sorted Array
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // cout<<Sorted(arr,n)<<endl;
    return 0;
}