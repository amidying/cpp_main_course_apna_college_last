#include"bits/stdc++.h"
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)

//! dag i.e directed cyclic graphs can't be sorted
int main()
{
    int n,m;cin>>n>>m;
    int cnt = 0;
    vector<vector<int>> adjm(n);
    //* also need the indegree
    vector<int> indegree(n,0);
    for(int i=0;i<m;i++){
        int u,v;cin>>u>>v;
        // u->v
        adjm[u].push_back(v);
        indegree[v]++;
    }   
    queue<int> pq;
    rep(i,0,n){
        if(indegree[i]==0){
            pq.push(i);
        }
    }
    while(!pq.empty()){
        cnt++;
        int x = pq.front();
        pq.pop();
        cout<<x<<" ";
        for(auto it: adjm[x]){
            indegree[it]--;
            if(indegree[it]==0){
                pq.push(it);
            }
        }
    }
    return 0;
}