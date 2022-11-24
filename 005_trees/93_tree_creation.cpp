//* using preorder and inorder
#include"bits/stdc++.h"
using namespace std;
//* algorithms
//*1. pick an element form preorder and create a node
//*2. increment preorder idx
//*3. search for picked element's pos in inorder
//*4. call to build left subtree from inorder's 0 to pos-1
//*5. cll to build right subtree from inorder pos+1 to n
//*6. return the node
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
int search(int inorder[],int start,int end,int curr)
{
    for(int i=start;i<=end;i++)
    {
        if(inorder[i]==curr)
        {
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
node* buildTree(int preorder[],int inorder[],int start,int end)
{
    static int idx=0;
    if(start>end)
    {
        return NULL;
    }
    int curr = preorder[idx];
    idx++;
    node* n = new node(curr);
    if(start==end)
    {
        return n;
    }
    int pos = search(inorder,start,end,curr);
    n->left = buildTree(preorder,inorder,start,pos-1);
    n->right = buildTree(preorder,inorder,pos+1,end);
    return n;
}
int main()
{
    int pdr[]={1,2,4,3,5};
    int indr[] ={4,2,1,5,3};
    //* building the tree
    node* root = buildTree(pdr,indr,0,4);
    inorderPrint(root);
    return 0;
}