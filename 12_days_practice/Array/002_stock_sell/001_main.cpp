// ? Stock price sell problem

// #include <iostream>
#include"bits/stdc++.h"
using namespace std;

int stockSell(vector<int> &price){
    
    // new approach
    int size = price.size();
    int buy = price[0];
    int maxprofit =0;
    for(int i=1;i<size;i++){
        if(buy>price[i]){
            buy=price[i];
        }
        else if(price[i]-buy>maxprofit){
            maxprofit = price[i]-buy;
        }
    }
    return maxprofit;

}
int main(){
    vector<int> arr={7,1,2 ,3,1};
    cout<<stockSell(arr)<<endl;
    return 0;
}
int stockprice2(vector<int> &price){
    int buy=price[0],max_profit = 0;
    for(int i=1;i<price.size();i++){
        if(buy>price[i]){
            buy = price[i];
        }else if(price[i]-buy>max_profit){
            max_profit = price[i]-buy;
        }
    }
    return max_profit;
}
int stockPrice3(vector<int> &price){
    int buy = price[0],max_profit = 0;
    for(int i=1;i,price.size();i++){
        if(buy>price[i]){
            buy = price[i];
        }else if(price[i]-buy>max_profit){
            max_profit = price[i]-buy;
        }

    }
    return max_profit;
}