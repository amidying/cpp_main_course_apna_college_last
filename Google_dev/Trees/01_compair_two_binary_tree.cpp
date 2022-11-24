#include"bits/stdc++.h"
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left= NULL;
        right = NULL;
    }
};
bool isSameTree(Node* root1,Node* root2)
{
    if(root1 == NULL && root2==NULL){
        return true;
    }
    if(root1==NULL || root2==NULL){
        return false;
    }
    if(root1->data != root2->data){
        return false;
    }
    return isSameTree(root1->left,root2->left) && isSameTree(root1->right,root2->right);
}
int main(){
    
    Node* root1 = new Node(1);
    root1->left = new Node(2);
    root1->right = new Node(3);
    Node* root2 = new Node(1);
    root2->left = new Node(2);
    root2->right = new Node(3);

    cout<<isSameTree(root1,root2)<<endl;
    return 0;
}