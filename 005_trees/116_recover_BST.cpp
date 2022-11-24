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
//! the following code has some issues to be fiexd
//********************************************************************************************************************************
void swaps(node* root1,node* root2){
    node* temp = root1;
    root1 = root2;
    root2 = root1;
}
void calcPointers(node* root,node** first,node** mid,node** last,node** prev){
    if(root==NULL){
        return;
    }

    calcPointers(root->left,first,mid,last,prev);
    if(*prev && root->data <((*prev)->data)){
        if(!*first){
            *first = *prev;
            *mid = root;
        }else{
            *last = root;
        }
    }
    *prev = root;
    calcPointers(root->right,first,mid,last,prev);
}
void restoreBST(node* root){
    node* first,*mid,*last,*prev;
    first=NULL;
    mid=NULL;
    last = NULL;
    prev=NULL;
    calcPointers(root,&first,&mid,&last,&mid);
    
    // case 1
    if(first && last){
        swaps(&(first->data),&(last->data));
    }
    else if(first && mid){
        swaps(&(first->data),&(mid->data));
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
/*
                6
            9       3
        1       2       13    
*/
int main(){
    node* root = new node(6);
    root->left = new node(9);
    root->right = new node(3);
    root->left->left =new node(1);
    root->left->right =new node(2);
    root->right->right = new node(13);
    return 0;
}