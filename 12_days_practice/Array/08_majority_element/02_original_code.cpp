#include <iostream>
using namespace std;
int findMajorityElement(int arr[],int n){
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
    int arr[]={2,3,9,2,2};
    // cout<<findMajorityElement(arr,5)<<endl;
    cout<<findMajorityElement(arr,5)<<endl;
    return 0;
}