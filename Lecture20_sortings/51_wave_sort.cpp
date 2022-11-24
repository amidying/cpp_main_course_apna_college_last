#include<iostream>

using namespace std;
void swap(int arr[],int i,int j){
	int temp =arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
}
void waveSort(int arr[],int n){
	for(int i=1;i<n;i+=2){
		if(arr[i]>arr[i-1]){
			swap(arr,i,i-1);
		}
		if(arr[i]>arr[i+1] && i<=n-2){
			swap(arr,i,i+1);
		}
	}
}
int main(){
	int arr[]={4,5,2,23,3,11,5,6,9};
	waveSort(arr,(sizeof(arr)/sizeof(int))); 
	for(int i=0;i<(sizeof(arr)/sizeof(int));i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}