// #include"bits/stdc++.h"
// using namespace std;

// int main(){
//     int n;cin>>n;
//     int target;cin>>target;
//     vector<int> a(n);
//     for(auto &i: a){
//         cin>>i;
//     }
//     bool found = false;
//     sort(a.begin(),a.end());
//     for(int i=0;i<n;i++){
//         int low=i+1,hi=n-2;
//         while(low<hi){
//             int current = a[i]+a[hi]+a[low];
//             if(current==target){
//                 found = true;
//             }if(current<target){
//                 low++;
//             }else{
//                 hi--;
//             }
//         }
//     }
//     if(found){
//         cout<<"Found"<<endl;
//     }else{
//         cout<<"Not found"<<endl;
//     }
//     return 0;
// }
#include"bits/stdc++.h"
using namespace std;

int main(){
    int n;cin>>n;
    int target;cin>>target;
    vector<int> a(n);
    for(auto &i: a)
        cin>>i;
    bool found = false;
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        int lo=i+1,hi=n-1;
        while(lo<n){
            int current = a[i]+a[lo]+a[hi];
            if(current==target){
                found = true;
            }
            if(current<target){
                lo++;
            }else{
                hi--;
            }
        }
    }
    if(found){
        cout<<1<<endl;
    }else{
        cout<<-1<<endl;
    }
    return 0;
}