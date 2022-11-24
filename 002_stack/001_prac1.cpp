// // #include <iostream>
// // #include<stack>
// // using namespace std;
// // void insertAtBottom(stack<int> &st,int elem){
// //     if(st.empty()){
// //         st.push(elem);
// //         return;
// //     }
// //     int topelem = st.top();
// //     insertAtBottom(st,elem);
// //     st.push(topelem);
// // }
// // void revStack(stack<int> & st){
// //     if(st.empty()){
// //         return;
// //     }
// //     int elem = st.top();
// //     st.pop();
// //     revStack(st);
// //     insertAtBottom(st,elem);
// // }
// // int main(){
// //     stack<int> st;
// //     st.push(1);
// //     st.push(2);
// //     st.push(3);
// //     st.push(4);
// //     cout<<st.top()<<endl;
    
// //     return 0;
// // }


// #include<iostream>

// #define n 100

// class stack{
// private:
//     int* arr;
//     int top;
// public:
//     stack(){
//         arr = new int [n];
//         top = -1;
//     }
//     void push(int x){
//         if(top==n-1){
//             std::cout<<"Stack Overflowed!"<<std::endl;
//             return;
//         }
//         top++;
//         arr[top]=x;
//     }
//     void pop(){
//         if(top==-1){
//             std::cout<<"No element to pop!"<<std::endl;
//             return;
//         }
//         else{
//             top--;
//         }
//     }
//     int Top(){
//         if(top==-1){
//             std::cout<<"No element at stack"<<std::endl;
//             return -1;
//         }
//         return arr[top];

//     }
//     bool empty(){
//         return top==-1;
//     }
// };

// int main(){
//     stack st;
//     for(int i=0;i<10;i++){
//         st.push(i);
//     }
//     std::cout<<st.Top()<<std::endl;
//     return 0;
// }


// #include<iostream>
// #include<stack>
// using namespace std;

// void revString(string s){
//     stack<string> st;
//     for(int i=0;i<s.length();i++){
//         string word = "";
//         while(s[i]!=' ' && i<s.length()){
//             word+=s[i];
//             i++;
//         }
//         st.push(word);
//     }
//     while(!st.empty()){
//         cout<<st.top()<<" ";
//         st.pop();
//     }cout<<endl;
// }

// int main(){
//     string s = "hey how are you?";
//     revString(s);
//     return 0;
// }

// #include<iostream>
// #include<stack>
// using namespace std;

// void insertAtBottom(stack<int> &st,int elem){
//     if(st.empty()){
//         st.push(elem);
//         return;
//     }
//     int topelem = st.top();
//     st.pop();
//     insertAtBottom(st,elem);
//     st.push(elem);
// }
// void revStack(stack<int> &st){
//     if(st.empty())
//     {
//         return;
//     }
//     int elem = st.top();
//     st.pop();
//     revStack(st);
//     insertAtBottom(st,elem);
// }

// #include"bits/stdc++.h"
// using namespace std;
// #define n 100
// class stack{
//     int* arr;
//     int top;
// public:
//     stack(){
//         arr = new int[n];
//         top = -1;
//     }
//     void push(int x){
//         if(top==n-1){
//             cout<<"Stack overflowed"<<endl;
//             return;
//         }
//         top++;
//         arr[top]=x;
//     }
//     void pop(){
//         if(top==-1){
//             cout<<"No element to pop"<<endl;
//             return;
//         }else{
//             top--;
//         }
//     }
//     int Top(){
//         if(top==-1){
//             cout<<"No element at stack"<<endl;
//             return -1;
//         }
//         return arr[top];
//     }
//     bool empty(){
//         return top==-1;
//     }
// };


// //* reverse a string using stack 
// #include"bits/stdc++.h"
// using namespace std;
// void revereStr(string s){
//     stack<string> st;
//     for(int i=0;i<s.length();i++){
//         string word ="";
//         while(s[i]!=' ' && i<s.length()){
//             word+= s[i];
//             i++;
//         }
//         st.push(word);
//     }
//     while (!st.empty())
//     {
//         /* code */
//         cout<<st.top()<<" ";
//         st.pop();
//     }cout<<endl;
    
// }
// void revereStr(string s){
//     stack<string> st;
//     for(int i=0;i<s.length();i++){
//         string word = "";
//         while(s[i]!=' ' && i<s.length()){
//             word += s[i];
//             i++;
//         }
//         st.push(word);
//     }
//     while(!st.empty()){
//         cout<<st.top()<<" ";
//         st.pop();
//     }
//     cout<<endl;
// }

// int main(){
//     string s= "Hey, how are you?";
//     revereStr(s);
//     return 0;
// }


//* reverse a stack
#include"bits/stdc++.h"
using namespace std;
void inserAtBottom(stack<int> &st,int elem){
    if(st.empty()){
        st.push(elem);
        return;
    }
    int topelem = st.top();
    st.pop();
    inserAtBottom(st,elem);
    st.push(topelem);
}
void revStack(stack<int> & st){
    if(st.empty()){
        return;
    }
    int elem = st.top();
    st.pop();
    revStack(st);
    inserAtBottom(st,elem);
}