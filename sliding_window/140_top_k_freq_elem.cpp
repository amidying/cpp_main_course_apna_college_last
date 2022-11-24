#include"bits/stdc++.h"
using namespace std;
//* hasing
#define vii vector<pair<int,int>>
#define pii pair<int,int>
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }   
    map<int,int> freq;
    for(int i=0;i<n;i++){
        int presentSize = freq.size();
        if(freq[a[i]]==0 && presentSize==k){
            break;
        }
        freq[a[i]]++;
    }
    //* vector to print the answer
    vii ans;
    map<int,int>:: iterator it;
    for(it=freq.begin();it!=freq.end();it++){
        if(it->second !=0 ){
            pii p;
            p.first = it->second;
            p.second = it->first;
            ans.push_back(p);
        }
    }
    //! still can't figure the problm while running the code
    sort(ans.begin(),ans.end(), greater<pii>());
    vii :: iterator it1;
    for(it1=ans.begin();it1!=ans.end();it++){
        cout<<it1->second<<" "<<it1->first<<endl;
    }
    return 0;
}