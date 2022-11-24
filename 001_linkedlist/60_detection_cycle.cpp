#include <iostream>
using namespace std;
class node{
public:
    int data;
    node* next;
    node(int val){
        data = val;
        next=NULL;
    }
};
void insertAtTail(node* &head,int val){
    node* n = new node(val);
    if(head==NULL){
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
}
void display(node* head){
    node* temp= head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
void insertAtHead(node* &head,int val){
    node* n = new node(val);
    n->next=head;
    head=n;
}
bool search(node* head,int key){
    node* temp = head;
    while(temp!=NULL){
        if(temp->data == key){
            return true;
        }
        temp = temp->next;
    }
    return false;
}
// to delete the first node
void deleteAtHead(node* &head){
    node* todelete = head;

    head = head->next;
    delete todelete;
}
void deletetion(node* &head,int val){
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        deleteAtHead(head);
        return;
    }
    node* temp = head;
    while(temp->next->data != val){
        temp = temp->next;
    }
    node* todelete = temp->next;
    temp->next=temp->next->next;
    delete todelete; 
}
// itrative way
node* reverse(node* &head){
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;
    while(currptr!=NULL){
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
    }
    return prevptr;
}
// recursive way of  reversing a linkedlist
node* reverseRecursion(node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* newhead = reverseRecursion(head->next);
    head->next->next = head;
    head->next=NULL;
    return newhead;
}
node* reverseK(node* &head,int k){
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;
    int count = 0;
    while(currptr != NULL && count <k){
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
        count++;
    }
    if(nextptr != NULL){
        head->next = reverseK(nextptr,k);
    }
    return prevptr;
}
void makeCycle(node* &head,int pos){
    node* temp = head;
    node* startNode;
    int count =1;
    while(temp->next != NULL){
        if(count==pos){
            startNode = temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next=startNode;
}
bool detectCycle(node* &head){
    node* slow=head;
    node* fast = head;
    while(fast != NULL && fast->next->next!=NULL){
        slow=slow->next;
        fast = fast->next->next;
        if(slow==fast){
            return true;
        }
    }
    return false;
}
void removeCycle(node* head){
    node* fast=head;
    node* slow =head;
    do{
        slow= slow->next;
        fast = fast ->next->next;
    }while(slow != fast);
    fast = head;
    while(slow->next != fast->next){
        slow=slow->next;
        fast = fast->next;
    }
    slow->next = NULL;

}
int main(){
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,6);
    insertAtTail(head,7);
    insertAtTail(head,8);
    insertAtTail(head,9);
    makeCycle(head,4);
    // display(head);
    std::cout<<detectCycle(head)<<std::endl;
    removeCycle(head);
    std::cout<<detectCycle(head)<<std::endl;
    display(head);
    return 0;
}