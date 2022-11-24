#include <iostream>
#include<stack>
using namespace std;
class Queue{
private:
    stack<int> s1;
    stack<int> s2;
public:
// ! 5:41 / 7:56 did not complete the alternative function system
    void Push(int x){
        s1.push(x);
    }
    int Pop(){
        if(s1.empty() and s2.empty()){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        int topval = s2.top();
        s2.pop();
        return topval;
    }
    bool empty(){
        if(s1.empty() and s2.empty()){
            return true;
        }
        return false;
    }

};
int main(){
    Queue q;
    // q.Push(1);
    // q.Push(1);
    // q.Push(1);
    // q.Push(1);
    // q.Push(1);
    // q.Push(1);
    q.Pop();
    // cout<<q.empty()<<endl;
    return 0;
}