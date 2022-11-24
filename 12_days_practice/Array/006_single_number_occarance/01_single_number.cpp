#include <bits/stdc++.h> 
using namespace std;


int occursOnce(vector<int> &a, int n){
	// Write your code here.
	int xorsum = 0;
    for(int i=0;i<n;i++){
        xorsum = xorsum^a[i];
    }
    return xorsum;
}
int main(){
    vector<int> arr={1,2,3,4,1,2,3};
    cout<<occursOnce(arr,7)<<endl;
    return 0;
}