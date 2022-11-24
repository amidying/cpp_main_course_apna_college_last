// #include"bits/stdc++.h"
// using std::string;

// class node{
// public:
//     int data;
//     node* next; 

//     node(int val){
//         data = val;
//         next = NULL;
//     }   
// };
// void insertAtTail(node* &head,int val){
//     node* n = new node(val);
//     if(head==NULL){
//         head = n;
//         return;
//     }
//     node * temp = head;
//     while(temp->next !=NULL){
//         temp = temp->next;
//     }
//     temp->next = n;
// }
// void displayValue(node* &head){
//     node* temp = head;
//     while(temp!=NULL){
//         std::cout<<temp->data<<"->";
//         temp = temp->next;
//     }
//     std::cout<<"NULL"<<std::endl;
// }
// void insertATHead(node* &head,int val){
//     node* n = new node(val);
//     n->next = head;
//     head = n;
// }
// bool search(node* head,int key){
//     node* temp = head;
//     while(temp!=NULL){
//         if(temp->data==key){
//             return true;
//         }
//         temp = temp->next;
//     }
//     return false;
// }
// int main(){
//     node* head = NULL;
//     insertAtTail(head,1);
//     insertATHead(head,2);
//     displayValue(head);
//     std::cout<<search(head,4)<<std::endl;
//     std::cout<<search(head,1)<<std::endl;

//     return 0;
// }


// #include <iostream>
// #include"bits/stdc++.h"
// // using std::string;
// using namespace std;
// class node{
// public:
//     int data;
//     node* next;
//     node(int val){
//         data = val;
//         next = NULL;
//     }
// };
// void insertAtTail(node* &head,int val){

//     node* n = new node(val);
//     if(head==NULL){
//         head=n;
//         return;
//     }
//     node* temp = head;
//     while(temp-> next != NULL){
//         temp = temp-> next;
//     }
//     temp->next=n;
// }
// void display(node* head){
//     node* temp=head;
//     while(temp != NULL){
//         std::cout<<(temp->data)<<"->";
//         temp=temp->next;
//     }
//     std::cout<<"NULL"<<std::endl;
// }
// void insertAthead(node* &head,int val){
//     node* n = new node(val);
//     n->next=head;
//     head=n;
// }
// bool search(node* head,int key){
//     node* temp=head;
//     while(temp!=NULL){
//         if(temp->data==key){
//             return true;
//         }
//         temp = temp->next;
//     }
//     return false;
// }
// int main(){
//     node* head = NULL;
//     insertAtTail(head,1);
//     insertAtTail(head,2);
//     insertAtTail(head,3);
//     insertAthead(head,4);
//     display(head);
//     cout<<search(head,4)<<endl;
//     cout<<search(head,3)<<endl;
//     return 0;
// }

// #include <iostream>
// #include"bits/stdc++.h"
// // using namespace std;
// class node{
// public:
//     int data;
//     node* next;
//     node(int val){
//         data = val;
//         next = NULL;
//     }
// };
// void insertAtTail(node* &head,int val){
//     node* n = new node(val);
// }
// int main(){
    
//     return 0;
// // }

// #include<iostream>

// class node{
// public:
//     int data;
//     node* next;
//     node(int val){
//         data = val;
//         next = NULL;
//     }
// };
// void insertAtTail(node* &head,int val){
//     node* n = new node(val);
//     if(head==NULL){
//         head = n;
//         return;
//     }
//     node* temp = head;
//     while(temp->next != NULL){
//         temp = temp->next;
//     }
//     temp->next=n;
// }
// void display(node* head){
//     node* temp = head;
//     while(temp!= NULL){
//         std::cout<<temp->data<<"->";
//         temp = temp->next;
//     }
//     std::cout<<"NULL"<<std::endl;
// }
// void insertAtHead(node* &head,int val){
//     node* n = new node(val);
//     n->next=head;
//     head=n;
// }
// bool search(node* head,int key){
//     node* temp=head;
//     while(temp != NULL){
//         if(temp->data==key){
//             return true;
//         }
//         temp = temp->next;
//     }
//     return false;
// }
// void deleteAtHead(node* &head){
//     node* todelete = head;
//     head = head->next;
//     delete todelete;
// }
// void deletion(node* &head,int val){
//     if(head==NULL){
//         return;
//     }
//     if(head->next==NULL){
//         deleteAtHead(head);
//         return;
//     }
//     node* temp = head;
//     while(temp->next->data != val){
//         temp=temp->next;
//     }
//     node* todelete = temp->next;
//     temp->next=temp->next->next;
//     delete todelete;
// }

