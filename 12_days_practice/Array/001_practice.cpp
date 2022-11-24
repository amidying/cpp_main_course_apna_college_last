// #include "bits/stdc++.h"

// using namespace std;
// vector<int> twoSum(vector<int> &nums,int target)
// {
//     vector<int> ret;
//     int size = nums.size();
//     for(int i=0;i<size-1;i++)
//     {
//         for(int j=i+1;j<size-1;j++)
//         {
//             if(nums[i]+nums[j]==target)
//             {
//                 ret.push_back(i);
//                 ret.push_back(j);
//                 return ret;
//             }
//         }
//     }
//     return ret;
// }
// int main(){
//     vector<int> nums = {1,2,3,4};
//     int target = 7;
//     vector<int> ans = twoSum(nums,target);
//     for(auto &i: ans)
//     {
//         cout<<i<<" ";
//     }cout<<endl;
//     return 0;
// }
// #include"bits/stdc++.h"
// using namespace std;

// vector<int> twoSum(vector<int> &nums,int target)
// {
//     vector<int> ret;
//     int size = nums.size();
//     for(int i=0;i<size-1;i++)
//     {
//         for(int j= i+1;j<size-1;j++)
//         {
//             if(nums[i]+nums[j]==target)
//             {
//                 ret.push_back(i);
//                 ret.push_back(j);
//                 return ret;
//             }
//         }
//     }
//     return ret;
// }

// int main(){
//     vector<int> nums = {1,2,3,4,5,6,7,8,9};
//     int target = 14;
//     vector<int> ans = twoSum(nums,target);
//     for(auto i: ans)
//     {
//         cout<<i<<" ";
//     }cout<<endl;
//     return 0;
// }


// #include"bits/stdc++.h"
// using namespace std;

// void merge(int arr[],int l,int mid,int e)
// {
//     int n1,n2;
//     n1 = (mid-l+1);
//     n2 = (e-mid);
//     int a[n1];
//     int b[n2];
//     for(int i=0;i<n1;i++)
//     {
//         a[i]=arr[l+i];
//     }
//     for(int i=0;i<n2;i++){
//         b[i]=arr[mid+i+1];
//     }
//     int i=0,j=0,k=l;
//     while(i<n1 && j<n2)
//     {
//         if(a[i]<b[j])
//         {
//             arr[k]=a[i];
//             i++;
//             k++;
//         }else{
//             arr[k]=b[j];
//             k++;
//             j++;
//         }
//     }
//     while(i<n1)
//     {
//         arr[k]=a[i];
//         i++;k++;
//     }
//     while(j<n2)
//     {
//         arr[k]=b[j];
//         j++;k++;
//     }
    
// }
// void mergeSort(int arr[],int l,int e)
// {
//     if(l<e)
//     {
//         int mid = (l+e)/2;
//         mergeSort(arr,l,mid);
//         mergeSort(arr,mid+1,e);
//         merge(arr,l,mid,e);

//     }
// }

// int main(){
//     int arr[]={7,6,5,4,3,2,1};
//     int size = sizeof(arr)/sizeof(int);
//     mergeSort(arr,0,size-1);
//     for(auto i: arr)
//     {
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

//* buy and sell problem
// #include"bits/stdc++.h"
// using namespace std;

// int max_profit(int price[],int n)
// {
//     int buy = price[0],max_profit=0;
//     for(int i=0;i<n;i++)
//     {
//         if(buy>price[i])
//         {
//             buy = price[i];
//         }else if(price[i]-buy>max_profit)
//         {
//             max_profit = price[i]-buy;
//         }
//     }
//     return max_profit;
// }
// int main(){
//     int arr[]={1,4,25,4,6,7,87};
//     int s = sizeof(arr)/sizeof(int);
//     cout<<max_profit(arr,s)<<endl;
//     return 0;
// }

// #include"bits/stdc++.h"
// using namespace std;
// int factorial(int n)
// {
//     if(n==0 || n==1)
//     {
//         return 1;
//     }
//     return n*factorial(n-1);
// }
// int nCr(int n,int r)
// {
//     int nfac =factorial(n);
//     int rfac = factorial(r);
//     return (nfac/(rfac*factorial(n-r)));
// }
// int main(){
//     int n = 5;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<=i;j++)
//         {
//             cout<<nCr(i,j)<<" ";
//         }cout<<endl;
//     }
//     return 0;
// }


// #include"bits/stdc++.h"
// using namespace std;
// int factorial(int n)
// {
//     if(n==0 || n==1)
//     {
//         return 1;
//     }
//     return (n*factorial(n-1));
// }
// int nCr(int n,int r)
// {
//     int nfac = factorial(n);
//     int rfac = factorial(r);
//     int nrfac = factorial(n-r);
//     return (nfac/(rfac*nrfac));
// }
// int main(){
//     int n = 5;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<=i;j++)
//         {
//             cout<<nCr(i,j)<<" ";
//         }cout<<endl;
//     }
//     return 0;
// }


//* single number occarance
// #include"bits/stdc++.h"
// using namespace std;
// int singleOccurance(vector<int> &a)
// {
//     int xorsum = 0;
//     int n = a.size();
//     for(int i=0;i<n;i++)
//     {
//         xorsum = xorsum^a[i];
//     }
//     return xorsum;
// }
// int main(){
//     vector<int> a ={1,2,3,1,2,3,4};
//     cout<<singleOccurance(a)<<endl;
//     return 0;
// }


// //* find duplicates
// #include"bits/stdc++.h"
// using namespace std;
// bool duplicate(vector<int> &a)
// {
//     int n = a.size();
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             if(a[i]==a[j]){
//                 return true;
//             }
//         }
//     }
//     return false;
// }

// int main(){
//     vector<int> a ={1,2,3,4,5,67,7,1};
//     cout<<duplicate(a)<<endl;
//     return 0;
// }

#include"bits/stdc++.h"
using namespace std;
int findMajorityElement(int arr[],int n)
{
    for(int i=0;i<n;i++){
        int maxCount = 0;
        for(int j=0;j<n;j++){
            if(arr[j]==arr[i]){
                maxCount++;
            }
        }
        if(maxCount>n/2){
            return arr[i];
        }
    }
    return -1;
}
int main(){
    int arr[]={3,2,3,9,2,2,3,3,3};
    // cout<<findMajorityElement(arr,5)<<endl;
    cout<<findMajorityElement(arr,5)<<endl;
    return 0;
}