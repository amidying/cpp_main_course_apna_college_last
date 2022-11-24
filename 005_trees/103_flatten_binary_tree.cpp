#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node* left;
    Node* right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
/*

        1
    2       3
4      5   6    7

0*/
// ?1. preorder
// ?2. inorder
// ?3. postorder
void preorder(struct Node*& root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(struct Node*& root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postorder(struct Node*& root)
{
    if(root==NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
//***************************************************************************************************
void flatten(Node* root){
    //* base case
    if(root==NULL || (root->left==NULL && root->right==NULL)){
        return;
    }
    if(root->left!=NULL){
        flatten(root->left);
        Node* temp = root->right;
        root->right = root->left;
        root->left = NULL;

        Node* t = root->right;
        while(t->right!=NULL){
            t=t->right;
        }
        t->right = temp;
    }
    flatten(root->right);
}
//***************************************************************************************************
int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left= new Node(4);
    root->left->right = new Node(5);
    root->right->left= new Node(6);
    root->right->right = new Node(7);
    inorder(root);cout<<endl;
    flatten(root);
    inorder(root);
    return 0;
}