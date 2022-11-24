// #include"bits/stdc++.h"
// using namespace std;

// int main()
// {
//     // map<int,int> m;
//     // m[2]=32;
//     // cout<<m[2]<<endl;
//     // unordered_map<int,int> um;
//     // um[1]=434;
//     // cout<<um[1]<<endl;
//     // count frequency

//     // int n;cin>>n;
//     // vector<int,int> a(n);
//     // for(int i=0;i<n;i++){
//     //     cin>>a[i];
//     // }
//     vector<int,int> a = {3,42,4,5,6,4,2,34,4,2,2,,34};
//     map<int,int> freq;
//     for(int i=0;i<a.size();i++){
//         freq[a[i]]++;
//     }
//     map<int,int> :: iterator i;
//     for(it = freq.begin();it!=freq.end();it++){
//         cout<<it->first<<"->"<<it->second<<endl;
//     }
//     return 0;
// }

// //* frequency 
// #include"bits/stdc++.h"
// using namespace std;

// int main()
// {
//     int n;cin>>n;
//     vector<int> v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }   
//     map<int,int> mp;
//     for(int i=0;i<n;i++){
//         mp[v[i]]++;
//     }
//     map<int,int> :: iterator i;
//     for(i = mp.begin(); i!=mp.end();i++){
//         cout<< i->first<<" "<<i->second<<endl;
//     }

//     return 0;
// }

//* vertical bt
#include"bits/stdc++.h"
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};
void getHorizontalDistance(Node* root,int hdis,map<int,vector<int>> &m){
    if(root==NULL){
        return;
    }
    m[hdis].push_back(root->data);
    getHorizontalDistance(root->left,hdis-1,m);
    getHorizontalDistance(root->right,hdis+1,m);
}
void num_of_subarray_with_sum_zeor(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    map<int,int> cnt;
    int prefixSum = 0;
    for(int i=0;i<n;i++){
        prefixSum += a[i];
        cnt[prefixSum]++;
    }
    int ans = 0;
    map<int,int> :: iterator it;
    for(it = cnt.begin();it!=cnt.end();it++){
        int c = it->second;
        ans += (c*(c-1))/2;
        if(it->first==0){
            ans += it->second;
        }
    }
    cout<<ans<<endl;
}
int main()
{
    Node* root = new Node(10);
    root->left = new Node(7);
    root->right = new Node(4);
    root->left->left = new Node(3);
    root->left->right = new Node(11);
    root->right->left = new Node(14);
    root->right->right = new Node(6);
    map<int,vector<int>> m;
    int hdis = 0;

    getHorizontalDistance(root,hdis,m);

    map<int,vector<int>> :: iterator it;
    for(it=m.begin();it!=m.end();it++){
        for(int i=0;i<(it->second).size();i++){
            cout<<(it->second)[i]<<" ";
        }
        cout<<endl;
    }
    num_of_subarray_with_sum_zeor();
    return 0;
}