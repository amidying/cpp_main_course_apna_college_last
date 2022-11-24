#include<iostream>

class node{
public:
    int data;
    node* next;
    node(int val){
        data = val;
        next=NULL;
    }
};
void insertAtTail(node*&head,int val){
    node* n = new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void displayll(node* head){
    node* temp=head;
    while(temp!=NULL){
        std::cout<<temp->data<<"->";
        temp=temp->next;
    }
    std::cout<<"NULL"<<std::endl;
}
void insertAtHead(node*&head,int val){
    node*n = new node(val);
    n->next=head;
    head=n;
}
bool search(node* head,int val){
    node*temp=head;
    while(temp!=NULL){
        if(temp->data==val){
            return true;
        }
        temp=temp->next;
    }
    return false;
}
void deleteHead(node*&head){
    node* todelete = head;
    head->next=head;
    delete todelete;
}
void deletion(node*& head,int val){
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        deleteHead(head);
    }
    node*temp=head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    node*todelete = temp->next;
    temp->next=temp->next->next;
    delete todelete;
}
node* reverse(node*&head){
    node* prevptr=NULL;
    node* currptr = head;
    node* nextptr ;
    while(currptr!=NULL){
        nextptr=currptr->next;
        currptr->next=prevptr;

        prevptr = currptr;
        currptr=nextptr;
    }
    return prevptr;

}
// * reverse ll using recurssion
node* reverseRecurrsion(node*&head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* newhead = reverseRecurrsion(head->next);
    head->next->next=head;
    head->next=head;
    return newhead;
}
// reverse k node
node* reversek(node*&head,int k){
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;
    int count =0;
    while(currptr!=NULL && count<k){
        nextptr=currptr->next;
        currptr->next=prevptr;

        prevptr=currptr;
        currptr=nextptr;
        count++;
    }
    if(nextptr!=NULL){
        head->next=reversek(nextptr,k);
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
void intersect(node*&head1,node*&head2,int pos){
    node* temp1 = head1;
    pos--;
    while(pos--){
        temp1=temp1->next;
    }
    node* temp2 = head2;
    while(temp2->next!=NULL){
        temp2 = temp2->next;    
    }
    temp2->next=temp1;
}
// ? timecomplexity: length of longest ll O(longestLL)
int intersectionNode(node*&head1,node*&head2){
    int l1=length(head1);
    int l2 = length(head2);
    int d=0;
    node*ptr1;
    node*ptr2;
    if(l1>l2){
        d = l1-l2;
        ptr1 = head1;
        ptr2=head2;
    }else{
        d = l2-l1;
        ptr1=head2;
        ptr2 = head1;
    }
    while(d){
        ptr1=ptr1->next;
        if(ptr1==NULL){
            return -1;
        }
        d--;
    }
    while(ptr1!=NULL && ptr1!=NULL){
        if(ptr1==ptr2){
            return ptr1->data;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return -1;
}
int main(){
    node* head=NULL;
    node* head2 = NULL;
    insertAtTail(head,1);
    insertAtTail(head2,9);
    insertAtTail(head2,10);

    int arr[5]={2,3,4,5,6};
    for(int i=0;i<5;i++){
        insertAtTail(head,arr[i]);
    }
    displayll(head);
    intersect(head,head2,4);
    displayll(head2);
    std::cout<<intersectionNode(head,head2)<<std::endl;
    return 0;
}