// ! aditiya varma yt channel
#include <iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
// * using O(nsq)
void getNLR(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                cout<<arr[j];
                break;
            }else{
                continue;
            }
        }
    }
}
//! following code with some issue
void getNearestLargestRight(int arr[],int n){
    vector<int> ans;
    stack<int> s;
    for(int i=n-1;i>=0;i--){
        if(s.empty()){
            ans.push_back(-1);
        }
        else if(!s.empty() && s.top()>arr[i]){
            ans.push_back(arr[i]);
        }
        else if(!s.empty() && s.top() <= arr[i]){
            while(s.size()!=0 && s.top() <= arr[i]){
                s.pop();
            }
            if(s.size()==0){
                ans.push_back(-1);
            }else{
                ans.push_back(arr[i]);
            }
        }
        s.push(arr[i]);
    }
    reverse(ans.begin(),ans.end());
    for(auto i: ans){
        cout<<i<<" ";
    }
}
int main(){
    int arr[4]={1,3,2,4};
    // getNearestLargestRight(arr,4);
    getNLR(arr,4);
    return 0;
}

// ? 1  3 2 4 problem
