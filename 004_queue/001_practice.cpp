// #include <iostream>
// using namespace std;
// #define n 20

// class Queue{
// private:
//     int* arr;
//     int front;
//     int back;
// public:
//     Queue(){
//         arr = new int[n];
//         front = -1;
//         back = -1;
//     }
//     void que_push(int x){
//         if(back==-1){
//             cout<<"Que is full"<<endl;
//         }
//         back++;
//         arr[back]=x;
//         if(front==-1){
//             front++;
//         }
//     }
//     void que_pop(){
//         if(front==-1){
//             cout<<"no element to pop"<<endl;
//             return;
//         }
//         front++;
//     }
//     int que_peek(){
//         if(front==-1 or front==n-1){
//             cout<<"no element to peek"<<endl;
//             return -1;
//         }
//         return arr[front];
//     }
//     bool empty(){
//         if(front==-1 or front>back){
//             return true;
//         }
//         return false;
//     }
// };

// int main(){
//     Queue q;
//     q.que_push(1);
//     q.que_push(1);
//     q.que_push(1);
//     cout<<q.que_peek()<<endl;
//     return 0;
// }

// * que linked list
// #include <iostream>
// using namespace std;

// class node{
// public:
//     int data;
//     node* next;
//     node(int val){
//         data = val;
//         next=NULL;
//     }
// };

// class queue{
// public:
//     node* front;
//     node* back;
//     queue(){
//         front = NULL;
//         back = NULL;
//     }
//     void push(int x){
//         node* n = new node(x);
//         if(front==NULL){
//             back = n;
//             front = n;
//             return;
//         }
//         back->next = n;
//         back = n;
//     }
// };
// int main(){
//     queue q;
//     for(int i=1;i<=10;i++){
//         q.push(i);
//     }
 
    
//     return 0;
// }

#include"bits/stdc++.h"
using namespace std;

void windowSliding(int arr[],int n,int k){
    int j,max;
    for(int i=0;i<=n-k;i++){
        max = arr[i];
        for(j=1;j<k;j++){
            if(arr[i+j]>max){
                max = arr[i+j];
            }
            cout<<max<<" ";
        }
    }
}

int main(){
    int arr[]={5435,12,3,64645,42,34,3,5434,5,43,56};
    int n = sizeof(arr)/sizeof(int);
    windowSliding(arr,n,3);
    return 0;
}