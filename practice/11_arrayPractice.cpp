#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: \n";
    cin>>n;
    cout<<"Enter the array: \n";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maximum = INT_MIN;
    int minimum = INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]>maximum){maximum=arr[i];}
        if(arr[i]<minimum){minimum=arr[i];}
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"The maximum: "<<maximum<<endl;
    cout<<"The minimum: "<<minimum<<endl;
    return 0;
}