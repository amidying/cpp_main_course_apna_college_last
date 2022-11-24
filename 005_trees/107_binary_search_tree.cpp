
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
bool getPath(node* root,int key,vector<int> &path){
    if(root==NULL){
        return false;
    }
    path.push_back(root->data);
    if(root->data==key){
        return true;
    }
    if(getPath(root->left,key,path)||getPath(root->right,key,path)){
        return true;
    }
    path.pop_back();
    return false;
}
int lca(node* root,int n1,int n2){
    vector<int> path1,path2;
    if(!getPath(root,n1,path1)|| !getPath(root,n2,path2)){
        return -1;
    }
    int pc;//* pc = path changed
    for(pc=0;pc<path1.size() && path2.size();pc++){
        if(path1[pc]!=path2[pc]){
            break;
        }
    }
    return path1[pc-1];
}
//* another strategy
node* lca2(node* root,int n1,int n2){
    if(root==NULL){
        return NULL;
    }
    if(root->data==n1 || root->data==n2){
        return root;
    }
    node* leftlca=lca2(root->left,n1,n2);
    node* rightlca = lca2(root->right,n1,n2);
    if(leftlca && rightlca){
        return root;
    }
    if(leftlca!=NULL){
        return leftlca;
    }
    return rightlca;
}
//* maximum path sum of a binary tree
//! the code has a problem
int maxPathSumUtil(node* root,int ans){
    if(root==NULL){
        return 0;
    }
    int left = maxPathSumUtil(root->left,ans);
    int right = maxPathSumUtil(root->right,ans);

    int nodeMax = max(max(root->data,root->data+left+right),max(root->data+left,root->data+right));
    ans = max(ans,nodeMax);
    int singlePathSum = max(root->data,max(root->data+left,root->data+right));
    return singlePathSum;
}
int maxPathSum(node* root){
    int  ans = INT_MIN;
    maxPathSumUtil(root,ans);

    return ans;
}
void inorderPrint(node* root){
    if(root==NULL){
        return;
    }
    inorderPrint(root->left);
    cout<<root->data<<" ";
    inorderPrint(root->right);
}
//***********************************************************************************************************************************
//* BST = binary search tree
node* insertBST(node* root,int val){
    if(root==NULL){
        return new node(val);
    }
    if(val< root->data){
        root->left = insertBST(root->left,val);
    }else{
        root->right = insertBST(root->right,val);
    }
    return root;
}
//***********************************************************************************************************************************
//! inorder of bst is always sorted
int main(){
    node* root = NULL;
    root = insertBST(root,5);
    insertBST(root,1);
    insertBST(root,3);
    insertBST(root,4);
    insertBST(root,2);
    insertBST(root,7);
    inorderPrint(root);
    return 0;
}