// #include <iostream>
#include"bits/stdc++.h"
using namespace std;


class node{
public: 
    int data;
    node* next;

    // creating the constructur
    node(int val){
        data = val;
        next = NULL;
    }
};
void insertAtTail(node*  &head,int val){
    node* n = new node(val);
    // checking if the node is null
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next=n;
}
void displayValue(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->"; 
        temp=temp->next;
    }
    cout<<"NULL"<<endl;; 
}
void insertAtHead(node* &head,int val){
    node* n=new node(val);
    n->next = head;
    head = n;
}
bool search(node* head,int key){
    node* temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp = temp->next;
    }
    return false;
}
int main(){
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    displayValue(head);
    insertAtHead(head,4);
    displayValue(head);
    cout<<search(head,4)<<endl;
    return 0;
}