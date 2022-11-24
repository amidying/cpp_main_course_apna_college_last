// #include <iostream>
// using namespace std;

// struct Node
// {
//     int data;
//     Node* left;
//     Node* right;
//     Node(int val)
//     {
//         data = val;
//         left = NULL;
//         right=NULL;
//     }
// };
// int main(){
//     struct Node* root = new Node(1);
//     root->left=new Node(2);
//     root->right = new Node(3);
//     return 0;
// }

// // * tree traversal
// #include"bits/stdc++.h"
// using namespace std;
// struct Node{
//     int data;
//     Node* left;
//     Node* right;
//     Node(int val)
//     {
//         data = val;
//         left = NULL;
//         right=NULL;
//     }
// };
// void preorder(struct Node*& root)
// {
//     if(root==NULL)
//     {
//         return;
//     }
//     cout<<root->data<<" ";
//     preorder(root->left);
//     preorder(root->right);
// }
// void inorder(struct Node*& root)
// {
//     if(root==NULL)
//     {
//         return;
//     }
//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);
// }
// void postorder(struct Node*& root)
// {
//     if(root==NULL)
//     {
//         return;
//     }
//     postorder(root->left);
//     postorder(root->right);
//     cout<<root->data<<" ";
// }
// int main(){
//     struct Node* root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left= new Node(4);
//     root->left->right = new Node(5);
//     root->right->left= new Node(6);
//     root->right->right = new Node(7);

//     preorder(root);
//     cout<<endl;
//     inorder(root);
//     cout<<endl;
//     postorder(root);
//     cout<<endl;
//     return 0;
// }


// #include"bits/stdc++.h"
// using namespace std;
// //* creating the node
// struct Node
// {
//     int data;
//     Node* left;
//     Node* right;
//     Node(int val)
//     {
//         data = val;
//         left = NULL;
//         right = NULL;
//     }
// };
//* traversing the node
//* 1. preorder
// void preorder(struct Node* &root)
// {
//     if(root==NULL)
//     {
//         return;
//     }
//     cout<<root->data<<" ";
//     preorder(root->left);
//     preorder(root->right);
// }

// //* 2. postorder
// void inorder(struct Node* &root)
// {
//     if(root==NULL)
//     {
//         return;
//     }
//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);
// }
// //* 3. post order tree
// void postorder(struct Node* &root)
// {
//     if(root == NULL)
//     {
//         return;
//     }
//     postorder(root->left);
//     postorder(root->right);
//     cout<<root->data<<" ";

// }
// int main()
// {
//     struct Node* root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);
//     root->right->left = new Node(6);
//     root->right->right = new Node(7);
//     preorder(root);
//     cout<<endl;
//     inorder(root);
//     cout<<endl;
//     postorder(root);
//     cout<<endl;
//     return 0;
// }
// #include"bits/stdc++.h"
// using namespace std;
// //* creating the node
// struct Node
// {
//     int data;
//     Node* left;
//     Node* right;
//     Node(int val)
//     {
//         data = val;
//         left = NULL;
//         right = NULL;
//     }
// };
// int search(int inorder[],int start,int end,int val)
// {
//     for(int i=start;i<=end;i++)
//     {
//         if(inorder[i]==val){
//             return i;
//         }
//     }
//     return -1;
// }
// void inorderPrint(node* root)
// {
//     if(root==NULL){
//         return;
//     }
//     inorderPrint(root->left);
//     cout<<root->data<<" ";
//     inorderPrint(root->right);
// }
// node* buildTree(int postorder[],int inorder[],int start,int end)
// {
//     static int idx = end;
//     if(start>end)
//     {
//         return NULL;
//     }
//     int val = postorder[idx];
//     idx--;
//     node* curr = new node(val);
//     if(start==end){
//         return curr;
//     }
//     int pos = search(inorder,start,end,val);
//     curr->right = buildTree(postorder,inorder,pos+1,end);
//     curr->left = buildTree(postorder,inorder,start,pos-1);
//     return curr;
// }

