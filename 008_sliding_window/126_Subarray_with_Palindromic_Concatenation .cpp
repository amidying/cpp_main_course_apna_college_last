// #include"bits/stdc++.h"
#include<iostream>
#include<vector>
#include<climits>
#include<cmath>
using namespace std;

bool isPalindrom(int n){
    int temp = n,number = 0;
    while(temp>0){
        number = number*10+temp%10;
        temp = temp/10;
    }
    if(number==n){
        return true;
    }
    return false;
}
//* we are return the initial position of the array
int findPalindromicSubarray(vector<int> arr,int k){
    int num=0;
    for(int i=0;i<k;i++){
        num = num*10+arr[i];
    }
    if(isPalindrom(num)){
        return 0;
    }
    for(int j=k;j<arr.size();j++){
        // concatination and subtraction in the same line
        num = (num % (int)pow(10,k-1))*10+arr[j];
        if(isPalindrom(num)){
            return j-k+1;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr = {2,3,5,1,1,5};
    int k = 4;   
    int ans = findPalindromicSubarray(arr,k);
    if(ans == -1){
        cout<<"The subarray doesn't exist"<<endl;
    }else{
        for(int i=ans;i<ans+k;i++){
            cout<<arr[i]<<" ";
        }
    }cout<<endl;
    return 0;
}