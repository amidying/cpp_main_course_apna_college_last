#include"bits/stdc++.h"
using namespace std;

int main()
{
    int k;//* number of arrays
    cin>>k;
    vector<vector<int>> a(k);
    for(int i=0;i<k;i++){
        int size;
        cin>>size;

        a[i]=vector<int>(size);
        for(int j=0;j<size;j++){
            cin>>a[i][j];
        }
    }
    vector<int> idx(k,0);// index vector size k initialized with 0
    //* min heap
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pqmin;
    for(int i=0;i<k;i++){
        pqmin.push({a[i][0],i});
    }
    vector<int> ans;
    while(!pqmin.empty()){
        pair<int,int> x = pqmin.top();
        pqmin.pop();
        if(idx[x.second()]+1<a[x.second()].size()){
            
        }
    }
    return 0;
}