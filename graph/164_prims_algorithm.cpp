#include"bits/stdc++.h"
using namespace std;
int n,m;
int cost = 0;
const int N = 1e5+3;
vector<int> g[N];
vector<int> dist[N],parent[N];
vector<bool> vis[N];
const int INF = 1e9;

void primsMST(int source){
    for(int i=0;i<n;i++){
        dist[i]=INF;
    }
    set<vector<int>> s;
    dist[source]=0;
    s.insert({0,source});
    while(!s.empty()){
        auto x = *(s.begin());
        s.erase(x);
        vis[x[1]]=true;
        int u = x[1];
        int v = parent[x[1]];
        int w = x[0];
        cout<<u<<" "<<v<<endl;
        cost += w;
        for(auto it: )//! not gonna complete now
    }
}
int main()
{
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        g[u].push_back({v,w});
        g[v].push_back({u,w});
    }
    primsMST(0);
    cout<<cost<<endl;
    return 0;
}