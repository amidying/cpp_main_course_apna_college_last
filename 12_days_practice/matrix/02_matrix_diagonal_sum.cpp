#include"bits/stdc++.h"
using namespace std;
// return the sum of the diagonal element of the following nXn matrix
/*
[
[1,2,3],
[4,5,6],
[7,8,9]
]
*/
int calcDiag(vector<vector<int>> arr){
    int sum=0;
    int n = arr.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                sum+=arr[i][j];
            }
            if(i+j==n-1 && i!=j){
                sum+=arr[i][j];
            }
        }
    }

    return sum;
}
int main(){
    vector<vector<int>> arr={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    cout<<calcDiag(arr)<<endl;
    return 0;
}