// int main(){
//     int postorder[]={4,2,5,3,1};
//     int inorder[]={4,2,1,5,3};
//     node* root = buildTree(postorder,inorder,0,4);
//     inorderPrint(root);
//     cout<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// struct Node
// {
//     int data;
//     Node* left;
//     Node* right;
//     Node(int val)
//     {
//         data = val;
//         left = NULL;
//         right = NULL;
//     }
// };
// /*

//         1
//     2       3
// 4      5   6    7

// 0*/
// // ?1. preorder
// // ?2. inorder
// // ?3. postorder
// void preorder(struct Node*& root)
// {
//     if(root==NULL)
//     {
//         return;
//     }
//     cout<<root->data<<" ";
//     preorder(root->left);
//     preorder(root->right);
// }
// void inorder(struct Node*& root)
// {
//     if(root==NULL)
//     {
//         return;
//     }
//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);
// }
// void postorder(struct Node*& root)
// {
//     if(root==NULL)
//     {
//         return;
//     }
//     postorder(root->left);
//     postorder(root->right);
//     cout<<root->data<<" ";
// }
// //***************************************************************************************************
// Node* lca(Node* root,int n1,int n2){
//     if(root==NULL){
//         return NULL;
//     }
//     if(root->data==n1 || root->data==n2){
//         return root;
//     }
//     Node* left = lca(root->left,n1,n2);
//     Node* right = lca(root->right,n1,n2);
    
//     if(left!=NULL && right!=NULL){
//         return root;
//     }
//     if(left===NULL && right==NULL){
//         return NULL;
//     }
//     if(left!=NULL){
//         return lca(root->left,n1,n2);
//     }
//     return lca(root->right,n1,n2);
// }
// //***************************************************************************************************
// int main(){
//     struct Node* root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left= new Node(4);
//     root->left->right = new Node(5);
//     root->right->left= new Node(6);
//     root->right->right = new Node(7);

//     preorder(root);
//     cout<<endl;
//     inorder(root);
//     cout<<endl;
//     postorder(root);
//     cout<<endl;
//     cout<<distanceBetweenNodes(root,2,3)<<endl;
//     return 0;
// }


//* distance between two nodes
// #include"bits/stdc++.h"
// using namespace std;
// struct Node{
//     int data;
//     Node* left;
//     Node* right;
//     Node(int val){
//         data = val;
//         left = NULL;
//         right = NULL;
//     }
// };
// //* build tree first
// int search(int inorder[],int start,int end,int curr){
//     for(int i=start;i<=end;i++){
//         if(curr==inorder[i]){
//             return i;
//         }
//     }
//     return -1;
// }
// Node* buildTree(int preorder[],int  inorder[],int start,int end){
//     static int idx=0;
//     if(start>end){
//         return NULL;
//     }
//     int curr=preorder[idx];
//     idx++;
//     int pos = search(inorder,start,end,curr);
//     Node* n = new Node(curr);
//     if(start==end){
//         return n;
//     }
//     n->left = buildTree(preorder,inorder,start,pos-1);
//     n->right = buildTree(preorder,inorder,pos+1,end);
//     return n;

// }
// //* preorder print
// void inorderPrint(Node* root){
//     if(root==NULL){
//         return;

//     }
//     inorderPrint(root->left);
//     cout<<root->data<<" ";
//     inorderPrint(root->right);
// }
// //* level order traversal
// void printLevelOrder(Node* p){
//     if(p==NULL){
//         return;
//     }
//     queue<Node*> q;
//     q.push(p);
//     q.push(NULL);
//     while(!q.empty()){
//         Node* n = q.front();
//         q.pop();
//         if(n!=NULL){
//             cout<<n->data<<" ";
//             if(n->left){
//             q.push(n->left);
//         }
//         if(n->right){
//             q.push(n->right);
//         }
//         }
//         else if(!q.empty()){
//             q.push(NULL);
//         }cout<<endl;
        
//     }
// }
// //* count all nodes

// int main(){
//     int preorder[]={1,2,4,5,3,6,7};
//     int inorder[]={4,2,5,1,3,6,7};
//     Node* root = buildTree(preorder,inorder,0,6);
//     inorderPrint(root);
//     cout<<endl;
//     printLevelOrder(root);
//     return 0;
// }

#include<iostream>
using namespace std;

int main(){
    cout<<"hello world"<<endl;
    return 0;
}