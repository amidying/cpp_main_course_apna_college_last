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
void zizagtraversal(struct node* root)
{
    // if null then return
    if (!root)
        return;
 
    // declare two stacks
    stack<node*> currentlevel;
    stack<node*> nextlevel;
 
    // push the root
    currentlevel.push(root);
 
    // check if stack is empty  
    bool lefttoright = true;
    while (!currentlevel.empty()) {
 
        // pop out of stack
        struct node* temp = currentlevel.top();
        currentlevel.pop();
 
        // if not null
        if (temp) {
 
            // print the data in it
            cout << temp->data << " ";
 
            // store data according to current
            // order.
            if (lefttoright) {
                if (temp->left)
                    nextlevel.push(temp->left);
                if (temp->right)
                    nextlevel.push(temp->right);
            }
            else {
                if (temp->right)
                    nextlevel.push(temp->right);
                if (temp->left)
                    nextlevel.push(temp->left);
            }
        }
 
        if (currentlevel.empty()) {
            lefttoright = !lefttoright;
            swap(currentlevel, nextlevel);
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
    // inorderPrint(root);
    zizagtraversal(root);
    return 0;
}