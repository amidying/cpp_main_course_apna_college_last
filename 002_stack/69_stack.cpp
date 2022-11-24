#include<iostream>

#define n 100

class stack{
    int* arr;
    int top;
public:
    stack(){
        arr = new int [n];
        top =-1;
    }
    void push(int x){
        if(top==n-1){
            std::cout<<"Stack Overflowed!"<<std::endl;
            return;
        }
        top++;
        arr[top]=x;
    }
    void pop(){
        if(top==-1){
            std::cout<<"No element to pop!"<<std::endl;
            return;
        }
        else{
            top--;
        }
    }
    int Top(){
        if(top==-1){
            std::cout<<"No element at stack!"<<std::endl;
            return -1;
        }
        return arr[top];
    }
    bool empty(){
        return top==-1;
    }

};

int main(){
    stack st;
    st.push(1);
    st.pop();
    st.pop();
    return 0;
}