// // reverse a node
// node* reverse(node* &head){
//     node* prevptr = NULL;
//     node* currptr = head;
//     node* nextptr;
//     while(currptr != NULL){
//         nextptr = currptr->next;
//         currptr->next=prevptr;

//         prevptr = currptr;
//         currptr = nextptr;
//     }
//     return prevptr;
// }
// node* reverseRecursion(node* head){
//     if(head == NULL || head->next == NULL){
//         return head;
//     }
//     node* newhead = reverseRecursion(head->next);
//     head->next->next = head;
//     head->next=NULL;
//     return newhead;
// }
// int main(){
//     node* head=NULL;
//     insertAtTail(head,1);
//     insertAtTail(head,2);
//     insertAtTail(head,3);
//     insertAtHead(head,4);
//     display(head);
//     std::cout<<search(head,3)<<std::endl;
//     std::cout<<search(head,5)<<std::endl;
//     deleteAtHead(head);
//     display(head);
//     return 0;
// }

// first creat node
// #include<iostream>

// class node{
// public:
//     int data;
//     node* next;
//     node(int val){
//         data = val;
//         next = NULL;
//     }
// };

// void insertAtTail(node* &head,int val){
//     node* n = new node(val);
//     if(head == NULL){
//         head = n;
//         return;
//     }
//     node* temp = head;
//     while(temp->next !=NULL){
//         temp=temp->next;
//     }
//     temp->next=n;
// }
// void display(node* head){
//     node* temp = head;
//     while(temp != NULL){
//         std::cout<<temp->data<<"->";
//         temp = temp->next;
//     }
//     std::cout<<"NULL"<<std::endl;
// }
// int main(){
//     node* head=NULL;
//     insertAtTail(head,1);
//     display(head);
//     return 0;
// }

// #include<iostream>

// class node{
// public:
//     int data;
//     node* next;
//     node(int val){
//         data = val;
//         next = NULL;
//     }

// };
// void inseartAtTail(node* &head,int val){
//     node* n = new node(val);
//     if(head==NULL){
//         head=n;
//         return;
//     }
//     node* temp = head;
//     while(temp != NULL){
//         temp=temp->next;
//     }
//     temp->next=n;

// }
// void display(node* head){
//     node* temp=head;
//     while(temp!=NULL){
//         std::cout<<temp->data<<"->";
//         temp=temp->next;
//     }
//     std::cout<<"NULL"<<std::endl;
// }

// int main(){
//     node* head = NULL;
//     inseartAtTail(head,1);
//     display(head);
//     return 0;
// }

// #include<iostream>

// class node{
// public:
//     int data;
//     node* next;
//     node(int val){
//         data = val;
//         next = NULL;
//     }

// };
// void inseartAtTail(node* &head,int val){
//     node* n = new node(val);
//     if(head==NULL){
//         head = n;
//         return;
//     }
//     node* temp = head;
//     while(temp!=NULL){
//         temp=temp->next;
//     }
//     temp->next=n;
// }
// void display(node* head){
//     node* temp=head;
//     while(temp!=NULL){
//         std::cout<<temp->data<<"->";
//         temp=temp->next;
//     }
//     std::cout<<"NULL"<<std::endl;
// }
// void insearAtHead(node* &head,int val){
//     node* n = new node(val);
//     head->next=head;
//     head=n;
// }
// bool search(node* head,int key){
//     node* temp=head;
//     while(temp!=NULL){
//         if(temp->data==key){
//             return true;
//         }
//         temp=temp->next;
//     }
//     return false;
// }
// void deleteAtHead(node* &head){
//     node* todelete = head;
//     head = head->next;
//     delete todelete;
// }
// // delete node
// void deletion(node* &head,int val){
//     if(head==NULL){
//         return;
//     }
//     if(head->next==NULL){
//         deleteAtHead(head);
//         return;

//     }
//     node* temp=head;
//     while(temp->next->data!=val){
//         temp= temp->next;
//     }
//     node* todelete = temp->next;
//     temp->next = temp->next->next;
//     delete todelete;
// }
// int main(){
//     node* head = NULL;

//     return 0;
// }

// #include<iostream>

