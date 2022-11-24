// #include<iostream>
// #include"bits/stdc++.h"
// using namespace std;

// // incomplete
// void mult_matrix(){
//     int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     int b[3][3]={{9,8,7},{6,5,4},{3,2,1}};
//     int ans[3][3];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             ans[i][j]=0;
//         }
//     }
//     // multiplying
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             for(int k=0;k<3;k++){
//                 ans[i][j]+=a[i][k]*b[k][i];
//             }
//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<ans[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// int main()
// {
//     mult_matrix();
//     return 0;
// }
// void transpose(){
//     int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     for(int i=0;i<3;i++){
//         for(int j=0;j<i;j++){
//             int temp = a[i][j];
//             a[i][j]=a[j][i];
//             a[j][i]=temp;
//         }
        
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<a[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }
// void transpose2(){
//     int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     for(int i=0;i<3;i++){
//         for(int j=0;j<i;j++){
//             int temp =a[i][j];
//             a[i][j]=a[j][i];
//             a[j][i]=temp;
//         }
//     }
// }
// void transpose3(){
//     int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     for(int i=0;i<3;i++){
//         for(int j=0;j<i;j++){
//             int temp = a[i][j];
//             a[i][j]=a[j][i];
//             a[j][j]=temp;
//         }
//     }
// }
// void transpose4(){
//     int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     for(int i=0;i<3;i++){
//         for(int j=0;j<i;j++){
//             int temp = a[i][j];
//             a[i][i]=a[j][i];
//             a[j][i]=temp;
//         }
//     }
// }
// void transpose5(){
//     int n,m;
//     cout<<"Enter n and m: \n";
//     cin>>n>>m;
//     int a[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>a[i][j];
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i;j++){
//             int temp = a[i][j];
//             a[i][j]=a[j][i];
//             a[j][i]=temp;
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout<<a[i][j];
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     // transpose();
//     transpose5();
//     return 0;
// }

// void transpose(){
//     int a[3][3]={{1,2,3},{4,5,6},7,8,9};
//     for(int i=0;i<3;i++){
//         for(int j=0;j<i;j++){
//             int temp = a[i][j];
//             a[i][j]=a[j][i];
//             a[j][i]=temp;
//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<a[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     transpose();
//     return 0;
// }

#include<iostream>
using namespace std;

void transpose(){
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<3;i++){
        for(int j=0;j<i;j++){
            int temp = a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

void mutl_matrix(){
    int n,m,k;
    cout<<"enter n,m,k\n";
    cin>>n>>m>>k;
    int ar1[n][m];
    int ar2[m][k];
    cout<<"enter arr1\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>ar1[i][j];
        }
    }
    cout<<"enter arr2\n";
    for(int i=0;i<m;i++){
        for(int j=0;j<k;j++){
            cin>>ar2[i][j];
        }
    }
    int ans[n][k];
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            ans[i][j]=0;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            for(int j1=0;j<m;j++){
                ans[i][j]+=ar1[i][j1]*ar2[j1][k];
            }
        }
    }
}
void matrixSearch(){
    int n,m;
    cout<<"Enter n,m\n";
    int arr[n][m];
    int k;
    cout<<"enter target";
    cin>>k;
    cout<<"enter the matrix\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int r=0,c=m-1;
    bool flag = false;
    while(r<n && c>0){
        if(arr[r][c] == k){
            flag = true;
        }else if(arr[r][c]>k){
            c--;
        }else{
            r++;
        }
    }
    if(flag){
        cout<<"Found"<<endl;
    }else{
        cout<<"not found\n";
    }
}

int main(){
    transpose();
    mutl_matrix();
    matrixSearch();
    return 0;
}