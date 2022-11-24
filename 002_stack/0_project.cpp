#include"bits/stdc++.h"
using namespace std;
//* methods to create
/*
1. push 2. pop 3. isEmpty 4. isFull 5. peek 6. count 7. change 8. display 9. clear scree 
*/
#define n 100
class Stack{
private:
    int arr[n];
    int top;
public:
    Stack(){
        top=-1;
        for(int i=0;i<n;i++){arr[i]=0;}
    }
    void Push(int val){
        if(top==n-1){
            cout<<"Stack Overflow"<<endl;
            return;
        }
        top++;
        arr[top]=val;
    }
    int Pop(){
        if(top==-1){
            cout<<"Stack underflow"<<endl;
            return -1;
        }
        
        int toTop = arr[top];
        top--;
        return toTop;
    }
    bool isEmpty(){
        if(top !=-1){
            return false;
        }
        return true;
    }
    bool isFull(){
        if(top==n-1){
            return true;
        }
        return false;
    }
    int peek(int pos){
        if(isEmpty()){
            cout<<"Stack underflosw"<<endl;
            return -1;
        }
        return arr[pos];
    }
    int count(){
        return top+1;
    }
    void change(int pos,int val){
        if(isFull()){
            cout<<"Stack Overflowed"<<endl;
        }
        arr[pos]=val;
    }
    void display(){
        if(isEmpty()){
            cout<<"Stack underflow"<<endl;
        }
        for(int i=top;i>=0;i--){
            cout<<arr[i]<<"-";
        }
    }

};


int main(){
    Stack s1;
    int option,value,position;

    do{
        cout<<"Enter your option.."<<endl;
        cout<<"0. To exit"<<endl;
        cout<<"1. To Push"<<endl;
        cout<<"2. To Pop"<<endl;
        cout<<"3. Is Empty"<<endl;
        cout<<"4. Is Full"<<endl;
        cout<<"5. To Peek"<<endl;
        cout<<"6. Count"<<endl;
        cout<<"7. change"<<endl;
        cout<<"8. display"<<endl;
        cout<<"9. clear screen"<<endl;
        cin>>option;
        switch(option){
            case 0:
                break;
            case 1:
                cin>>value;
                s1.Push(value);
                break;
                
            case 2:
                cout<<"the poped item is: "<<s1.Pop()<<endl;
                break;
            case 3:
                if(s1.isEmpty()){
                    cout<<"Stack is empty"<<endl;

                }else{
                    cout<<"Stack is not empty"<<endl;
                }
                break;
            case 4:
                if(s1.isFull()){
                    cout<<"Stack is full"<<endl;
                }else{
                    cout<<"Stack is not full"<<endl;
                }
                break;
            case 5:
                cout<<"Enter position: "<<endl;
                cin>>position;
                cout<<"At position: "<<position<<s1.peek(position)<<endl;
                break;
            case 6:
                cout<<s1.count()<<endl;
                break;
            case 7:
                cout<<"Enter value :"<<endl;cin>>value;
                cout<<"Enter position: "<<endl;cin>>position;
                s1.change(position,value);break;
            case 8:
                s1.display();
                break;
            case 9:
                system("cls");
                break;
            default:
                cout<<"Please enter a valid option"<<endl;
                break;
        }
    }while(option!=0);
    return 0;
}

