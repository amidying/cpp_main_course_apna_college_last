//? Minimum spanning tree
//* the cost is minimum for all the spanning tree in a spanning tree
#include"bits/stdc++.h"
using namespace std;

const int N = 1e5+6;
vector<int> parent(N);
vector<int> sz(N);

void make_set(int v){
    parent[v]=v;
    sz[v]=1;
}
int find_set(int v){
    if(v==parent[v]){
        return v;
    }
    return parent[v]=find_set(parent[v]);
}
void union_sets(int a,int b){
    a = find_set(a);
    b = find_set(b);
    if(a!=b){
        if(sz[a]<sz[b]){
            swap(a,b);
        }
        parent[b]=a;
        sz[a]+=sz[b];
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<pair<int,pair<int,int>>> edges;
    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        edges.push_back({w,{u,v}});
    }
    sort(edges.begin(),edges.end());
    //* now accessing according to the edges
    for(int i=1;i<=n;i++) make_set(i);
    int total_cost = 0;
    for(auto &edge: edges){
        int cost = edge.first;
        int u,v;
        u = edge.second.first;
        v = edge.second.second;
        if(find_set(u)==find_set(v)){
            continue;
        }else{
            union_sets(u,v);
            total_cost+= cost;
            cout<<u<<" "<<v<<endl;
        }
    }
    cout<<total_cost<<endl;
    return 0;
}