// class node{
// public:
//     int data;
//     node* next;
//     node(int val){
//         data = val;
//         next = NULL;
//     }
// };
// void insertAtTail(node* &head,int val){
//     node* n = new node(val);
//     if(head==NULL){
//         head = n;
//         return;
//     }
//     node* temp =head;
//     while(temp->next!=NULL){
//         temp=temp->next;
//     }
//     temp->next = n;
// }
// void display(node* head){
//     node* temp=head;
//     while (temp!=NULL)
//     {
//         std::cout<<temp->data<<"->";
//         temp=temp->next;
//     }
//     std::cout<<"NULL"<<std::endl;
    
// }
// void insertAtHead(node* &head,int val){
//     node* n = new node(val);
//     n->next=head;
//     head = n;
// }
// bool search(node* head,int key){
//     node* temp = head;
//     while(temp!=NULL){
//         if(temp->data==key){
//             return true;
//         }
//     }
//     return false;
// }
// void deleteAtHead(node* &head){
//     node* todelete = head;
//     head = head->next;
//     delete todelete;
// }
// void deletion(node* &head,int val){
//     if(head==NULL){
//         return;
//     }
//     if(head->next==NULL){
//         deleteAtHead(head);
//         return;
//     }
//     node* temp =head;
//     while(temp->next->data != val){
//         temp = temp->next;
//     }
//     node* todelete = temp->next;
//     temp->next = temp->next->next;
//     delete todelete;
// }
// // reverse a linked list

// node* reverse(node* &head){
//     node* prevptr =NULL;
//     node* currptr = head;
//     node* nextptr;
//     while(currptr!=NULL){
//         nextptr = currptr->next;
//         currptr->next = prevptr;

//         prevptr = currptr;
//         currptr = nextptr;
//     }
//     return prevptr;
// }
// node* reverseRecursive(node* &head){
//     if(head==NULL || head->next==NULL){
//         return head;
//     }
//     node* newhead = reverseRecursive(head->next);
//     head->next->next = head;
//     head->next = NULL;
//     return newhead;
// }
// // reverse k nodes
// node* reverseK(node* &head,int k){
//     node* prevptr = NULL;
//     node* currptr = head;
//     node* nextptr;
//     int count =0;
//     while(currptr!=NULL && count <k){
//         nextptr = currptr->next;
//         currptr->next=prevptr;

//         prevptr =currptr;
//         currptr=nextptr;
//     }
//     if(nextptr!=NULL){
//         head->next=reverseK(nextptr,k);
//     }
//     return prevptr;
// }
// int main(){
//     node* head = NULL;
//     insertAtTail(head,1);
//     insertAtTail(head,2);
//     insertAtTail(head,3);
//     insertAtTail(head,4);
//     insertAtTail(head,5);
//     display(head);
//     // reverse(head);
//     // node* newhead = reverse(head);
//     node* newhead2 = reverseRecursive(head);
//     display(newhead2);
//     return 0;
// }

// #include<iostream>

// class node{
// public:
//     int data;
//     node* next;
//     node(int val){
//         data = val;
//         next = NULL;
//     }
// };

// void insertAtTail(node* &head,int val){
//     node* n = new node(val);
//     if(head==NULL){
//         head=n;
//         return;
//     }
//     node* temp=head;
//     while(temp->next!=NULL){
//         temp = temp->next;
//     }
//     temp->next=n;
// }
// void display(node* head){
//     node* temp = head;
//     while (temp!=NULL)
//     {
//         std::cout<<temp->next<<"->";
//     }
//     std::cout<<"NULL"<<std::endl;
    
// }
// void insertAtHead(node* &head,int val){
//     node* n = new node(val);
//     head->next=head;
//     head=n;
// }
// bool search(node* head,int key){
//     node* temp=head;
//     while (temp!=NULL)
//     {
//         if(temp->data==key){
//             return true;
//         }
//         temp=temp->next;
//     }
//     return false;    
// }
// void deleteHead(node* &head){
//     node* todelete = head;
//     head->next=head;
//     delete todelete;
// }
// void deletion(node* &head,int val){
//     if(head==NULL){
//         return;
//     }
//     if(head->next==NULL){
//         deleteHead(head);
//     }
//     node*temp = head;
//     while(temp->next->data!=NULL){
//         temp=temp->next;
//     }
//     node* todelete = temp->next;
//     temp->next=temp->next->next;
//     delete todelete;
// }

