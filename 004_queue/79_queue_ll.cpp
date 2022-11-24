#include <iostream>
using namespace std;
class node{
public:
    int data;
    node* next;
    node(int val){
        data = val;
        next=NULL;
    }
};
class queue{
public:
    node* front;
    node* back;
    queue(){
        front = NULL;
        back = NULL;
    }

    void push(int x){
        node* n = new node(x);
        if(front==NULL){
            back=n;
            front = n;
            return;
        }
        back->next = n;
        back = n;
    }
    void pop(){
        if(front==NULL){
            cout<<"Queue underflowed"<<endl;
            return;
        }
        node* todelete = front;
        front= front->next;
        delete todelete;
    }
    int peek(){
        if(front==NULL){
            cout<<"No element in queue"<<endl;
            // ? when return type is not void
            // ? must return something 
            return -1;
        }
        return front->data;
    }
    bool empty(){
        if(front==NULL){
            return true;
        }
        return false;
    }
};
int main(){
    queue q;
    for(int i=1;i<=10;i++){
        q.push(i);
    }
    cout<<q.peek()<<endl;
    cout<<q.empty()<<endl;
    q.pop();
    
    return 0;
}