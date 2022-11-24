#include"bits/stdc++.h"
using namespace std;
#define vi vector<int>
#define vii vector<vector<int>> 
#define rep(i,a,b) for(int i=a;i<b;i++)

const int N = 1e5+2, MOD = 1e9+7;

vector<vector<int>> ADJ(N);
//! error in the adjacent list code.. will solve tomorrow
int main()
{
    int n,m;//n = # nodes m= # edges
    cin>>n>>m;
    //* creat a matrix for taking the input
    vii adjm(n+1,vi(n+1,0));//* nXn matrix initialized with 0
    rep(i,0,m){
        int x,y;
        cin>>x>>y;
        adjm[x][y]=1;
        adjm[y][x]=1;
    }
    cout<<"adjacency matrix"<<endl;

    rep(i,1,n+1){
        rep(j,1,n+1){
            cout<<adjm[i][j]<<" ";
        }cout<<endl;
    }
    cout<<endl;
    //* checking if two nodes have an edge
    if(adjm[3][7]){
        cout<<"there is an edge.."<<endl;
    }
    if(adjm[7][1]){
        cout<<"there is an edge.."<<endl;
    }else{
        cout<<"No edge.."<<endl;
    }
    //* adjacency list -------------------------------
    cin>>n>>m;
    rep(i,0,m){
        int x,y;
        cin>>x>>y;
        ADJ[x].push_back(y);
        ADJ[y].push_back(x);
    }
    cout<<"-------------------------------"<<endl;
    vector<int> :: iterator it;
    rep(i,1,n+1){
        cout<<i<<"->";
        for(it = ADJ.begin();it!=ADJ.end();it++){
            cout<<*it<<" ";//* it is a pointer so dereference it
        }
        cout<<endl;
    }
    return 0;
}