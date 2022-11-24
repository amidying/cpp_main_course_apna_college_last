#include<iostream>
using namespace std;
/*
given a square matrix A & its number of rows (or columns)N, return the transpose of A.
constraints: 1<=N<=1000
*/
// just swap the row and col
void transpose(){
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<3;i++){
        for(int j=i;j<3;j++){
            // swap
            int temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    for(int i = 0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
void mult_matrix(){
    int n1,n2,n3;
    cout<<"Enter n1,n2,n3: \n";
    cin>>n1>>n2>>n3;
    int m1[n1][n2];
    int m2[n2][n3];
    cout<<"Enter matrix 1: \n";
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            cin>>m1[i][j];
        }
    }
    cout<<"Enter matrix 2: \n";
    for(int i=0;i<n2;i++){
        for(int j=0;j<n3;j++){
            cin>>m2[i][j];
        }
    }
    int ans[n1][n3];
    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
            ans[i][j]=0;
        }
    }
    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
            for(int k=0;k<n2;k++){
                ans[i][j]+= m1[i][k]*m2[k][j];
            }
        }
    }
    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
            cout<<ans[i][j]<<"  ";
        }
        cout<<endl;
    }
}
    /*
    Given a nXm matrix. Write an algorithm to find that the given value exists in the matrix
    or not.
    Integers in each row are sorted in ascending from left to right.
    Integers in each column are sorted in ascending from top to bottom.
    */
void matrixSearch(){
    int n,m;cout<<"Enter n,m";cin>>n>>m;
    int target;cout<<"Enter target";cin>>target;
    int a[n][m];
    cout<<"Enter the matrix";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int r=0,c=m-1;
    bool flag=false;
    while(r<n && c>=0){
        if(a[r][c]==target){
            flag = true;
        }else if(a[r][c]>target){
            c--;
        }else{
            r++;
        }
    }
    if(flag){
        cout<<"Found"<<endl;
    }else{
        cout<<"Not Found"<<endl;
    }
}
int main(){
    // transpose();
    // mult_matrix();
    matrixSearch();
    return 0;
}