// int main(){

//     return 0;
// }

// #include<iostream>

// class node{
// public:
//     int data;
//     node* next;
//     node(int val){
//         data = val;
//         next=NULL;
//     }
// };
// void insertAtTail(node*&head,int val){
//     node* n = new node(val);
//     if(head==NULL){
//         head=n;
//         return;
//     }
//     node*temp=head;
//     while(temp->next!=NULL){
//         temp=temp->next;
//     }
//     temp->next=n;
// }
// void displayll(node* head){
//     node* temp=head;
//     while(temp!=NULL){
//         std::cout<<temp->data<<"->";
//         temp=temp->next;
//     }
//     std::cout<<"NULL"<<std::endl;
// }
// void insertAtHead(node*&head,int val){
//     node*n = new node(val);
//     n->next=head;
//     head=n;
// }
// bool search(node* head,int val){
//     node*temp=head;
//     while(temp!=NULL){
//         if(temp->data==val){
//             return true;
//         }
//         temp=temp->next;
//     }
//     return false;
// }
// void deleteHead(node*&head){
//     node* todelete = head;
//     head->next=head;
//     delete todelete;
// }
// void deletion(node*& head,int val){
//     if(head==NULL){
//         return;
//     }
//     if(head->next==NULL){
//         deleteHead(head);
//     }
//     node*temp=head;
//     while(temp->next->data!=val){
//         temp=temp->next;
//     }
//     node*todelete = temp->next;
//     temp->next=temp->next->next;
//     delete todelete;
// }
// // * reverse
// node* reverse(node*&head){
//     node*prevptr=NULL;
//     node*currptr = head;
//     node* nextptr;

//     while(currptr!=NULL){
//         nextptr=currptr->next;
//         currptr->next=prevptr;

//         prevptr=currptr;
//         currptr=nextptr;
//     }
//     return prevptr;
// }
// // * reccursion reverse
// // !node* reverseRecurssion(node* &head){
// //     if(head==NULL || head->next==NULL){
// //         return head;
// //     }
// //     node* newhead = reverseRecurssion(head->next);
// //     head->next->next=head;
// //     head->next=head;
// //     return newhead;
// // }

// // * reverse k node
// // node* reversek(node*&head,int k){
// //     node* prevptr = NULL;
// //     node* currptr = head;
// //     node* nextptr;
// //     int count=0;
// //     while(currptr!=NULL && count<k){
// //         nextptr=currptr->next;
// //         currptr->next=prevptr;

// //         prevptr=currptr;
// //         currptr=nextptr;
// //         count++;
// //     }
// //     if(nextptr!=NULL){
// //         head->next=reversek(nextptr, k);
// //     }
// //     return prevptr;
// // }

// node* reversek(node* &head,int k){
//     node* prevptr = NULL;
//     node* currptr = head;
//     node* nextptr;
//     int count =0;
//     while(currptr!=NULL and count<k){
//         nextptr= currptr->next;
//         currptr->next=prevptr;

//         prevptr=currptr;
//         currptr=nextptr;
//         count++;
//     }
//     if(nextptr!=NULL){
//         head->next= reversek(head,k);
//     }
//     return prevptr;
// }
// int main(){
//     int arr[5]={1,2,3,4,5};
//     node* head = NULL;
//     for(int i=0;i<5;i++){
//         insertAtTail(head,arr[i]);
//     }
//     // node*newhead = reverseRecurssion(head);
//     // reverseRecurssion()
//     // node* newhead = reverse(head);
//     // displayll(newhead);
//     node* newhead = reversek(head,2);
//     displayll(newhead);
//     return 0;
// }


// #include<iostream>
// using namespace std;

// class node{
// public:
//     int data;
//     node* next;
//     node(int val){
//         data = val;
//         next = NULL;
//     }
// };

// void inseratAtTail(node*&head,int val){
//     node* n = new node(val);
//     if(head == NULL){
//         head = n;
//         return;

