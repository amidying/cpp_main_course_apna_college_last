#include <iostream>
#include<vector>

using namespace std;
vector<pair<int,int>> twoSum(vector<int>& arr, int target, int n)
{    
    vector<pair<int,int>> ans;
	for(int i=0;i<n;i++){
        for(int j=i+1;j<=n;j++){
            if(arr[i]+arr[j]==target){
                ans.push_back(make_pair(i,j));
                break;
            }
        }
    }
    ans.push_back(make_pair(-1,-1));
    return ans;
}
int main(){
    vector<int> arr={1,2,3,4,5};
    int target = 9;
    vector<pair<int,int>> ans;
    ans = twoSum(arr,target,5);
    cout<<ans[0].first<<" "<<ans[0].second<<endl;
    return 0;
}