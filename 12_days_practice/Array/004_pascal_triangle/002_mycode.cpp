#include"bits/stdc++.h"

using namespace std;
long long int callPascal(long long int i,long long int j){
    if(j==0 || j==i){
        return 1;
    }else{
        return callPascal(i-1,j-1)+callPascal(i-1,j);
    }
}
vector<vector<long long int>> printPascal(int n){
    vector<vector<long long int>> triangle;
    for(int i=0;i<n;i++){
        vector<long long int> temp;
        for(int j=0;j<=i;j++){
            temp.push_back(callPascal((long long int) i,(long long int)j));
        }
        triangle.push_back(temp);
    }
    return triangle;
}
int main(){
    int n=5;
    vector<vector<long long int>> triangle=printPascal(n);
    for(auto i: triangle){
        for(auto j: i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}