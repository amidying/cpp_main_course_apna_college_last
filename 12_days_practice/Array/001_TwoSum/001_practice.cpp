// // #include <iostream>
// #include"bits/stdc++.h"
// using namespace std;
// vector<int> twoSum(vector<int> & nums,int target){
//     vector<int> ret;
//     int size = nums.size();
//     unordered_map<int,int> m;
//     int diff;
//     for(int i=0;i<size;i++){
//         diff = target-nums[i];
//         if(m.find(diff)!=m.end() && m.find(diff)->second!=i){
//             ret.push_back(i);
//             ret.push_back(m.find(diff)->second);
//             return ret;
//         }
//         m[nums[i]]=i;

//     }
//     return ret;
// }
// int main(){
    
//     return 0;
// }

// #include <iostream>
// #include<vector>
// #include<unordered_map>
// using namespace std;
// vector<int> twoSum4(vector<int> &nums,int target);
// vector<int> twoSum(vector<int>&nums,int target){
//     vector<int> ret;
//     int size = nums.size();
//     int diff;
//     unordered_map<int,int> m;
//     for(int i=0;i<size;i++){
//         diff = target-nums[i];
//         if(m.find(diff)!=m.end() && m.find(diff)->second !=i){
//             ret.push_back(i);
//             ret.push_back(m.find(diff)->second);
//             return ret;
//         }
//         m[nums[i]]=i;
//     }
//     return ret;
// }
// int main(){
//     vector<int> v={2,7,11,15};
//     int target = 9;
//     // vector<int> ans=twoSum(v,target);
//     vector<int> ans = twoSum4(v,target);
//     cout<<ans[0]<<" "<<ans[1]<<endl;
//     return 0;
// }

// vector<int> twoSum2(vector<int>&nums,int target){
//     vector<int> ret;
//     unordered_map<int,int> m;
//     int diff;
//     int size = nums.size();
//     for(int i=0;i<size;i++){
//         diff = target-nums[i];
//         if(m.find(diff)!=m.end() and m.find(diff)->second!=i){
//             ret.push_back(i);
//             ret.push_back(m.find(diff)->second);
//             return ret;
//         }
//         m[nums[i]]=i;
//     }
//     return ret;
// }

// // vector<int> twoSum(vector<int> &nums,int target){
// //     vector<int> ans;
// //     unordered_map<int,int> m;
// //     int diff;
// //     int size=nums.size();

// //     for(int i=0;i<size;i++){
// //         diff = target - nums[i];
// //         if(m.find(diff)!=m.end() and m.find(diff)->second!=i){
// //             ans.push_back(i);
// //             ans.push_back(m.find(diff)->second);
// //             return ans;
// //         }
// //         m[nums[i]]=i;
// //     }
// //     return ans;
// // }

// vector<int> twosum(vector<int>&nums,int target){
//     vector<int> v;
//     unordered_map<int,int> m;
//     int diff;
//     int size;
//     for(int i=0;i<size;i++){
//         diff = target - nums[i];
//         if(m.find(diff)!=m.end() && m.find(diff)->second!=i){
//             v.push_back(i);
//             v.push_back(m.find(diff)->second);
//             return v;
//         }
//         m[nums[i]]=i;
//     }
//     return v;
// }

// vector<int> twoSum4(vector<int> &nums,int target){
//     vector<int> ret;
//     unordered_map<int,int> m;
//     int diff;
//     int size=nums.size();
//     for(int i=0;i<size;i++){
//         diff = target-nums[i];
//         if(m.find(diff)!=m.end() && m.find(diff)->second!=i){
//             ret.push_back(i);
//             ret.push_back(m.find(diff)->second);
//             return ret;
//         }
//         m[nums[i]]= i;
//     }
//     return ret;
// }

#include"bits/stdc++.h"

using namespace std;
vector<pair<int,int>> twoSum(vector<int>&arr,int target,int n)
{
    unordered_map<int,int> hashMap;
    vector<pair<int,int>> ans;

    for(int i=0;i<n;i++)
    {
        hashMap [arr[i]]++;
        if(target-arr[i]==arr[i])
        {
            if(hashMap[arr[i]]>i)
            {
                ans.push_back({arr[i],arr[i]});
                hashMap[arr[i]]-=2;
            }
        }
        else
        {
            if(hashMap[arr[i]]>0 && hashMap[target-arr[i]]>0)
            {
                hashMap[arr[i]]-=1;
                hashMap[target-arr[i]]-=1;
            }
        }
    }
    if(ans.size()==0)
    {
        ans.push_back({-1,-1});
    }
    return ans;
}

int main(){
    vector<int> arr={1,2,3,4,5};
    int target = 5;
    vector<pair<int,int>> ans;
    ans = twoSum(arr,5,5);
    for(int i=0;i<5;i++){
        cout<<ans[i].first<<" "<<ans[i].second<<endl;
    }
    return 0;
}