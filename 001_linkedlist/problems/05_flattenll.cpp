#include"bits/stdc++.h"
using namespace std;
class node{
public:
    int data;
    node* next;
    node* down;
    node(int val){
        data = val;
        next = NULL;
        down = NULL;
    }
};
node* merge(node* &head1,node* &head2){
    if(head1==NULL){
        return head2;
    }
    if(head2==NULL){
        return head1;
    }
    node* result;
    if(head1->data < head2->data){
        result = head1;
        result->down =merge(head1->down,head2);
    }else{
        result = head2;
        result->down = merge(head1,head2->down);
    }
    result->next = NULL;
    return result;

}
node* flatten(node* root){
    if(root==NULL || root->next==NULL){
        return root;
    }
    root->next = flatten(root->next);
    root = merge(root,root->next);
    return root;
}
int main()
{
    
    return 0;
}