#include"bits/stdc++.h"
using namespace std;
int max(int a,int b){
    if(a>b){
        return a;
    }
    return b;
}
int richestMan(vector<vector<int>> money,int m,int n){
    vector<int> amounts;
    for(auto &i: money){
        int sum = 0;
        for(auto &j: i){
            sum += j;
        }
        amounts.push_back(sum);
    }
    int k = amounts[0];
    for(auto &i: amounts){
        k = max(k,i);
    }
    return k;
}
int main(){
    vector<vector<int>> amounts = {{2,8,7},{7,1,3},{1,9,5}};
    cout<<richestMan(amounts,3,3)<<endl;
    return 0;
}