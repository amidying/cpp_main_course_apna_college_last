#include<iostream>
using namespace std;
// 1. selection sort 

void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp = arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
}
void selectionSort2(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp = arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
}
void selectionSort3(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp = arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
}
void selectionSort4(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp = arr[j];arr[j]=arr[i];arr[i]=temp;
            }
        }
    }
}
void selectionSort5(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp = arr[j];arr[j]=arr[i];arr[i]=temp;
            }
        }
    }
}
// 2. bubble sort 
void bubbleSort(int arr[],int n){
    int counter = 0;
    while(counter<n-1){
        for(int i=0;i<n-counter-1;i++){
            if(arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter++;
    }
}
void bubbleSort2(int arr[],int n){
    int counter = 0;
    while(counter<n-1){
        for(int i=0;i<n-counter-1;i++){
            if(arr[i]>arr[i+1]){
                int temp = arr[i];arr[i]=arr[i+1];arr[i+1]=temp;
            }
        }
        counter++;
    }
}
void bubbleSort3(int arr[],int n){
    int counter = 0;
    while(counter<n-1){
        for(int i=0;i<n-counter-1;i++){
            if(arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter++;
    }
}
void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int current = arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0){
            arr[j+1]=arr[i];
            j--;
        }
        arr[j+1]=current;
    }
}
int main(){
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // 1. selection sort
    /*
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp = arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    */
    // selectionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}