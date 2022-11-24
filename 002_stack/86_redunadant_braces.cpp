#include"bits/stdc++.h"
using namespace std;

int main(){
    // string s = "((a+b))";
    string s = "(a+(a+b))";
    int n = s.size();
    bool flag=false;
    stack<char> st;
    for(int i=0;i<n;i++){
        if(s[i]=='+' or s[i]=='-' or s[i]=='*' or s[i]=='/'){
            st.push(s[i]);
        }
        else if(s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            if(st.top()=='('){
                flag = true;
            }
            while(st.top()=='+' or st.top()=='-' or st.top()=='*' or st.top()=='/'){
                st.pop();
            }
            st.pop();//? because we have an opening bracket left
        }
    }
    cout<<flag<<endl;
    return 0;
}