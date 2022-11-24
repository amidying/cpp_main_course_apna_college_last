// #include <iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
//     Node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };
// void insertAtTail(Node* &head,int val)
// {
//     Node* n = new Node(val);
//     if(head==NULL)
//     {
//         head = n;
//         return;
//     }
//     Node* temp = head;
//     while (temp->next!=NULL)
//     {
//         temp = temp->next;
//     }
//     temp->next=n;
    
// }
// void displayValue(Node* head)
// {
//     Node* temp=head;
//     while(temp!=NULL)
//     {
//         cout<<temp->next<<"-->";
//         temp=temp->next;
//     }
//     cout<<"NULL"<<endl;
// }
// void insertAtHead(Node* &head,int val)
// {
//     Node* n = new Node(val);
//     n->next=head;
//     head=n;
// }
// bool search(Node*&head,int val)
// {
//     Node* temp = head;
//     while(temp!=NULL)
//     {
//         if(temp->data==val)
//         {
//             return true;
//         }
//     }
//     return false;
// }

// int main(){
    
//     return 0;
// }


