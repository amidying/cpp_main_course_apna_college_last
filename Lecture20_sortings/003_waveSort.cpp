// #include<iostream>
// using namespace std;
// void swap(int arr[],int i,int j){
// 	int temp = arr[i];arr[i]=arr[j];arr[j]=temp;
// }
// void waveSort(int arr[],int n){
// 	for(int i=1;i<n;i+=2){
// 		if(arr[i]>arr[i-1]){
// 			swap(arr,i,i-1);
// 		}if(arr[i]>arr[i+1] && i<=n-2){
// 			swap(arr,i,i+1);
// 		}
// 	}
// }
// int main(){
// 	int arr[]={5,4,3,2,1};
// 	waveSort(arr,5);
// 	for(int i=0;i<5;i++){cout<<arr[i]<<" ";}
// 	return 0;
// }

// #include<iostream>

// using namespace std;
// void swap(int arr[],int i,int j){
// 	int temp=arr[i];arr[i]=arr[j];arr[j]=temp;
// }
// void waveSort(int arr[],int n){
// 	for(int i=1;i<n;i+=2){
// 		if(arr[i]>arr[i-1]){
// 			swap(arr,i,i-1);
// 		}if(arr[i]>arr[i+1]){
// 			swap(arr,i,i+1);
// 		}
// 	}
// }
// int main(){
// 	int arr[]={5,4,3,2,1};
// 	waveSort(arr,5);
// 	for(int i=0;i<5;i++){
// 		cout<<arr[i]<<" ";
// 	}
// 	return 0;

// }

// #include <iostream>
// // using namespace std;
// void swap(int arr[],int i,int j){
// 	int temp =arr[i];
// 	arr[i]=arr[j];
// 	arr[j]=temp;
// }
// void waveSort(int arr[],int n){
// 	for(int i=1;i<n;i+=2){
// 		if(arr[i]>arr[i-1]){
// 			swap(arr,i,i-1);
// 		}
// 		if(arr[i>arr[i+1]]){
// 			swap(arr,i,i+1);
// 		}
// 	}
// }
// int main(){
// 	int arr[5]={5,4,3,2,1};
// 	waveSort(arr,5);
// 	for(int i=0;i<5;i++){
// 		std::cout<<arr[i]<<" ";
// 	}
// 	return 0;
// }

// #include<iostream>
// void swap(int arr[],int i,int j){
// 	int temp = arr[i];
// 	arr[i]=arr[j];
// 	arr[j]=temp;
// }

// void waveSort(int arr[],int n){
// 	for(int i=1;i<n;i+=2){
// 		if(arr[i]>arr[i-1]){
// 			swap(arr,i,i-1);
// 		}
// 		if(arr[i]>arr[i+1] && i<=n-2){
// 			swap(arr,i,i+1);
// 		}
// 	}
// }
// void printArr(int arr[],int n){
// 	for(int i=0;i<n;i++){
// 		std::cout<<arr[i]<<" ";
// 	}
// }
// int main(){
// 	int n;std::cin>>n;
// 	int arr[n];
// 	for(int i=0;i<n;i++){
// 		std::cin>>arr[i];
// 	}
// 	waveSort(arr,n);
// 	printArr(arr,n);
// 	return 0;
// }

#include<iostream>
void swap(int arr[],int i,int j){
	int temp=arr[i];arr[i]=arr[j];arr[j]=temp;
}
void waveSort(int arr[],int n){
	for(int i=1;i<n;i++){
		if(arr[i]>arr[i-1]){
			swap(arr,i,i-1);
		}
		if(arr[i]>arr[i+1] && i<n-2){
			swap(arr,i,i+1);
		}
	}
}
int main(){
	int arr[]={1,2,3,4,5};waveSort(arr,5);
	for(int i=0;i<5;i++){std::cout<<arr[i]<<" ";}
	return 0;
}