#include<iostream>
// video 61
class node{
public:
    int data;
    node* prev;
    node* next;
    node(int val){
        data = val;
        prev=NULL;
        next=NULL;
    }
};
void insertAtHead(node* &head,int val){
    node* n = new node(val);
    head->next=head;
    while(head!=NULL){
        head->prev=n;
    }

    head = n;
}
void inseartAtTail(node* &head,int val){
    node* n = new node(val);
    if(head==NULL){
        insertAtHead(head,val);
        return;
    }
    if(head->next==NULL){
        head->next=n;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->prev = temp;

}
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        std::cout<<temp->data<<"->";
        temp=temp->next;
    }
    std::cout<<"NULL"<<std::endl;
}
void deletion(node* &head,int pos){
    node* temp=head;
    int count = 1;
    while(temp!=NULL && count!=pos){

    }
}
int main(){
    node* head = NULL;
    inseartAtTail(head,1);
    inseartAtTail(head,1);
    inseartAtTail(head,1);
    inseartAtTail(head,1);
    inseartAtTail(head,1);
    display(head);
    return 0;
}

