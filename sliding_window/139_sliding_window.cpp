#include"bits/stdc++.h"
using namespace std;
// min sum of an array of size n
// [-2,10,1,3,2,-1,4,5]

int main(){
    int n,k;cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int s= 0,ans = INT_MAX;
    for(int i=0;i<k;i++){
        s += a[i];
    }
    ans = min(ans,s);
    for(int i=1;i<n-k+1;i++){
        s -= a[i-1];
        s+= a[i+k-1];
        ans = min(ans,s);
    }
    cout<<ans<<endl;
}
// int main()
// {
//     int n,k;cin>>n>>k;
//     vector<int> a(n);
//     for(int i=0;i<n;i++){
//         cin>>a[i];

//     }
//     stack<int> sums;
//     int sum = 0;
//     for(int i=0;i<k;i++){
//         sum += a[i];
//     }
//     // sums.push(sum);
//     int temp = INT_MAX;
//     for(int i=k;i<n;i++){
//         temp = min(temp,sum);
//         sum = sum-a[k-i]+a[i];
//     }
//     cout<<sum<<endl;
//     return 0;
// }