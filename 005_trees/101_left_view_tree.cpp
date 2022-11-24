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
//* sumreplacement
// void sumReplace(Node* root){
//     if(root==NULL){
//         return;
//     }
//     sumReplace(root->left);
//     sumReplace(root->right);
//     if(root->left != NULL){
//         root->data += root->left->data;
//     }
//     if(root->right!=NULL){
//         root->data += root->right->data;
//     }
// }
void sumReplace(Node* root){
    if(root==NULL){
        return;
    }
    sumReplace(root->left);
    sumReplace(root->right);
    if(root->left!=NULL){
        root->data += root->left->data;
    }
    if(root->right!=NULL){
        root->data+= root->right->data;
    }
}
//* right view of a binary tree: timecomplexity O(n)
void rightView(Node* root){
    if(root==NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        int n = q.size();
        for(int i=0;i<n;i++){
            Node* curr = q.front();
            q.pop();
            if(i==n-1){
                cout<<curr->data<<" ";
            }
            if(curr->left!=NULL){
                q.push(curr->left);
            }
            if(curr->right !=NULL){
                q.push(curr->right);
            }
        }
    }
}
//* left view of a binary tree
void leftView(Node* root){
    if(root == NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);
    
    while(!q.empty()){
        int n = q.size();
        for(int i=1;i<=n;i++){
            Node* temp = q.front();
            q.pop();
            if(i==1){
                cout<<temp->data<<" ";
            }
            if(temp->left!=NULL){
                q.push(temp->left);
            }
            if(temp->right!=NULL){
                q.push(temp->right);
            }
        }
    }

}
int main()
{
    int pdr[]={1,2,4,3,5};
    int indr[] ={4,2,1,5,3};
    //* building the tree
    Node* root = buildTree(pdr,indr,0,4);
    // inorderPrint(root);
    // sumReplace(root);
    // cout<<endl;
    inorderPrint(root);
    cout<<endl;
    rightView(root);
    cout<<endl;
    leftView(root);
    return 0;
}