//coing denomenation problem
// #include"bits/stdc++.h"
// using namespace std;

// int main()
// {
//     cout<<"Enter total number of notes: "<<endl;
//     int n;
//     cin>>n;
//     vector<int> coin(n);
//     for(int i=0;i<n;i++){
//         cout<<"Enter "<<i<<"th"<<"note"<<endl;
//         cin>>coin[i];
//     }   
//     cout<<"Enter X"<<endl;
//     int x;
//     cin>>x;
//     int ans  = 0;
//     sort(coin.begin(),coin.end(),greater<int>());
//     for(int i=0;i<n;i++){
//         ans += x/coin[i];
//         x -= x/coin[i]*coin[i];
//     }
//     cout<<ans<<endl;
//     return 0;
// }

//* activity selection problem greedy algorithm
#include"bits/stdc++.h"
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int main()
{
    int n;
    cin>>n;
    vector<vector<int>> a(n);
    for(int i=0;i<n;i++){
        int start,end;
        cin>>start>>end;
        a.push_back({start,end});
    }
    sort(a.begin(),a.end(),[&](vector<int> &a,vector<int> &b){
        return a[1]<b[1];
    });
    int take = 1;
    int end = a[0][1];
    for(int i=0;i<n;i++){
        if(a[i][0]>=end){
            take++;
            end = a[i][1];
        }   
    }
    cout<<take<<endl;
    return 0;
}