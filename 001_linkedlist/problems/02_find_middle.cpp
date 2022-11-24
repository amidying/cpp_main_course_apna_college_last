#include"bits/stdc++.h"
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};
void insertAtHead(Node* &head,int val){
    Node* n = new Node(val);
    n->next = head;
    head = n;
}
void insertAtTail(Node* &head,int val){
    Node* n = new Node(val);
    if(head==NULL){
        head = n;
        return;
    }
    Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;
}
void displayll(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"-->";
        temp = temp->next;
    }cout<<"NULL";
}
//* reverse print a linked list
void reversePrint(Node* head){
    if(head==NULL){
        return;
    }
    reversePrint(head->next);
    cout<<head->data<<"-->";
    // cout<<"NULL";
}
void findMiddleNode(Node* head){
    int count =0;
    Node* temp = head,*currptr = head;
    while(temp!=NULL){
        temp = temp->next;
        count++;
    }
    for(int i=0;i<count/2;i++){
        currptr = currptr->next;
    }
    cout<<currptr->data<<endl;
}
int main()
{
    Node* head = NULL;
    insertAtHead(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    displayll(head);cout<<endl;
    findMiddleNode(head);
    return 0;
}