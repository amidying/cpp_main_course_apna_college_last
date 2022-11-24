#include"bits/stdc++.h"
#include<set>
using namespace std;
// remember the rules of set and multiset
// set can't contain duplicates
// multiset can contain duplicates
//! ordered set
/*
int main()
{
    set<int> s;
    multiset<int> ms;
    s.insert(1);   
    s.insert(2);   
    s.insert(3);   
    s.insert(4);
    for(auto i: s){
        cout<<i<<" "; 
    }   
    cout<<endl;
    cout<<s.size()<<endl;
    s.erase(2);
    for(auto i: s){
        cout<<i<<" ";
    }
    cout<<endl;
    ms.insert(1);
    ms.insert(2);
    ms.insert(2);
    ms.insert(2);
    ms.insert(3);
    for(auto i: ms)
        cout<<i<<" ";
    // ms.erase(2);
    cout<<endl;
    for(auto i: ms){
        cout<<i<<" ";
    }
    //! do delete only one duplicate element use find method
    ms.erase(ms.find(2));
    cout<<endl;
    for(auto i:ms)
    {
        cout<<i<<" ";
    }cout<<endl;
    return 0;
}
*/
//! unordered set
int main(){
    unordered_set<int> us;
    us.insert(2);
    us.insert(1);
    us.insert(45);
    for(auto i: us){
        cout<<i<<" ";
    }
    cout<<endl;
    us.erase(2);
    us.erase(us.begin());
    for(auto i: us){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}