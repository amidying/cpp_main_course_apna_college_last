#include <iostream>
#include<vector>
using namespace std;
vector<int> merge(int arr1[],int n1,int arr2[],int n2){
    vector<int> arr;
    for(int i=0;i<n1+n2;i++){
        arr[i]=0;
    }
    int i=0,j=0;
    while(i<n1 && j<n2){
        if(arr1[i]<arr[j]){
            // arr[k]=arr1[i];
            arr.push_back(arr1[i]);
            i++;
            // k++;
        }else{
            // arr[k]=arr2[j];
            arr.push_back(arr2[j]);
            j++;
            // k++;
        }
    }
    while(i<n1){
            arr.push_back(arr1[i]);
        // arr[k]=arr1[i];
        i++;
        // k++;
    }
    while(j<n2){
            arr.push_back(arr2[j]);
        // arr[k]=arr2[j];
        j++;
        // k++;
    }
    return arr;
}
int main(){
    int arr1[]={3,6,9};
    int arr2[]={4,5,7};
    vector<int> ans = merge(arr1,3,arr2,3);
    for(auto &i: ans){
        cout<<i<<" ";
    }
    return 0;
}