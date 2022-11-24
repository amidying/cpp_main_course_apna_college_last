#include"bits/stdc++.h"
using namespace std;

int maxProfit(vector<int> & prices){
    int n = prices.size();
    vector<vector<int> v(n,vector<int>(2,-1));

    return findMaximumProfit(prices,0,1,1,v);
}
int findMaximumProfit(vector<int> & price,int i,int k,bool buy,vector<vector<int>>&v){
    if(i>=price.size() || k<=0){
        return 0;
    }
    if(v[i][buy]!=-1){
        return v[i][buy];
    }
    if(buy){
        return v[i][buy]=max(-price[i]+findMaximumProfit(price,i+1,k,!buy,v),findMaximumProfit(price,i+1,k,buy,v));
    }
    else{
        return v[i][buy]= max(price[i]+findMaximumProfit(price,i+1,k-1,buy,v),findMaximumProfit(price,i+1,k,buy,v));
    }
}
int main(){
    vector<int> m={6,5,4,3,9};

    return 0;
}