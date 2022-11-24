#include"bits/stdc++.h"
using namespace std;

class node{
public:
    int data;
    node* next;
    node(int val)
    {
        data = val;
        next=NULL;
    }
};

//* insert at tail
void insertAtTail(node*&head,int val)
{
    node* n = new node(val);
    if(head==NULL)
    {
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void displayll(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"-->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
void insertAtHead(node*&head,int val)
{
    node* n = new node(val);
    n->next = head;
    head = n;
}
bool search(node*&head,int key)
{   
    node* temp = head;
    while(temp!=NULL)
    {
        if(temp->data==key)
        {
            return true;
        }
    }
    return false;
}
// void deleteAtHead(node*&head)
// {
//     node* todelete = head;
//     head = head->next;
//     delete todelete;
// }
// void deleteNode(node*&head,int val)
// {
//     if(head==NULL)
//     {
//         deleteAtHead(head);
//         return;
//     }
//     node* temp = head;
//     while(temp->next->data!=val)
//     {
//         temp = temp->next;
//     }
//     node* todelete = temp->next;
//     temp->next = temp->next->next;
//     delete todelete;
// }
void deleteHead(node*&head)
{
    node* todelete = head;
    head = head->next;
    delete todelete;
}
void deleteNode(node*&head,int val)
{
    if(head==NULL)
    {
        deleteHead(head);
        return;
    }
    node* temp = head;
    while(temp->next->data!=val)
    {
        temp = temp->next;

    }
    node* todelete = temp->next;
    temp->next= temp->next->next;
    delete todelete;
}
//* reversal a linked list
node* reverse(node*&head)
{
    node* prevnode =NULL;
    node* currnode = head;
    node* nextnode;
    while(currnode!=NULL)
    {
        nextnode = currnode->next;
        currnode->next = prevnode;

        prevnode = currnode;
        currnode = nextnode;

    }
    return prevnode;
}
//* reversing a linked list using reccursion
node* reverselinkedlistRecurrsion(node* &head)
{
    if(head==NULL || head->next == NULL)
    {
        return head;
    }
    node* newhead = reverselinkedlistRecurrsion(head->next);
    head->next->next = head;
    head->next = NULL;
    return newhead;
}
// node* reverRecurrsion(node* &head)
// {
//     if(head==NULL || head->next==NULL)
//     {
//         return head;
//     }
//     node* newhead = reverRecurrsion(head->next);
//     head->next->next = head;
//     head->next = NULL;
//     return newhead;
// }
// node* reverRecurrsion2(node* &head)
// {
//     if(head==NULL || head->next == NULL){
//         return head;
//     }
//     node* newhead = reverRecurrsion2(head->next);
//     head->next->next = head;
//     head->next->next = head;
//     head->next = NULL;
//     return newhead;
// }
node* reverseRecurrsion(node* &head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    node* newhead = reverseRecurrsion(head->next);
    head->next->next = head;
    head->next = NULL;
    return newhead;
}
//* reverse k node
node* reverseKnode(node* &head,int k)
{   
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;
    int count = 0;
    while(currptr!=NULL && count<k)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
        count++;
    }
    if(nextptr!=NULL)
    {
        head->next = reverseKnode(nextptr,k);
    }
    return prevptr;
}
node* reversek(node* &head,int k)
{
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;
    int count = 0;
    while(currptr!=NULL && count<k)
    {
        nextptr = currptr->next;
        currptr->next=prevptr;

        prevptr = currptr;
        currptr = nextptr;
        count++;

    }
    if(nextptr!=NULL)
    {
        head->next = reversek(nextptr,k);
    }
    return prevptr;
}
int main()
{

    return 0;
}