//     }
//     node* temp = head;
//     while(temp->next!=NULL)
//     {
//         temp= temp->next;
//     }
//     temp->next = n;
// }
// void display(node* head)
// {
//     node* temp = head;
//     while (temp->next!=NULL)
//     {
//         cout<<temp->data<<">";
//         temp=temp->next;
//     }cout<<endl;
// }
// void insearAtHead(node*&head,int val){
//     node* n = new node(val);
//     n->next = head;
//     head=n;
// }
// bool search(node* head,int val){
//     node* temp = head;
//     while(temp!=NULL){
//         if(temp->data==val){
//             return true;
//         }
//         temp = temp->next;
//     }
//     return false;
// }
// void deleteHead(node*&head){
//     node* todelete = head;
//     head->next=head;
//     delete todelete;
// }
// void deletion(node*&head,int val){
//     if(head==NULL){
//         deleteHead(head);
//         return;
//     }
//     node* temp = head;
//     while(temp->next->data!=val){
//         temp=temp->next;
//     }
//     node* todelete = temp->next;
//     temp->next = temp->next->next;
//     delete todelete;

// }
// node* reverse(node* &head){
//     node* prevNode = NULL;
//     node* currNode = head;
//     node* nextNode;
//     while(currNode!=NULL){
//         nextNode = currNode->next;
//         currNode->next = prevNode;

//         prevNode = currNode;
//         currNode = nextNode;
//     }
//     return prevNode;
// }
// // ? reverse using recursion
// node* reverseRecur(node* &head){
//     if(head==NULL || head->next==NULL)
//     {
//         return head;
//     }
//     node* newHead = reverseRecur(head->next);
//     head->next->next = head;
//     head->next = head;
//     return newHead;
// }

// node* reverseK(node*&head,int k)
// {
//     node* prevptr = NULL;
//     node* currptr = head;
//     node* nextptr;
//     int count = 0;
//     while(currptr!=NULL && count<k){
//         nextptr = currptr->next;
//         currptr->next=prevptr;

//         prevptr= currptr;
//         currptr = nextptr;
//         count++;
//     }
//     if(nextptr!=NULL){
//         head->next=reverseK(nextptr,k);
//     }
//     return prevptr;
// }
// int length(node* head){
//     int l=0;
//     node* temp  = head;
//     while(temp!=NULL)
//     {
//         l++;
//         temp=temp->next;
//     }
//     return l;
// }
// node* kappend(node*&head,int k){
//     node*temp = head;
//     node*newhead ;
//     node*newTail;

//     int l1 = length(head);
//     k = k%l1;
//     int count = 1;
//     while(temp->next!=NULL){
//         if(count==l1-k){
//             newTail = temp;
//         }
//         if(count==l1-k+1){
//             newhead =temp;
//         }
//         temp=temp->next;
//         count++;
//     }
//     newTail->next=NULL;
//     temp->next = head;
//     return newhead;
// }
// int intersectionNode(node*&head1,node*&head2)
// {
//     int l1 = length(head1);
//     int l2 = length(head2);
//     int d=0;
//     node*ptr1;
//     node*ptr2;
//     if(l1>l2){
//         d = l1-l2;
//         ptr1 = head1;
//         ptr2 = head2;
//     }
//     else{
//         d = l2-l1;
//         ptr2 = head1;
//         ptr1 = head2;
//     }
//     while(d){
//         ptr1 = ptr1->next;
//         if(ptr1==NULL){
//             return -1;
//         }
//         d--;
//     }
//     while (ptr1!=NULL && ptr2 !=NULL)
//     {           
//         if(ptr1==ptr2){
//             return ptr1->data;
//         }
//         ptr1=ptr1->next;
//         ptr2= ptr2->next;
//     }
//     return -1;
    
// }
// void evenAfterOdd(node*&head)

// {
//     node* odd = head;
//     node* even = head->next;
//     node* evenStart = even;
//     while (odd->next!=NULL && even->next!=NULL)
//     {
//         odd->next = even->next;
//         odd = odd->next;
//         even->next = odd->next;
//         even = even->next;
//     }
//     odd->next = evenStart;
//     if(odd->next==NULL){
//         even ->next=NULL;
//     }
    

// }
// int main(){
//     node* head = NULL;
//     for(int i=0;i<10;i++)
//     {
//         inseratAtTail(head,i);
//     }
//     display(head);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class node{
// public:
//     int data;
//     node* next;
//     node(int val){
//         data = val;
//         next = NULL;
//     }
// };

