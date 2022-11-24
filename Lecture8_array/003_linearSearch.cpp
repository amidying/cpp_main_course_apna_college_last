#include"bits/stdc++.h"
using namespace std;

void linearSearch(int arr[],int n,int key){
	for(int i=0;i<n;i++){
		if(arr[i]==key){
			cout<<i<<endl;
		}else{
			cout<<"-1"<<endl;
		}
	}
}

int main(){
	int n;
	cin>>n;
	int key;
	cin>>key;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	linearSearch(arr,n,key);
}