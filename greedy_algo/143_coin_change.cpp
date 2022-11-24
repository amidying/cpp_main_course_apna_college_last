#include"bits/stdc++.h"
using namespace std;


//? demoninations indicates the current notes or coins availabe in the present market
int main()
{
    int n; // * number of notes or coins availabe in the market
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];//* taking the notes
    }
    int x;//* amount we need to sum up
    cin>>x;
    sort(a.begin(),a.end(),greater<int>());// descending order sorting
    // for(auto i: a){
    //     cout<<i<<" ";
    // }
    int ans = 0;
    for(int i=0;i<n;i++){
        ans+= x/a[i];
        x -= x/a[i]*a[i];
    }
    cout<<ans<<endl;
    return 0;
}