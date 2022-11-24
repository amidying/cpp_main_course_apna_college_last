#include"bits/stdc++.h"
#define vi vector<int>
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;
//! coded some bug
void heapify(vi &a,int n,int i){
    int maxId = i;
    int l = 2*i+1;
    int r =2*i+2;
    // checking the right and left child
    if(l<n && a[i]>a[maxId]){
        maxId = l;
    }
    if(r<n && a[r]>a[maxId]){
        maxId = r;
    }
    if(maxId !=i){
        swap(a[i],a[maxId]);
        heapify(a,n,maxId);
    }
}
void heapSort(vi &a){
    int n = a.size();
    for(int i=n/2-1;i>=0;i--){
        heapify(a,n,i);
    }
    for(int i=n-1;i>0;i--){
        swap(a[0],a[i]);
        heapify(a,i,0);// till i and the starting index is 0
    }
}
int main()
{
    int n;
    cin>>n;
    vi a(n);
    rep(i,0,n){
        cin>>a[i];
    }
    // heapSort function
    heapSort(a);
    rep(i,0,n)
        cout<<a[i];
    return 0;
}