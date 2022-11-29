#include"bits/stdc++.h"
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
vector<vector<int>> adj;
// if the node is visited or not
vector<bool> vis;
// for coloring
vector<int> col;
bool bipart;
//! even length cycle
void color(int u,int curr){
    if(col[u]!=-1 and col[u]!=curr){
        bipart=false;
        return;
    }
    col[u]=curr;
    if(vis[u]){
        return;
    }
    vis[u]=true;
    for(auto i: adj[u]){
        color(i,curr xor 1);//* is colored not color if not then do color
    }
}
int main()
{
    bipart = true;
    int n,m;cin>>n>>m;
    adj = vector<vector<int>>(n);
    vis = vector<bool> (n,false);
    col = vector<int> (n,-1);
    rep(i,0,m){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    //* input is complete then traver the graph
    rep(i,0,n){
        if(!vis[i]){
            color(i,0);//* function to color
        }
    }
    if(bipart){
        cout<<"Graph is bipart"<<endl;
    }else{
        cout<<"Graph is not bipart"<<endl;
    }
    return 0;
}