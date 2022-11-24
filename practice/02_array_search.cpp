#include<iostream>


using namespace std;


int main(){
    //insertionSort
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=1;i<n;i++){
        int current =a[i];
        int j=i-1;
        while(a[j]>current && j>=0){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=current;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
/*
//Bubble Sort
    int counter =1;
    while(counter<n){
        for(int i=0;i<n-counter;i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter++;
    }
*/
/*
Selection Sort
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(arr[i]>arr[j]){
            int temp=arr[j];
            arr[j]=arr[j+i];
            arr[i]=temp;
        }
    }
}
// to print it in the console
for(int i=0;i<n;i++){
    cout<<arr[i];
}
*/
/*
Insertion Sort
for(int i=1;i<n;i++){
    int current == a[i];
    int j=i-1;
    while(a[j]>current && j>=0){
        a[j+1]=a[j];
        j--;
    }
    a[j+1]=current;
}
*/
// #include<iostream>

// using namespace std;

// int binarySearch(int a[],int n){
//     int s=0;
//     int e=n;
//     int key=50;
//     // cout<<"Enter key"<<endl;
//     // cin>>key;
//     while(s<=e){
//         int mid=(s+e)/2;
//         if(a[mid]==key){
//             return mid;
//         }
//         else if(a[mid]>key){
//             e=mid-1;
//         }else{
//             s=mid+1;
//         }
//     }
//     return -1;

// }
// int main(){
//     int n;
//     // cin>>n;
//     // int a[n];
//     int a[5]={10,20,30,40,50};
//     // for(int i=0;i<n;i++){
//     //     cin>>a[i];
//     // }
//     // cout<<binarySearch(a,n)<<endl;
//     cout<<binarySearch(a,5)<<endl;
//     return 0;
// }