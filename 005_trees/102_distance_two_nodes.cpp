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
Node* LCA(Node* root,int n1,int n2){
    if(root==NULL){
        return NULL;
    }
    if(root->data==n1 || root->data==n2){
        return root;
    }
    Node* left = LCA(root->left,n1,n2);
    Node* right = LCA(root->right,n1,n2);
    //* first case
    if(left!=NULL && right!=NULL){
        return root;
    }
    //* second case
    if(left==NULL && right==NULL){
        return NULL;
    }
    if(left != NULL){
        return LCA(root->left,n1,n2);
    }
    return LCA(root->right,n1,n2);
}
int findDist(Node* root,int k,int dist){
    if(root==NULL){
        return -1;
    }
    if(root->data==k){
        return dist;
    }
    int left = findDist(root->left,k,dist+1);
    if(left!=-1){
        return left;
    }
    return findDist(root->right,k,dist+1);
}
// final distance
int distanceBetweenNodes(Node* root,int n1,int n2){
    Node* lca = LCA(root,n1,n2);

    //finding d1
    int d1 = findDist(lca,n1,0);
    int d2 = findDist(lca,n2,0);
    return d1+d2;
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

    preorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
    cout<<distanceBetweenNodes(root,2,3)<<endl;
    return 0;
}