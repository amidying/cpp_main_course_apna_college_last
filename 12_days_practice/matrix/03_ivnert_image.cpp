#include"bits/stdc++.h"
using namespace std;


vector<vector<int>> flipandinveseImage(vector<vector<int>> &A){
    int c = A[0].size();
    for(auto &row: A){
        for(int i=0;i<(c+1)/2;i++){
            int temp = row[i]^1;
            row[i]= row[c-1-i]^1;
            row[c-1-i]= temp;
        }
    }
    return A;
}

int main(){
    vector<vector<int>> arr = {{1,1,0},{1,0,1},{0,0,0}};
    vector<vector<int>> result = flipandinveseImage(arr);
    for(auto i: result){
        for(auto j: i){
            cout<<j<<" ";
        }cout<<endl;
    }
    cout<<endl;
    cout<<(1^1)<<endl;
    cout<<(0^1)<<endl;
    return 0;
}

