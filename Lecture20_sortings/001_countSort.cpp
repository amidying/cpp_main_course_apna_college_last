// #include<iostream>
// using namespace std;

// int max(int a,int b){
// 	if(a>b){return a;}
// 	return b;
// }
// void countSort(int arr[],int n){
// 	int k=arr[0];
// 	for(int i=0;i<n;i++){
// 		k = max(k,arr[i]);
// 	}
// 	int count[n+1]={0};
// 	for(int i=0;i<n;i++){
// 		count[arr[i]]++;
// 	}
// 	for(int i=0;i<=k;i++){
// 		count[i]+=count[i-1];
// 	}
// 	int output[n];
// 	for(int i=n-1;i>=0;i--){
// 		output[--count[arr[i]]]=arr[i];
// 	}
// 	for(int i=0;i<n;i++){arr[i]=output[i];}
// }
// int main()
// {	int n;
// 	cin>>n; 
// 	int arr[n];
// 	for(int i=0;i<n;i++){
// 		cin>>arr[i];
// 	}
// 	countSort(arr,n);
// 	for(int i=0;i<n;i++){
// 		cout<<arr[i]<<" ";
// 	}
// 	return 0;
// }


// #include"bits/stdc++.h"
// using namespace std;
// int max(int a,int b){
// 	if(a>b){return a;}
// 	return b;
// }
// void countSort(int arr[],int n){
// 	int k = arr[0];
// 	for(int i=0;i<n;i++){
// 		k= max(k,arr[i]);
// 	}
// 	int count[10]={0};
// 	for(int i=0;i<n;i++){
// 		count[arr[i]]++;
// 	}
// 	for(int i=1;i<=k;i++){
// 		count[i]+=count[i-1];
// 	}
// 	int output[n]={0};
// 	for(int i=n-1;i>=0;i--){
// 		output[--count[arr[i]]]=arr[i];
// 	}
// 	for(int i=0;i<n;i++){
// 		arr[i]=output[i];
// 	}

// }
// #include"bits/stdc++.h"
// using namespace std;
// int max(int a,int b){
// 	if(a>b)
// 			return a;
// 	return b;
// }
// void countSort(int arr[],int n){
// 	int k=arr[0]; 
// 	for(int i=0;i<n;i++){
// 		k=max(k,arr[i]);
// 	}
// 	int count[10];
// 	for(int i=0;i<n;i++){
// 		count[arr[i]]++;
// 	}
// 	for(int i=0;i<k;i++){
// 		count[i]+=count[i-1];
// 	}
// 	int output[n]={0};
// 	for(int i=n-1;i>=0;i--){
// 		output[--count[arr[i]]]=arr[i]; 
// 	}
// 	for(int i=0;i<n;i++){
// 		arr[i]=output[i];
// 	}
// }
// int main(){
// 	int n;cin>>n; 
// 	int arr[n];
// 	for(int i=0;i<n;i++){
// 		cin>>arr[i];
// 	}
// 	countSort(arr,n);
// 	for(int i=0;i<n;i++){
// 		cout<<arr[i]<<" ";
// 	}
// 	return 0;
// }

// #include"bits/stdc++.h"

// int max(int a,int b){
// 	if(a>b){
// 		return a;
// 	}
// 	return b;
// }
// void countSort(int arr[],int n){
// 	int k=0;
// 	for(int i=0;i<n;i++){
// 		k = max(k,arr[i]);
// 	}
// 	int count[10]={0};
// 	for(int i=0;i<n;i++){
// 		count[arr[i]]++;
// 	}
// 	for(int i=1;i<=k;i++){
// 		count[i]+=count[i-1];
// 	}
// 	int output[n];
// 	for(int i=n-1;i>=0;i--){
// 		output[--count[arr[i]]]=arr[i];
// 	}
// 	for(int i=0;i<n;i++){
// 		arr[i]=output[i];
// 	}
// }
// int main(){
// 	int arr[5]={5,4,3,2,1};
// 	countSort(arr,5);
// 	for(int i=0;i<5;i++){
// 		std::cout<<arr[i]<<" ";
// 	}
// 	return 0;
// }

// #include"bits/stdc++.h"
// int max(int a,int b){
// 	if(a>b){
// 		return a;
// 	}
// 	return b;
// }
// void countSort(int arr[],int n){
// 	int k =0;
// 	for(int i=0;i<n;i++){
// 		k = max(k,arr[i]);
// 	}
// 	int count[10]={0};
// 	for(int i=0;i<n;i++){
// 		count[arr[i]]++;
// 	}
// 	for(int i=1;i<=k;i++){
// 		count[i]+=count[i-1];
// 	}
// 	int output[n];
// 	for(int i=n-1;i>=0;i--){
// 		output[--count[arr[i]]]=arr[i];
// 	}
// 	for(int i=0;i<n;i++){
// 		arr[i]=output[i];
// 	}
// }
// int main(){
// 	int arr[6]={5,4,3,2,4,1};
// 	countSort(arr,6);
// 	for(int i=0;i<6;i++){
// 		std::cout<<arr[i]<<" ";
// 	}
// 	return 0;
// }

#include<iostream>

int max(int a,int b){
	if(a>b){return a;}return b;
}
void countSort(int arr[],int n){
	int k =0;
	for(int i=0;i<n;i++){
		k = max(k,arr[i]);
	}

	int count[10]={0};
	for(int i=0;i<n;i++){
		count[arr[i]]++;
	}	
	for(int i=1;i<=k;i++){
		count[i]+=count[i-1];
	}
	int output[n];
	for(int i=n-1;i>=0;i--){
		output[--count[arr[i]]]=arr[i];
	}
	for(int i=0;i<n;i++){
		arr[i]=output[i];
	}
}
int main(){
	int n;std::cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		std::cin>>arr[i];
	}
	countSort(arr,n);
	for(int i=0;i<n;i++){
		std::cout<<arr[i]<<" ";
	}
	return 0;
}
