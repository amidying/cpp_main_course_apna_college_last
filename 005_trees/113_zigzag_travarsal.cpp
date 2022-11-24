#include"bits/stdc++.h"
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
//********************************************************************************************************************************
void zigzag_traversal(node* root){
    if(root==NULL){
        return;
    }
    stack<node*> currlevel;
    stack<node*> nextlevel;
    bool leftToRight = true;

    //* 1st task
    currlevel.push(root);
    while(!currlevel.empty()){
        node* temp = currlevel.top();
        currlevel.pop();
        if(temp){
            cout<<(temp->data)<<" ";

            if(leftToRight){
                if(temp->left){
                    nextlevel.push(temp->left);
                }
                if(temp->right){
                    nextlevel.push(temp->right);
                }
            }
            // right to left
            else{
                if(temp->right){
                    nextlevel.push(temp->right);
                }
                if(temp->left){
                    nextlevel.push(temp->left);
                }
            }
        }
        if(currlevel.empty()){
            leftToRight = !leftToRight;
            swap(currlevel,nextlevel);
        }
    }
}
//*****************************************************************************************************************************

void inorderPrint(node* root){
    if(root==NULL){
        return;
    }
    inorderPrint(root->left);
    cout<<root->data<<" ";
    inorderPrint(root->right);
}
//! inorder of bst is always sorted
int main(){
    node* root = new node(12);
    root->right = new node(15);
    root->left = new node(9);
    root->left->left = new node( 5);
    root->left->right = new node(10);
    zigzag_traversal(root);
    return 0;
}