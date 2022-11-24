#include<iostream>

class node{
public:
    int data;
    node* next;
    node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtTail(node* &head,int val){
    node* n = new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;
}
void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        std::cout<<temp->data<<"->";
        temp=temp->next;
    }
    std::cout<<"NULL"<<std::endl;
}
void insertAtHead(node* &head,int val){
    node* n = new node(val);
    n->next=head;
    head=n;
}
bool search(node* head,int key){
    node* temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp= temp->next;
    }
    return false;
}
void deleteHead(node* &head){
    node* todelete = head;
    head->next=head;
    delete  todelete;
}
void deletion(node* &head,int val){
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        deleteHead(head);
    }
    node* temp=head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    node* todelete = temp->next;
    temp->next=temp->next->next;
    delete todelete;
}
node* reverse(node* head){
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr ;
    while(currptr!=NULL){
        nextptr=currptr->next;
        currptr->next=prevptr;

        prevptr=currptr;
        currptr=nextptr;
    }
    return prevptr;
}
node* reverseReccursion(node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* newhead =reverseReccursion(head->next);
    head->next->next=head;
    head->next=NULL;
    return newhead;
}
node* reverseK(node* &head,int k){
    node* prevptr = NULL;
    node* currptr=head;  
    node* nextptr;
    int count =0;
    while(currptr != NULL && count<k){
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
        count++;
    }
    if(nextptr!=NULL){
        head->next=reverseK(nextptr,k);
    }
    return prevptr;

}
int length(node* head){
    int l=0;
    node* temp=head;
    while(temp!=NULL){
        l++;
        temp=temp->next;
    }
    return l;
}

node* kappend(node* &head,int k){
    node*temp=head;
    node*newHead;
    node*newTail;
    // ? if k is larger than the length of the ll. 
    // ? To handle this k = k%l;
    int l1 = length(head);
    k = k%l1;
    int count = 1;
    while(temp->next!=NULL){
        if(count==l1-k){
            newTail=temp;
        }
        if(count==l1-k+1){
            newHead=temp;
        }
        temp=temp->next;
        count++;
    }
    newTail->next=NULL;
    temp->next=head;

    return newHead;
}
int main(){
    node* head=NULL;
    int arr[6]={1,2,3,4,5,6};
    for(int i=0;i<6;i++){
        insertAtTail(head,arr[i]);
    }
    display(head);
    node* nhead = kappend(head,3);
    display(nhead);
    return 0;
}