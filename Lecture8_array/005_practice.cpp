
// #include<iostream>

// void swap(int arr[],int i,int j){
//     int temp=arr[i];
//     arr[i]=arr[j];
//     arr[j]=temp;
// }

// void bubbleSort(int arr[],int n){
//     int counter = 1;
//     while(counter<=n){
//         for(int i=0;i<n-counter;i++){
//             if(arr[i]>arr[i+1]){
//                 swap(arr,i,i+1);
//             }
//         }
//         counter++;
//     }
// }

// int main(){
//     int arr[5]={5,4,3,2,1};
//     bubbleSort(arr,5);
//     // int counter = 1;
//     // while(counter<=n){

//     // }
//     for(int i=0;i<5;i++){
//         std::cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// #include<iostream>
// // * binary search
// int binarySearch(int arr[],int n,int key){
//     int s=0,e=n-1;
//     while(s<=e){
//         int mid = (s+e)/2;
//         if(arr[mid]==key){
//             return mid;
//         }else if(arr[mid]>key){
//             e = mid-1;
//         }
//         else{
//             s = mid+1;
//         }
//     }
//     return -1;
// }
// int main(){
    
//     return 0;
// }