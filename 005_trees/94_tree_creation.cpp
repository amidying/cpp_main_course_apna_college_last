//* postorder from inorder

//* Algorithms
//* 1. start from the end of postorder and pick and element to create a node
//* 2. decrement postorder idx 
//* 3. search for picked element's pos in inorder
//* 4. call subtree left function
//* 5. call subtree right function
//* 6. return node

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
int search(int inorder[],int start,int end,int val)
{
    for(int i=start;i<=end;i++)
    {
        if(inorder[i]==val){
            return i;
        }
    }
    return -1;
}
void inorderPrint(node* root)
{
    if(root==NULL)
    {
        return;
    }
    inorderPrint(root->left);
    cout<<root->data<<" ";
    inorderPrint(root->right);
}
//* start and end is the start of inorder
node* buildTree(int postorder[],int inorder[],int start,int end)
{
    static int idx = end;
    if(start>end){
        return NULL;
    }
    int val = postorder[idx];
    idx--;
    node* curr = new node(val);
    if(start==end)
    {
        return curr;
    }
    int pos = search(inorder,start,end,val);
    curr->right = buildTree(postorder,inorder,pos+1,end);
    curr->left = buildTree(postorder,inorder,start,pos-1);
    return curr;

}

int main(){
    int postorder[]={4,2,5,3,1};
    int inorder[]={4,2,1,5,3};
    node* root = buildTree(postorder,inorder,0,4);
    inorderPrint(root);
    cout<<endl;
    return 0;
}
//! for a complete binary tree it is possible to construct a tree using preorder and postorder
//! otherwise it is not possible to construct a tree using preorder and postorder