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
//1. if both root empty, return true
//2. if both root-are non empty:
                            // a. check the data are equal or not
                            // b. check if the left subtree are same or not
                            // c. check if the right subtree are same or not
//3. if a,b c are true return true else return false
bool isIdentical(node* root1,node* root2){
    if(root1==NULL && root2 == NULL){
        return true;
    }
    else if(root1==NULL || root2==NULL){
        return false;
    }
    else{
        bool cond1 = root1->data==root2->data;
        bool cond2 = isIdentical(root1->left,root2->left);
        bool cond3 = isIdentical(root1->right,root2->right);
        if(cond1 && cond2 && cond3 ){
            return true;
        }
        return false;
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
    // zigzag_traversal(root);
    node* root2 = new node(12);
    root2->left = new node(5);
    root2->right = new node(15);
    cout<<isIdentical(root,root2)<<endl;
    return 0;
}