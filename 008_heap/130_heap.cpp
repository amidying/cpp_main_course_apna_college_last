#include"bits/stdc++.h"
using namespace std;
//! important snippets
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first 
#define ss second 
#define setBits(x) builtin_popcount(x)
//! max heap
int main()
{
    //? MaxHeap
    priority_queue<int,vector<int>> pq;
    pq.push(2);
    pq.push(3);
    pq.push(1);
    cout<<pq.top()<<endl;
    //* pop doesn't return any value
    pq.pop();
    cout<<pq.top()<<endl;
    //* minHeap
    priority_queue<int,vector<int>,greater<int>> pqm;
    pqm.push(4);
    pqm.push(3);
    pqm.push(2);
    pqm.push(1);
    cout<<"MIN HEAP\n";
    cout<<pqm.top()<<"\n";
    pqm.pop();
    cout<<pqm.top()<<"\n";
    
    return 0;
}