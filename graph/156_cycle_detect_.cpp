#include"bits/stdc++.h"
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
//! cycle detection in undirected graph

bool isCycle(int i,vector<vector<int>> &adj,vector<int> &visited,int parent);
int main()
{
    int n,m;cin>>n>>m;//! n = number of vertex,m=number of edges
    vector<vector<int>> adj(n);
    rep(i,0,n){
        int x,y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    //! first assume cycle is not present if present raise it
    bool cycle = false;
    vector<bool> visited(n,false);//* a visited array to check if the node is visited or not initialized false
    rep(i,0,n){
        if(!visited[i] && isCycle(i,adj,visited,-1)){//! isCycle to check is present
            cycle = true;
        }
    }
    if(cycle){
        cout<<"Cycle is present...!"<<endl;
    }else{
        cout<<"Cycle is not present...!"<<endl;
    }

    return 0;
}

bool isCycle(int src,vector<vector<int>> &adj,vector<int> &visited,int parent){
    visited[src]=true;
    for(auto i: adj[src]){
         if(i != parent){
            if(visited[i]){
                return true;
            }
            if(!visited[i] and isCycle(i,adj,visited,src)){
                return true;
            }
         }
    }
    return false;
}