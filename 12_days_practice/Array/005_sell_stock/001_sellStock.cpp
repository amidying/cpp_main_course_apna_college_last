// #include <iostream>
#include"bits/stdc++.h"
using namespace std;
int max(int a,int b){
    if(a>b){
        return a;
    }
    return b;
}
int min(int a,int b){
    if(a<b){
        return a;
    }
    return b;
}
int maximumProfit2(vector<int> & price){
    vector<int> ans;
    int size = price.size();
    int minimumPrice = price[0];
    int maximumPrice = price[0];
    for(int i=0;i<size;i++){
        minimumPrice=min(minimumPrice,price[i]);
        maximumPrice = max(maximumPrice,price[i]);
    }
    ans.push_back(minimumPrice);
    ans.push_back(maximumPrice);
    // return (maximumPrice-minimumPrice);
    return ans[1]-ans[0];
}
int maximumProfit(vector<int> & prices){
    int maxProfit = 0;
    int n = prices.size();
    for(int i=0;i<n;i++){
        int buy = prices[i],currMaxProfit = 0;
        for(int j=i+1;j<n;j++){
            currMaxProfit = max(currMaxProfit,(prices[j]-buy));
        }
        maxProfit = max(maxProfit,currMaxProfit);
    }
    return maxProfit;
}
int main(){
    vector<int> price ={2,100,150,120};
    int profit = maximumProfit(price);
    cout<<profit<<endl;
    return 0;
}