// void inseartAtTail(node*&head,int val){
//     node* n = new node(val);
//     if(head==NULL){
//         head = n;
//         return;
//     }
//     node* temp=head;
//     while(temp->next!=NULL){
//         temp=temp->next;
//     }
//     temp->next=n;
// }
// void insertAtHead(node*&head,int val){
//     node*n = new node(val);
//     n->next =  head;
//     head=n;
// }
// void display(node* head){
//     node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<">";
//         temp=temp->next;
//     }cout<<"NULL"<<endl;
// }
// void deleteHead(node*&head){
//     node* todelete = head;
//     head ->next = head;
//     delete todelete;
// }
// void deletion(node*&head,int val){
//     if(head==NULL){
//         return;
//     }
//     if(head->next==NULL){
//         deleteHead(head);
//     }
//     node* temp = head;
//     while(temp->next->data!=val){
//         temp = temp->next;
//     }
//     node* todelete = temp->next;
//     temp->next=temp->next->next;
//     delete todelete;
// }
// node* reverse(node*&head){
//     node* prevptr = NULL;
//     node* currptr = head;
//     node* nextptr;
//     while(currptr!=NULL){
//         nextptr = currptr->next;
//         currptr->next = prevptr;

//         prevptr = currptr;
//         currptr = nextptr;
//     }
//     return prevptr;
// }
// node* reverseRecurssion(node*&head){
//     if(head==NULL || head->next==NULL){
//         return head;
//     }
//     node* newHead = reverseRecurssion(head->next);
//     head->next->next = head;
//     return newHead;
// }
// int main(){
//     node* head = NULL;
//     for(int i=0;i<5;i++){
//         inseartAtTail(head,i);
//     }
//     insertAtHead(head,6);
//     display(head);
//     return 0;
// }

// #include <iostream>
// #include <sstream>
// using namespace std;

// class Student{
// private:
//     int age;
//     string first_name;
//     string last_name;
//     int standard;
// public:
//     Student(int a,string fn,string ln,int stnd){
//         age = a;
//         first_name = fn;
//         last_name = ln;
//         standard = stnd;
//     }
//     void set_age(int a){
//         age = a;
//     }
//     void set_standard(int stnd){
//         standard = stnd;
//     }
//     void set_first_name(string fn){
//         first_name = fn;
//     }
//     void set_last_name(string ln){
//         last_name = ln;
//     }
//     // getters
//     void get_age(){
//         return age;
//     }
//     void get_last_name(){
//         return last_name;
//     }
//     void get_first_name(){
//         return first_name;
//     }
//     void get_standard(){
//         return standard;
//     }
//     void to_string(){
//         // return 
//     }
// };
// int main() {
//     int age, standard;
//     string first_name, last_name;
    
//     cin >> age >> first_name >> last_name >> standard;
    
//     Student st;
//     st.set_age(age);
//     st.set_standard(standard);
//     st.set_first_name(first_name);
//     st.set_last_name(last_name);
    
//     cout << st.get_age() << "\n";
//     cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
//     cout << st.get_standard() << "\n";
//     cout << "\n";
//     cout << st.to_string();
    
//     return 0;
// }


// #include<iostream>

// class node{
// public:
//     int data;
//     node* next;
//     node(int val){
//         data = val;
//         next=NULL;
//     }
// };
// void insertAtTail(node*&head,int val){
//     node* n = new node(val);
//     if(head==NULL){
//         head=n;
//         return;
//     }
//     node*temp=head;
//     while(temp->next!=NULL){
//         temp=temp->next;
//     }
//     temp->next=n;
// }
// void displayll(node* head){
//     node* temp=head;
//     while(temp!=NULL){
//         std::cout<<temp->data<<"->";
//         temp=temp->next;
//     }
//     std::cout<<"NULL"<<std::endl;
// }
// void insertAtHead(node*&head,int val){
//     node*n = new node(val);
//     n->next=head;
//     head=n;
// }
// bool search(node* head,int val){
//     node*temp=head;
//     while(temp!=NULL){
//         if(temp->data==val){
//             return true;
//         }
//         temp=temp->next;
//     }
//     return false;
// }
// void deleteHead(node*&head){
//     node* todelete = head;
//     head->next=head;
//     delete todelete;
// }
// void deletion(node*& head,int val){
//     if(head==NULL){
//         return;
//     }
//     if(head->next==NULL){
//         deleteHead(head);
//     }
//     node*temp=head;
//     while(temp->next->data!=val){
//         temp=temp->next;
//     }
//     node*todelete = temp->next;
//     temp->next=temp->next->next;
//     delete todelete;
// }
// node* reverse(node*&head){
//     node* prevptr=NULL;
//     node* currptr = head;
//     node* nextptr ;
//     while(currptr!=NULL){
//         nextptr=currptr->next;
//         currptr->next=prevptr;

