// #include<iostream>
// using namespace std;
// // void swap(int arr[],int i,int j){
// // 	int temp = arr[i];
// // 	arr[i]=arr[j];
// // 	arr[j]=temp;
// // }
// // void dnfSort(int arr[],int n){
// // 	int low=0,mid=0,high=n-1;
// // 	while(mid<=high){
// // 		if(arr[mid]==0){
// // 			swap(arr,low,mid);
// // 			low++;mid++;
// // 		}else if(arr[mid]==1){
// // 			mid++; 
// // 		}else{
// // 			swap(arr,mid,high);
// // 			high--;
// // 		}
// // 	}
// // }
// void swap(int arr[],int i,int j);
// void dnfSort(int arr[],int n);
// int main(){
// 	int arr[]={0,1,1,2,2,0,2};
// 	dnfSort(arr,sizeof(arr)/sizeof(int));
// 	for(int i=0;i<sizeof(arr)/sizeof(int);i++){
// 		cout<<arr[i]<<" ";
// 	}
// }
// void swap(int arr[],int i,int j){
// 	int temp = arr[i];
// 	arr[i]=arr[j];
// 	arr[j]=temp;
// }
// void dnfSort(int arr[],int n){
// 	int low=0,mid=0,high=n-1;
// 	while(mid<=high){
// 		if(arr[mid]==0){
// 			swap(arr,low,mid);
// 			low++;mid++;
// 		}else if(arr[mid]==1){
// 			mid++;
// 		}else{
// 			swap(arr,mid,high);
// 			high--;
// 		}
// 	}
// }

// #include<iostream>
// using namespace std;

// void swap(int arr[],int i,int j){
// 	int temp=arr[i];arr[i]=arr[j];arr[j]=temp;
// }
// void dnfSort(int arr[],int n){
// 	int low=0,mid=0,high=n-1;
// 	for(int i=0;i<n;i++){
// 		if(arr[mid]==0){
// 			swap(arr,low,mid);
// 			low++;mid++;
// 		}else if(arr[mid]==1){
// 			mid++; 
// 		}
// 		else{
// 			swap(arr,mid,high);
// 			high--;
// 		}
// 	}
// }

// int main(){
// 	int arr[]={1,1,2,2,2,0,0,0};
// 	dnfSort(arr,9);
// 	for(int i=0;i<9;i++){
// 		cout<<arr[i]<<" ";
// 	}
// 	return 0;
// }



// #include"bits/stdc++.h"
// void swap(int arr[],int i,int j){
// 	int temp=arr[i];
// 	arr[i]=arr[j];
// 	arr[j]=temp;
// }
// void dnfSort(int arr[],int n){
// 	int low=0,mid=0,high=n-1;
// 	while(mid<=high){
// 		if(arr[mid]==0){
// 			swap(arr,low,mid);
// 			low++;mid++;
// 		}else if(arr[mid]==1){
// 			mid++;
// 		}else{
// 			swap(arr,mid,high);
// 			high--;
// 		}
// 	}
// }
//  int main(){
// 	int arr[]={0,1,2,0,0,2,2,1,1};
// 	dnfSort(arr,sizeof(arr)/sizeof(int));
// 	for(int i=0;i<sizeof(arr)/sizeof(int);i++){
// 		std::cout<<arr[i]<<" ";
// 	}
// 	return 0;
// }

#include<iostream>
void swap(int arr[],int i,int j){
	int temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
}
void dnfSort(int arr[],int n){
	int low=0,mid=0,high=n-1;
	while(mid<=high){
		if(arr[mid]==0){
			swap(arr,low,mid);
			low++;
			mid++;
		}
		else if(arr[mid]==1){
			mid++;
		}else{
			swap(arr,mid,high);
			high--;
		}
	}
}

int main(){
	int arr[]={1,0,2,1,2,2,1,1,0,0,1,0,1};
	dnfSort(arr,sizeof(arr)/sizeof(int));
	for(int i=0;i<sizeof(arr)/sizeof(int);i++){
		std::cout<<arr[i]<<" ";
	}
	return 0;
}