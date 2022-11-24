
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
void printLevelOrder(node* root){
    if(root==NULL)
    {
        return;
    }
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* n = q.front();
        q.pop();
        if(n !=NULL){
            cout<<n->data<<" ";
            if(n->left){
                q.push(n->left);
            }
            if(n->left){
                q.push(n->right);
            }
        }else if(!q.empty()){
            q.push(NULL);
        }

    }
}
//* sum at level k
int sumAtK(node* root,int K){
    if(root==NULL){
        return -1;
    }
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    int level = 0;
    int sum = 0;
    while(!q.empty()){
        node* n = q.front();
        q.pop();
        if(n!=NULL){
            if(level==K){
                sum+= n->data;
            }
            if(n->left){
                q.push(n->left);
            }
            if(n->right){
                q.push(n->right);
            }
        }
        else if(!q.empty()){
            q.push(NULL);
            level++;
        }
    }
    return sum;
}
//* counts all the nodes in a binary tree
int countNodes(node* root){

    if(root==NULL){
        return 0;
    }
    return countNodes(root->left)+countNodes(root->right)+1;
}
//* sum of all the nodes of a binary tree
int sumNodes(node* root){

    if(root==NULL){
        return 0;
    }
    return sumNodes(root->left)+sumNodes(root->right)+root->data;
}
//***********************************************************************************************************************************
//* case 1
void printSubtree(node* root,int k){
    if(root==NULL || k<0){
        return ;
    }
    if(k==0){
        cout<<root->data<<" ";
        return;
    }
    printSubtree(root->left,k-1);
    printSubtree(root->right,k-1);
}
//* case 2
int printNodesAtK(node* root,node* target,int k){
    if(root==NULL){
        return -1;
    }
    if(root==target){
        printSubtree(root,k);
        return 0;
    }
    //* for left chile
    int dl = printNodesAtK(root->left,target, k);
    if(dl != -1){
        if(dl+1 == k){
            cout<<root->data<<" ";
        }else{
            printSubtree(root->right,k-dl-2);
        }
        return 1+dl;
    }
    //* for right child
    int dr = printNodesAtK(root->right,target, k);
    if(dr != -1){
        if(dr+1 == k){
            cout<<root->data<<" ";
        }else{
            printSubtree(root->left,k-dr-2);
        }
        return 1+dr;
    }
    return -1;
}
//***********************************************************************************************************************************
int main(){
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);

    return 0;
}