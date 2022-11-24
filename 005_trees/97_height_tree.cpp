#include"bits/stdc++.h"
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};
int search(int inorder[],int start,int end,int curr){
    for(int i=start;i<=end;i++){
        if(inorder[i]==curr)
            return i;
    }
    return -1;
}
void inorderPrint(Node* root){
    if(root==NULL){
        return;
    }
    inorderPrint(root->left);
    cout<<root->data<<" ";
    inorderPrint(root->right);
}
Node* buildTree(int preorder[],int inorder[],int start,int end){
    static int idx=0;
    if(start>end){
        return NULL;
    }
    int curr = preorder[idx];
    idx++;
    Node* n = new Node(curr);
    if(start==end){
        return n;
    }
    int pos = search(inorder,start,end,curr);
    n->left = buildTree(preorder,inorder,start,pos-1);
    n->right = buildTree(preorder,inorder,pos+1,end);
    return n;
    
}

int calcHeight(Node* root){
    if(root == NULL){
        return 0;
    }
    int lHeight = calcHeight(root->left);
    int rHeight = calcHeight(root->right);
    return max(lHeight,rHeight)+1;
}
//* calculating the diameter of a tree O(nsq)
/*
int calcDiameter(Node* root){

    if(root==NULL){
        return 0;
    }
    int lHeight = calcHeight(root->left);
    int rHeight = calcHeight(root->right);
    int currDiameter = lHeight+rHeight+1;

    int lDiameter = calcDiameter(root->left);
    int rDiameter = calcDiameter(root->right);

    return max(currDiameter,max(lDiameter,rDiameter));

}
*/
//* diameter calculation optimized O(n)
int calcDiameter(Node* root,int* height){
    if(root==NULL){
        *height=0;
        return 0;
    }
    int lh=0,rh = 0;
    int lD = calcDiameter(root->left,&lh);
    int rD = calcDiameter(root->right,&rh);
    int currD= lD+rD+1;
    *height = max(lh,rh)+1;
    return max(currD,max(lD,rD));
}
int main()
{
    int pdr[]={1,2,4,3,5};
    int indr[] ={4,2,1,5,3};
    //* building the tree
    Node* root = buildTree(pdr,indr,0,4);
    // inorderPrint(root);
    cout<<endl;
    cout<<calcHeight(root)<<endl;
    cout<<endl;
    // cout<<calcDiameter(root)<<endl;
    //* for second function
    int height = 0;
    cout<<calcDiameter(root,&height)<<endl;;
    return 0;
}