// // merge sorting 
// #inlcude"bits/stdc++.h"
// // #inlcude<iostream>
// using namespace std;

// void merge(int arr[],int l,int mid,int r){
// 	int n1,n2;
// 	n1 = mid-l+1;
// 	n2 = r-mid;
// 	int a[n1],b[n2];
// 	for(int i=0;i<n1;i++){
// 		a[i]=arr[l+i];
// 	}
// 	for(int i=0;i<n2;i++){
// 		b[i]=arr[mid+i+1];
// 	}
// 	int i=0,j=0,k=l; 
// 	while(i<n1 && j<n2){
// 		if(a[i]<b[j]){
// 			arr[k]=a[i];
// 			k++;
// 			i++;
// 		}
// 		else{
// 			arr[k]=b[j];
// 			k++;
// 			j++;
// 		}

// 	}
// 	while(i<n1){
// 		arr[k]=a[i];
// 		k++;
// 		i++;
// 	}
// 	while(j<n2){
// 		arr[k]=b[j];
// 		k++;
// 		j++;
// 	}
// }
// void mergeSort(int arr[],l,r){
// 	if(l<r){
// 		int mid =(l+r)/2;
// 		mergeSort(arr,l,mid);
// 		mergeSort(arr,mid+1,r); 
// 		merge(arr,l,mid,r);
// 	}
// }
// int main(){
// 	int n;cin>>n;
// 	int arr[n];
// 	for(int i=0;i<n;i++){
// 		cin>>arr[i];
// 	}
// 	mergeSort(arr,0,n-1);
// 	for(int i=0;i<n;i++){
// 		cout<<arr[i]<<" ";
// 	}
// 	cout<<endl;
// 	return 0;
// }


// quick sorting
// #include"bits/stdc++.h"
// using namespace std;

// void swap(int arr[],int i,int j){
// 	int temp = arr[j];
// 	arr[j]=arr[i];
// 	arr[i]=temp;
// }
// void quickSort(arr [],int l,int r){
// 	int pivot = arr[r];
// 	int i=l-1;
// 	for(int j=l;j<r;j++){
// 		if(arr[j]<pivot){
// 			i++;
// 			swap(arr,i,j);
// 		}
// 	}
// 	swap(arr,i+1,r);
// 	return (i+1);
// }

// int main(){
// 	int n;cin>>n;
// 	int arr[n];
// 	for(int i=0;i<n;i++){
// 		cin>>arr[i];
// 	}
// 	quickSort(arr,0,n-1);
// 	for(int i=0;i<n;i++){
// 		cout<<arr[i]<<" ";
// 	}cout<<endl;
// 	return 0;
// }

#include<iostream>

void merge(int arr[],int l,int mid,int r){
	int n1, n2;
	n1 = mid-l+1;n2=r-mid;
	int a[n1],b[n2];
	for(int i=0;i<n1;i++){
		a[i]=arr[l+i];
	}
	for(int i=0;i<n2;i++){
		b[i]=arr[i+mid+1];
	}
	int i=0,j=0,k=l;
	while(i<n1 && j<n2){
		if(a[i]<b[j]){
			arr[k]=a[i];
			i++;
			k++;
		}else{
			arr[k]=b[j];
			k++;
			j++;
		}
	}
	while(i<n1){
		arr[i]=a[i];
		i++;
		k++;
	}
	while(j<n2){
		arr[k]=b[j];
	}
}

void mergeSort(int arr[],int l,int r){
	if(l<r){
		int mid = (l+r)/2;
		mergeSort(arr,l,mid);
		mergeSort(arr,mid+1,r);
		merge(arr,l,mid,r);
	}
}
int main(){
	int n;std::cin>>n; int arr[n];for(int i=0;i<n;i++){std::cin>>arr[i];}
	mergeSort(arr,0,n-1);
	for(int i=0;i<n;i++){std::cout<<arr[i]<<" ";}
	return 0;
}