// * array implementation
#include <iostream>
using namespace std;

#define n 20
class Queue{
private:
    int* arr;
    int front;
    int back;
public:
    Queue(){
        arr = new int[n];
        front = -1;
        back = -1;
    }
    void push(int x){
        if(back==n-1){
            cout<<"Queue is full"<<endl;
        }   
        back++;
        arr[back]=x;
        if(front==-1){
            front++;
        }
    }
    void pop(){
        if(front==-1 || front>back){
            cout<<"No element in queue."<<endl;
            return;
        }
        front++;
    }
    int peek(){
        if(front==-1 || front>back){
            cout<<"No element to peek"<<endl;
            return -1;
        }
        return arr[front];
    }
    bool empty(){
        if(front==-1 || front>back){
            // cout<<"No element to peek"<<endl;
            return true;
        }
        return false;
    }

};
int main(){
    Queue q;
    for(int i=1;i<10;i++){
        q.push(i);
    }
    cout<<q.peek()<<endl;
    cout<<q.empty()<<endl;
    q.pop();
    
    return 0;
}