#include"bits/stdc++.h"
using namespace std;


priority_queue<int,vector<int>,greater<int>> pqmin; //* min heap
priority_queue<int,vector<int>> pqmax; //* max heap

void insert(int x){
    if(pqmin.size()==pqmax.size()){
        if(pqmax.size()==0){
            pqmax.push(x);
            return;
        }
        if(x<pqmax.top()){
            pqmax.push(x);
        }else{
            pqmin.push(x);
        }
    }else{
        //* case 1: size of maxHeap > size of minHeap
        //* case 2: size of maxHeap < size of minHeap
        if(pqmax.size()>pqmin.size()){
            if(x>= pqmax.top()){
                pqmin.push(x);
            }else{
                int temp = pqmax.top();
                pqmax.pop();
                pqmin.push(temp);
                pqmax.push(x);
            }
        }else{
            if(x <= pqmin.top()){
                pqmax.push(x);
            }else{
                int temp = pqmin.top();
                pqmin.pop();
                pqmax.push(temp);
                pqmin.push(x);
            }
        }
    }
}
double findMedian(){
    if(pqmax.size()==pqmin.size()){
        return (pqmax.top()+pqmin.top())/2.0;
    }else if(pqmax.size()>pqmin.size()){
        return pqmax.top();
    }else{
        return pqmin.top();
    }
    return -1;
}
int main()
{
    //* creat two function 1. insert and 2. findMedian
    int arr[]={4,23,234,5,656,7,8,8,9,9,4,};
    for(auto i: arr){
        insert(i);
    }
    // insert(10);
    // insert(15);
    cout<<findMedian()<<endl;
    return 0;
}