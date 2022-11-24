// #include<iostream>
// using namespace std;
// int main(){
// 	int n,m;cin>>n>>m; 
// 	int num =1; 
// 	for(int i=0;i<n;i++){
// 		for(int j=0;j<m;j++){
// 			cout<<num<<" ";
// 			num++;
// 		}cout<<endl;
// 	}
// 	// cout<<"Hello World!"<<endl;
// 	return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
// 	int arr[3][3];
// 	for(int i=0;i<3;i++){
// 		for(int j=0;j<3;j++){
// 			std::cin>>arr[i][j];
// 		}
// 	}
// 	for(int i=0;i<3;i++){
// 		for(int j=0;j<3;j++){
// 			std::cout<<arr[i][j]<<" ";
// 		}
// 		std::cout<<std::endl;
// 	}
// 	return 0;
// }


// #include <iostream>
// using namespace std;

// int main(){
// 	int n,m;
// 	cin>>n>>m;
// 	int arr[n][m];
// 	for(int i=0;i<n;i++){
// 		for(int j=0;j<m;j++){
// 			cin>>arr[i][j];
// 		}
// 	}
// 	int x ;
// 	cin>>x;
// 	for(int i=0;i<n;i++){
// 		for(int j=0;j<m;j++){
// 			if(arr[i][j]==x){
// 				std::cout<<"Found: "<<i<<"th row and "<<j<<"th colum"<<std::endl;
// 			}
// 		}
// 	}

// 	return 0;
// }


// tanspose of a matrix 
// #include <iostream>
// using namespace std;
// // void transpose(int arr[],int n,int m);
// int main(){
// 	int a[3][3]={
// 		{1,2,3},
// 		{4,5,6},
// 		{7,8,9}
// 	};
// 	for(int i=0;i<3;i++){
// 		for(int j=i;j<3;j++){
// 			int temp = a[i][j];
// 			a[i][j]=a[j][i];
// 			a[j][i]=temp;
// 		}
// 	}
// 	for(int i=0;i<3;i++){
// 		for(int j=0;j<3;j++){
// 			std::cout<<a[i][j]<<" ";
// 		}
// 		std::cout<<std::endl;
// 	}
// 	return 0;
// }



#include <iostream>
using namespace std;

int main(){
	// * matrx multiplication
	int n1,n2,n3;
	cin>>n1>>n2>>n3;
	int m1[n1][n2];
	int m2[n2][n3];
	
	return 0;
}