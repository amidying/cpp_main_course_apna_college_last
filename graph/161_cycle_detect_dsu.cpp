#include"bits/stdc++.h"
using namespace std;
//! just returning the cycle is present not working properly
const int N = 1e5+10;
vector<int> parent(N);
vector<int> sz(N);

void make_set(int v){
    parent[v]=v;
    sz[v]=1;
}
int find_set(int v){
    if(v==parent[v]){
        return true;
    }
    return parent[v]= find_set(parent[v]);
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
    for(int i=0;i<N;i++){
        make_set(i);
    }   
    //* cycle detection
    int n,m;cin>>n>>m;
    //* adj list
    vector<vector<int>> edges;
    for(int i=0;i<m;i++){
        int u,v;cin>>u>>v;
        edges.push_back({u,v});
    }
    bool cycle = false;
    for(auto i: edges){
        int u = i[0];
        int v = i[1];
        int x = find_set(u);
        int y = find_set(v);
        if(x==1){
            cycle = true;
        }
        else{
            union_sets(u,v);
        }
    }
    if(cycle){
        cout<<"Cycle is present"<<endl;
    }else{
        cout<<"cycle is not present"<<endl;
    }

    return 0;
}