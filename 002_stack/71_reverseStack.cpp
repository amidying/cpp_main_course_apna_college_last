#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &st,int elem){
    if(st.empty()){
        st.push(elem);
        return;
    }
    int topelem = st.top();
    st.pop();
    insertAtBottom(st,elem);
    st.push(topelem);
}
void revStack(stack<int> &st){
    if(st.empty()){
        return;
    }
    int elem = st.top();
    st.pop();
    revStack(st);
    insertAtBottom(st,elem);
}
int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    revStack(st);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}