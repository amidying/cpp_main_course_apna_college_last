// #include<iostream>
// using namespace std;

// void transpose(int &arr[],int n,int m){
// 	for(int i=0;i<n;i++){
// 		for(int j=0;j<m;j++){
// 			int temp=arr[i][j];
// 			a[i][j]=a[j][i];
// 			a[j][i]=temp;
// 		}
// 	}
// }
// int main(){
// 	int n,m;cin>>n>>m;
// 	int arr[n][m];
// 	for(int i=0;i<n;i++){
// 		for(int j=0;j<m;j++){
// 			cin>>arr[i][j];
// 		}
// 	}
// 	// transpose(arr,n,m);
// 	// transposing
// 	for(int i=0;i<n;i++){
// 		for(int j=i;j<m;j++){
// 			int temp =arr[i][j];
// 			arr[i][j]=arr[j][i];
// 			arr[j][i]=temp;
// 		}
// 	}
// 	for(int i=0;i<n;i++){
// 		for(int j=0;j<m;j++){
// 			cout<<arr[i][j]<<" ";
// 		}cout<<endl;
// 	}
// 	return 0;
// }

// #include<iostream>
// using namespace std;

// void transpose(int &arr[],int n,int m){
// 	for(int i=0;i<n;i++){
// 		for(int j=i;j<m;j++){
// 			int temp=arr[i][j];
// 			arr[i][j]=arr[j][i];
// 			arr[j][i]=temp;
// 		}
// 	}
// }

// int main(){
// 	int n,m;cin>>n>>m;
// 	int arr[n][m];
// 	for(int i=0;i<n;i++){
// 		for(int j=0;j<m;j++){
// 			cin>>arr[i][j];
// 		}
// 	}
// 	// transpose(arr,n,m);
// 	for(int i=0;i<n;i++){
// 		for(int j=i;j<m;j++){
// 			int temp=arr[i][j];
// 			arr[i][j]=arr[j][i];
// 			arr[j][i]=temp;
// 		}
// 	}
// 	for(int i=0;i<n;i++){
// 		for(int j=0;j<m;j++){
// 			cout<<arr[i]<<" ";
// 		}cout<<endl;
// 	}
// }


#include<iostream>
using namespace std;
int main(){
	int n,m; 
	cin>>n>>m;
	int arr[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
	// transposing
	if(n==m){
		for(int i=0;i<n;i++){
			for(int j=i;j<m;j++){
				int temp = arr[i][j];
				arr[i][j]=arr[j][i];
				arr[j][i]=temp;
			}
		}
	}else{
		cout<<"Transpose is not possible as n!=m!"<<endl; 
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<arr[i][j]<<" ";
		}cout<<endl;
	}
	return 0;
}