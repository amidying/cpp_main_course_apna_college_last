#include"bits/stdc++.h"
using namespace std;


vector<vector<int>> flipimage(vector<vector<int>> &A){
    int c = A[0].size();
    for(auto &row: A){
        for(int i=0;i<(c+1)/2;i++){
            int temp = row[i]^1;
            row[i]= row[c-i-1]^1;
            row[c-i-1]= temp;
        }
    }
    return A;
}
vector<vector<int>> flipiamge2(vector<vector<int>> &A){
    int c = A[0].size();
    for(auto &row: A){
        for(int i=0;i<(c+1)/2;i++){
            int temp = row[i]^1;
            row[i]= row[c-i-1]^1;
            row[c-i-1]= temp;
        }
    }
    return A;
}

int main(){
    vector<vector<int>> arr = {{1,1,0},{1,0,1},{0,0,0}};
    vector<vector<int>> result = flipimage(arr);
    for(auto i: result){
        for(auto j: i){
            cout<<j<<" ";
        }cout<<endl;
    }
    return 0;
}
