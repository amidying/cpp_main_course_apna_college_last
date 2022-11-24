// #include <iostream>
// using namespace std;
// int max(int a,int b){
//     if(a>b){
//         return a;
//     }
//     return b;
// }
// void findMajorityElement(int arr[],int n){
//     // int tempArr[n];
//     int k = 0;
//     for(int i=0;i<n;i++){
//         k = max(k,arr[i]);
//     }
//     int temparr[k];
//     for(int i=0;i<k;i++){
//         temparr[i]=0;
//     }
//     for(int i=0;i<n;i++){
//         temparr[arr[i]]++;
//     }
//     int j = temparr[0];
//     for(int i=0;i<k;i++){
//         j = max(j,temparr[i]);
//     }
//     // for(int i=0;i<k;i++){
//     //     if(j==temparr[i]);
//     //     return i;
//     // }
//     // return -1;
//     for(int i=0;i<k;i++){
//         cout<<temparr[i]<<" ";
//     }
    
// }
// int main(){
//     int arr[]={2,3,9,2,2};
//     // cout<<findMajorityElement(arr,5)<<endl;
//     findMajorityElement(arr,5);
//     return 0;
// }

#include"bits/stdc++.h"
using namespace std;

int findMajorityElement(int arr[],int n);
int findMajorityElement2(int arr[],int n);

int main(){
    int arr[]={2,3,9,2,2};
    cout<<findMajorityElement(arr,5)<<endl;
    return 0;
}

int findMajorityElement(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int maxCount = 0;
        for(int j=0;j<n;j++){
            if(arr[j]==arr[i])
            {
                maxCount++;
            }
        }
        if(maxCount>n/2){
            return arr[i];
        }
    }
    return -1;
}

int findMajorityElement2(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int countMax = 0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                countMax++;
            }
        }
        if(countMax>n/2)
        {
            return arr[i];
        }
    }
    return -1;
}