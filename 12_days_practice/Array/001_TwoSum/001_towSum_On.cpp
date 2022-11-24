#include <iostream>
#include<vector>
#include<unordered_map>
using namespace std;
vector<int> twoSum(vector<int>&nums,int target){
    vector<int> ret;
    int size = nums.size();
    int diff;
    unordered_map<int,int> m;
    for(int i=0;i<size;i++){
        diff = target-nums[i];
        if(m.find(diff)!=m.end() && m.find(diff)->second !=i){
            ret.push_back(i);
            ret.push_back(m.find(diff)->second);
            return ret;
        }
        m[nums[i]]=i;
    }
    return ret;
}
int main(){
    vector<int> v={2,7,11,15};
    int target = 9;
    vector<int> ans=twoSum(v,target);
    cout<<v[0]<<" "<<v[1]<<endl;
    return 0;
}