//         prevptr = currptr;
//         currptr=nextptr;
//     }
//     return prevptr;

// }
// // reverse using recurssion
// node* reverseRecurssion(node*& head){
//     if(head==NULL || head->next){
//         return head;
//     }
//     node* newHead = reverseRecurssion(head->next);
//     head->next->next = head;
//     head->next = NULL;
//     return newHead;
// }
// ? reverse k nodes
// node* reversek(node* &head,int k){
//     node* prevptr = NULL;
//     node* currptr = head;
//     node* nextptr;
//     int count = 0;
//     node* temp = head;
//     while(temp->next->data!=k && count<k){
//         nextptr = currptr->next;
//         currptr->next = prevptr;

//         prevptr = currptr;
//         currptr = nextptr;
//         count++;
//     }
//     while(nextptr!=NULL){
//         head->next = reversek(nextptr,k);
//     }
//     return prevptr;
// }
// node* reversek(node* &head,int k){
//     node* prevptr = NULL;
//     node* currptr = head;
//     node* nextptr;
//     int count = 0;
//     while(currptr!=NULL && count<k){
//         nextptr = currptr->next;
//         currptr->next = prevptr;

//         prevptr = currptr;
//         currptr = nextptr;
//         count++;
//     }
//     while(nextptr!=NULL){
//         head->next = reversek(nextptr,k);
//     }
//     return prevptr;
// }
// // ? length of a linkedlist
// int length(node* head){
//     node* temp = head;
//     int count = 0;
//     while (temp!=NULL)
//     {
//         count++;
//         temp= temp->next;
//     }
//     return count;
    
// }
// // * append k node in the head;
// // node* kappend(node* &head,int k){
// //     node* temp = head;
// //     node* newhead;
// //     node* newTail;
// //     int l1 = length(head);
// //     k = k%l1;
// //     int count = 1;
// //     while(temp->next != NULL){
// //         if(count==l1-k){
// //             newTail = temp;
// //         }
// //         if(count== l1-k+1){
// //             newhead = temp;
// //         }
// //         temp = temp->next;
// //         count++;
// //     }
// //     newTail->next = NULL;
// //     temp->next = head;
// //     return newhead;
// // }

// int main(){
//     node* head = NULL;
//     for(int i=0;i<10;i++){
//         insertAtTail(head,i);
//     }
//     displayll(head);
//     node* newhead = reverseRecurssion(head);
//     displayll(newhead);
//     return 0;
// }


// #include"bits/stdc++.h"
// using namespace std;

// class Node{
// public:
//     int data;
//     Node* next;
//     Node(int val){
//         data = val;
//         next = NULL;
//     }
// };
// void insertAtTail(Node* &head,int val){
//     Node* n = new Node(val);
//     if(head==NULL){
//         head = n;
//         return;
//     }
//     Node* temp = head;
//     while(temp->next!=NULL){
//         temp = temp->next;
//     }
//     temp->next = n;
// }
// void displayValue(Node* head){
//     Node* temp = head;
//     while(temp!=NULL){
//         cout<<(temp->data)<<"->";
//         temp=temp->next;
//     }
//     cout<<"NULL"<<endl;
// }
// void insertAtHead(Node* &head,int val){
//     Node* n = new Node(val);
//     n->next = head;
//     head=n;
// }
// bool serarch(Node* head,int key){
//     Node* temp = head;
//     while(temp!=NULL){
//         if(temp->data==key){
//             return true;
//         }
//     }
//     return false;
// }
// void deleteHead(Node* &head){
//     Node* todelete = head;
//     head = head->next;
//     delete todelete;
// }
// void deletion(Node*& head,int val){
//     if(head==NULL){
//         return;
//     }
//     if(head->next==NULL){
//         deleteHead(head);
//         return;
//     }
//     Node* temp = head;
//     while(temp->next->data!=val){
//         temp=temp->next;
//     }
//     Node* todelete = temp->next;
//     temp->next = temp->next->next;
//     delete todelete;
// }
// //* reverse nodes
// Node* reverse(Node*&head){
//     Node* prevptr = NULL;
//     Node* currptr = head;
//     Node* nextptr;
//     while(currptr!=NULL){
//         nextptr = currptr->next;
//         currptr->next = prevptr;

