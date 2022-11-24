#include"bits/stdc++.h"
using namespace std;
#define ff first 
#define ss second 
int main()
{
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }   
    map<int,int> freq;
    for(int i=0;i<n;i++){
        freq[a[i]]++; // will increase the value at the ith index

    }
    //* creating the itrator for the map
    map<int,int> :: iterator it;
    for(it=freq.begin();it!=freq.end();it++){
        cout<<it->ff<<"->"<<it->ss<<endl;
    }
    //! also unordered_map be used
    return 0;
}