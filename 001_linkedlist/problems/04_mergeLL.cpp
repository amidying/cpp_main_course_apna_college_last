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
Node* mergeLL(Node*& head1,Node*&head2){
    Node* p1 = head1;
    Node* p2 = head2;
    Node* dummyNode = new Node(-1);
    Node* p3 = dummyNode;
    while(p1!=NULL && p2!=NULL){
        if(p1->data < p2->data){
            p3->next = p1;
            p1= p1->next;
            p3= p3->next;
        }else{
            p3->next = p2;
            p2=p2->next;
            p3=p3->next;
        }
    }
    while(p1!=NULL){
        p3->next = p1;
        p1=p1->next;
        p3= p3->next;
    }
    while(p2!=NULL){
        p3->next = p2;
        p2=p2->next;
        p3 = p3->next;
    }
    return dummyNode->next;

}
int main()
{
    Node* head = NULL;
    insertAtHead(head,1);
    insertAtTail(head,3);
    insertAtTail(head,5);
    insertAtTail(head,7);
    insertAtTail(head,8);

    Node* head2 = NULL;
    insertAtHead(head2,2);
    insertAtTail(head2,4);
    insertAtTail(head2,6);
    displayll(head);
    cout<<endl;
    displayll(head2);
    Node* merged = mergeLL(head,head2);
    cout<<endl;
    displayll(merged);
    return 0;
}