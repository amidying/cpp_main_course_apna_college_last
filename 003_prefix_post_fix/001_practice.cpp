// #include <iostream>
// using namespace std;
// class node{
// public:
//     int data;
//     node* next;
//     node(int val){
//         data = val;
//         next = NULL;
//     }
// };

// void inseartAtTail(node*&head,int val){
//     node* n = new node(val);
//     if(head==NULL){
//         head = n;
//         return;
//     }
//     node* temp=head;
//     while(temp->next!=NULL){
//         temp=temp->next;
//     }
//     temp->next=n;
// }
// void insertAtHead(node*&head,int val){
//     node*n = new node(val);
//     head->next =  head;
//     head=n;
// }
// void display(node* head){
//     node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<">";
//         temp=temp->next;
//     }cout<<"NULL"<<endl;
// }
// int main(){
//     node* head = NULL;
//     for(int i=0;i<5;i++){
//         inseartAtTail(head,i);
//     }
//     insertAtHead(head,6);
//     display(head);
//     return 0;
// }


//#include<iostream>
//#include<stack>
//#include<math.h>
//using namespace std;

// int prefixEvaluation(string s){
//     stack<int> st;
//     for(int i=s.length()-1;i>=0;i--){
//         if(s[i]>='0' && s[i]<='9'){
//             st.push((s[i]-'0'));
//         }
//         else{
//             int op1 = st.top();
//             st.pop();
//             int op2 = st.top();
//             st.pop();
//             switch (s[i])
//             {
//             case '+':
//                 st.push(op1+op2);
//                 break;
            
//             case '-':
//                 st.push(op1-op2);
//                 break;
//             case '/':
//                 st.push(op1/op2);
//                 break;
//             case '*':
//                 st.push(op1*op2);
//                 break;
//             case '^':
//                 st.push(pow(op1,op2));
//                 break;
//             }
//         }
//     }
//     return st.top();
// }
// int postfixEvaluation(string s){
//     // * create the stack
//     stack<int> st;
//     // * traverse the string from last
//     for(int i=s.length()-1;i>=0;i--){
//         if(s[i]>='0' && s[i]<='9'){
//             st.push(s[i]-'0');
//         }
//         else{
//             int op1 = st.top();
//             st.pop();
//             int op2 = st.top();
//             st.pop();
//             switch(s[i]){
//                 case '+':
//                     st.push(op1+op2);
//                     break;
//                 case '-':
//                     st.push(op1-op2);
//                     break;
//                 case '/':
//                     st.push(op1/op2);
//                     break;
//                 case '*':
//                     st.push(op1*op2);
//                     break;
//                 case '^':
//                     st.push(pow(op1,op2));
//                     break;
//             }
//         }
//     }
//     return st.top();
// }


// int main(){
//     cout<<postfixEvaluation("-+7*45+20")<<endl;
//     return 0;
// }

// #include <iostream>
// #include<stack>
// #include<math.h>
// using namespace std;


// int frefixEvaluation(string s){
//     stack<int> st;
//     for(int i=0;i<s.length();i++){
//         if(s[i]>='0' && s[i]<='9'){
//             st.push(s[i]-'0');
//         }
//         // * the rest is same for postfix evaluation
//         else{
//             int op2 = st.top();
//             st.pop();
//             int op1 = st.top();
//             st.pop();
//             switch (s[i])
//             {
//             case '+':
//                 st.push(op1+op2);
//                 break;
//             case '-':
//                 st.push(op1-op2);
//                 break;
//             case '*':
//                 st.push(op1*op2);
//                 break;
//             case '/':
//                 st.push(op1/op2);
//                 break;
//             case '^':
//                 st.push(pow(op1,op2));
//                 break;
//             }

//         }
//     }
//     return st.top();
// }

// int main(){
//     cout<<frefixEvaluation("46+2/5*7+")<<endl;
//     return 0;
// }


/*
#include<iostream>
#include<stack>
using namespace std;

// * precedense calculation
int prec(char c){
    if(c=='^'){
        return 3;
    }else if(c=='*' or c=='/'){
        return 2;
    }else if(c=='+' or c=='-'){
        return 1;
    }
    return -1;
}
string infixToPostfix(string s){
    stack<char> st;
    string res;
    for(int i=0;i<s.length();i++){
        if((s[i]>'a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
            res+=s[i];
        }else if(s[i]=='('){
            st.push(s[i]);
        }else if(s[i]==')'){
            while(st.empty() && st.top()!='('){
                res+=st.top();
                st.pop();
            }
            if(!st.empty()){
                st.pop();
            }
        }else{
            while(!st.empty() && prec(st.top()>prec(s[i]))){
                res += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty()){
        res+= st.top();
        st.pop();
    }
    return res;

}
int main(){
    std::cout<<infixToPostfix("(a-b/c)*(a/k-l)")<<std::endl;
    return 0;
}
// (a-b/c)*(a/k-l)
*/


#include"bits/stdc++.h"
using namespace std;

int main(){

  return 0;
}


