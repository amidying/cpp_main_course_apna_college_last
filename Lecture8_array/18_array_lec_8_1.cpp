#include<iostream>
#include<climits>
using namespace std;

int max(int a,int b){
    if(a>b)
        return a;
    return b;
}
int min(int a,int b){
    if(a<b)
        return a;
    return b;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maximum = INT_MIN;
    int minimum = INT_MAX;
    cout<<maximum<<" "<<minimum<<endl;
    for(int i=0;i<n;i++){
        if(arr[i]>maximum){
            maximum=arr[i];
        }
        if(arr[i]<minimum){
            minimum=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"The maximum is: "<<maximum<<endl;
    cout<<"The minimum is: "<<minimum<<endl;

    int a,b;
    cout<<"Enter a and b: \n";
    cin>>a>>b;
    cout<<"Max: "<<max(a,b)<<"Min "<<min(a,b)<<endl;
    return 0;
}