#include"bits/stdc++.h"
using namespace std;

int main()
{
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];

    }
    map<int,int> cnt;
    int prefixSum = 0;
    for(int i=0;i<n;i++){
        prefixSum += a[i];
        cnt[prefixSum]++;
    }
    int ans = 0;
    //* creating the itrator for traversal
    map<int,int> :: iterator it;
    for(it = cnt.begin();it!=cnt.end();it++){
        int c = it->second;
        //* mC2
        ans += (c*(c-1))/2;
        if(it->first==0){
            ans += it->second;
        }

    }
    cout<<ans<<endl;
    return 0;
}