//         prevptr = currptr;
//         currptr = nextptr;
//     }
//     return prevptr;
// }
// Node* reverseRecursion(Node*& head){
//     if(head==NULL || head->next==NULL){
//         return head;        
//     }
//     Node* newhead = reverseRecursion(head->next);
//     head->next->next = head;
//     head->next = NULL;
//     return newhead;
// }
// Node* reverseRecurssion2(Node*& head){
//     if(head==NULL || head->next==NULL){
//         return head;
//     }
//         Node* newHead = reverseRecurssion2(head->next);
//     head->next->next = head;
//     head->next = NULL;
//     return newHead;
// }
// Node* reverseKNodes(Node*& head,int k){
//     Node* prevptr = NULL;
//     Node* currptr = head;
//     Node* nextptr;
//     int count = 0;
//     while(currptr !=NULL && count<k){
//         nextptr = currptr->next;
//         currptr->next = prevptr;

//         prevptr = currptr;
//         currptr = nextptr;
//         count++;
//     }
//     if(nextptr !=NULL){
//         head->next = reverseKNodes(nextptr,k);
//     }
//     return prevptr;
// }
// Node* reverseK2(Node*& head,int k){
//     Node* prevptr = NULL;
//     Node* currptr = head;
//     Node* nextptr;
//     int count = 0;
//     while(currptr!=NULL  && count<k){
//         nextptr = currptr->next;
//         currptr->next = prevptr;

//         prevptr = currptr;
//         currptr = nextptr;
//         count++;
//     }
//     if(nextptr!=NULL){
//         head->next = reverseK2(nextptr,k);
//     }
//     return prevptr;
// }
// void makeCycle(Node* & head,int pos){
//     Node* temp = head;
//     Node* startNode;
//     int count = 1;
//     while(temp->next !=NULL){
//         if(count==pos){
//             startNode = temp;
//         }
//         temp=temp->next;
//         count++;
//     }
//     temp->next = startNode;
// }
// bool detectCycle(Node* &head){
//     Node* slow = head;
//     Node* fast = head;
//     while(fast!=NULL && fast->next->next!=NULL){
//         slow=slow->next;
//         fast=fast->next->next;
//         if(slow==fast)
//             return true;
//     }
//     return false;
// }
// void removeCycle(Node*& head){
//     Node* slow = head;
//     Node* fast = head;
//     do{
//         slow = slow->next;
//         fast = fast->next->next;
//     }while(slow!=fast);
//     fast = head;
//     while(slow->next != fast->next){
//         slow = slow->next;
//         fast = fast->next;
//     }
//     slow->next = NULL;
// }
// int main(){
//     Node* head = new Node(1);
//     // head->next = new Node(2);
//     insertAtTail(head,2);
//     insertAtTail(head,3);
//     insertAtTail(head,4);
//     displayValue(head);
    
//     return 0;
// }
// ! dubly linked list
#include"bits/stdc++.h"
using namespace std;
class Node{
public:
    int data;
    Node* prev;
    Node* next;
    Node(int val){
        data = val;
        prev = NULL;
        next=NULL;
    }
};
void insertAtHead(Node* &head,int val){
    Node* n =  new Node(val);
    head->next = head;
    while(head!=NULL){
        head->prev = n;
    }
    head = n;
}
void inseartAtTail(Node* &head,int val){
    Node* n = new Node(val);
    if(head==NULL){
        insertAtHead(head,val);
        return;
    }
    if(head->next==NULL){
        head->next = n;
    }
    Node* temp = head;
    while(temp->next!=NULL){
        temp= temp->next;
    }
    temp->next = n;
    n->prev = temp;
}
int length(Node* head){
    int l = 0;
    Node* temp = head;
    while(temp!=NULL){
        l++;
        temp = temp->next;
    }
    return l;
}
Node* kappend(Node*&head,int k){
    Node* temp = head;
    Node* newHead;
    Node* newTail;
    int l = length(head);
    k = k%l;
    int count = 1;
    while(temp->next!=NULL){
        if(count==l-k){
            newTail = temp;
        }
        if(count==l-k+1){
            newHead = temp;
        }
        temp = temp->next;
        count++;
    }
    newTail->next = NULL;
    temp->next = head;
}
int main()
{
    
    return 0;
}