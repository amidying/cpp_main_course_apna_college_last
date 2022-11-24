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
//* tree travarsal
// void preorder(Node* & root){
//     if(root==NULL)
//     {
//         return;
//     }
//     cout<<root->data<<" ";
//     preorder(root->left);
//     preorder(root->right);
// }
// void inorder(Node* &root)
// {
//     if(root==NULL){
//         return;
//     }
//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);
// }
// void postorder(Node* &root){
//     if(root==NULL){
//         return;
//     }
//     postorder(root->left);
//     postorder(root->right);
//     cout<<root->data<<" ";
// }
//* tree creation using preorder and inorder
// int search(int inorder[],int start,int end,int curr){
//     for(int i=start;i<=end;i++){
//         if(inorder[i]==curr){
//             return i;
//         }
//     }
//     return -1;
// }
// void inorderPrint(Node* root){
//     if(root==NULL){
//         return;
//     }
//     inorderPrint(root->left);
//     cout<<root->data<<" ";
//     inorderPrint(root->right);
// }
// Node* buildTree(int preorder[],int inorder[],int start,int end){
//     static int idx = 0;
//     if(start>end){
//         return NULL;
//     }
//     int curr = preorder[idx];
//     idx++;
//     Node* n = new Node(curr);
//     if(start==end){
//         return n;
//     }
//     int pos = search(inorder,start,end,curr);
//     n->left = buildTree(preorder,inorder,start,pos-1);
//     n->right = buildTree(preorder,inorder,pos+1,end);
//     return n;
// }
// //* build tree using post order and inorder
// Node* buildTree2(int postorder[],int inorder[],int start,int end){
//     static int idx = end;
//     if(start>end){
//         return NULL;
//     }
//     int curr = postorder[idx];
//     idx--;
//     Node* n = new Node(curr);
//     int pos = search(inorder,start,end,curr);
//     n->right = buildTree2(postorder,inorder,pos+1,end);
//     n->left = buildTree2(postorder,inorder,start,pos-1);
//     return n; 
// }
// //* level order traversal
// void printLevelOrder(Node* root){
//     if(root==NULL){
//         return;
//     }
//     queue<Node*> q;
//     q.push(root);
//     q.push(NULL);
//     while(q.empty()){
//         Node* n = q.front();
//         q.pop();
//         if(n != NULL){
//             cout<<n->data<<" ";
//             if(n->left){
//                 q.push(n->left);
//             }
//             if(n->right){
//                 q.push(n->right);
//             }
//         }else if(!q.empty()){
//             q.push(NULL);
//         }
//     }
// }
// int main(){
//     int postorder[]={4,2,5,3,1};
//     int pdr[]={1,2,4,3,5};
//     int indr[]={4,2,1,5,3};
//     Node* root = buildTree(pdr,indr,0,4);
//     Node* root2 = buildTree2(postorder,indr,0,4);
//     // inorderPrint(root);
//     // cout<<endl;
//     // inorderPrint(root2);
//     printLevelOrder(root);
//     return 0;
// }


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


// void preorder(Node* root){
//     if(root == NULL){
//         return;
//     }
//     cout<<root->data<<" ";
//     preorder(root->left);
//     preorder(root->right);
// }
// void postorder(Node* root){
//     if(root==NULL){
//         return;
//     }
//     postorder(root->left);
//     postorder(root->right);
//     cout<<root->data<<" ";
    
// }

// void inorder(Node* root){
//     if(root == NULL){
//         return;
//     }
//     inorder(root->left);
//     cout<<root->data;
//     inorder(root->right);
// }

// int search(int inorder[],int start,int end,int curr){
//     for(int i=start;i<=end;i++){
//         if(inorder[i]==curr){
//             return i;
//         }
//     }
//     return -1;
// }

// void buildTree(int preorder[],int inorder[],int start, int end){
//     static int idx=0;
//     if(start>end){
//         return NULL;
//     }
//     int curr = preorder[idx];
//     idx++;
//     Node* n = new Node(curr);
//     if(start==end){
//         return n;
//     }
//     int pos = search(inorder,start,end,curr);
//     n->left = buildTree(preorder,inorder,start,pos-1);
//     n->right = buildTree(preorder,inorder,pos+1,end);
// }

// void buildTree2(int postorder[],int inorder[],int start,int end){
//     static int idx = end;
//     if(start>end){
//         return NULL;
//     }
//     int val = postorder[idx];
//     idx--;
//     Node* n = new Node(val);
//     if(start==end){
//         return n;
//     }
//     int pos = search(inorder,start,end,val);
//     n->right = buildTree2(postorder,inorder,pos+1,end);
//     n->left = buildTree2(postorder,inorder,start,pos-1);
// }

// //* level order traversal

// void printLevelOrder(Node* root){
//     if(root == NULL){
//         return;
//     }
//     queue<Node*> q;
//     q.push(root);
//     q.push(NULL);
//     while(!q.empty()){
//         Node* n = q.front();
//         q.pop();
//         if(n!=NULL){
//             cout<<n->data<<" ";
//             if(n->left!=NULL){
//                 q.push(n->left);
//             }
//             if(n->right!=NULL){
//                 q.push(n->right);
//             }
//         }else if(!q.empty()){
//             q.push(NULL);
//         }
//     }
// }
// //* sumt at level k
// int sumAtK(node* root,int K){
//     if(root==NULL){
//         return -1;
//     }
//     queue<Node*> q;
//     q.push(root);
//     q.push(NULL);
//     int level = 0;
//     int sum = 0;
//     qhile(!q.empty()){
//         Node* n = q.fron();
//         q.pop();
//         if(n!=NULL){
//             if(level==K){
//                 sum+= n->data;
//             }
//             if(n->left){
//                 q.push(n->left);
//             }
//             if(n->right){
//                 q.push(n->right);
//             }

//         }else if(!q.empty()){
//             q.push(NULL);
//             level++;
//         }
//     }
//     return sum;
// }



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
        if(inorder[i]==curr){
            return i;
        }
    }
    return -1;
}
Node* buildTree(int preorder[],int inorder[],int start,int end){
    static int idx;
    if(start>end){
        return NULL;
    }
    int curr = preorder[idx];
    idx++;
    int pos = search(inorder,start,end,curr);
    Node* n = new Node(curr);
    if(start==end){
        return n;
    }
    n->left = buildTree(preorder,inorder,start,pos-1);
    n->right = buildTree(preorder,inorder,pos+1,end);
    return n;

}
Node* buildTree2(int postorder[],int inorder[],int start,int end){
    static int idx = end;
    if(start>end){
        return NULL;
    }
    idx--;
    int curr = postorder[idx];
    int pos = search(inorder,start,end,curr);
    Node* n = new Node(curr);
    if(start==end){
        return n;
    }
    n->right = buildTree2(postorder,inorder,pos+1,end);
    n->left = buildTree2(postorder,inorder,start,pos-1);
    return n;
}
void inorderPrint(Node* root){
    if(root==NULL){
        return;
    }
    inorderPrint(root->left);
    cout<<root->data<<" ";
    inorderPrint(root->right);
}
//* order level traversal
void levelOrderPrint(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        if( temp!= NULL){
            cout<<temp->data<<" ";
            if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
        }else if(!q.empty()){
            q.push(NULL);
        }
        
    }
}
//* sum at level k
int sumatk(Node* root,int k){
    if(root==NULL){
        return -1;
    }
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    int level = 0;
    int sum = 0;
    while(!q.empty()){
        Node* n = q.front();
        q.pop();
        if(n!=NULL){
            if(level==k){
                sum+= n->data;
            }
            if(n->left){
                q.push(n->left);
            }
            if(n->right){
                q.push(n->right);
            }
        }else if(!q.empty()){
            q.push(NULL);
            level++;
        }
    }
    return sum;
}
//* count all nodes
int sumNodes(Node* root){
    if(root==NULL){
        return 0;
    }
    return sumNodes(root->left)+sumNodes(root->right)+root->data;
}
//* height of a binary tree
int calcHeight(Node* root){
    if(root==NULL){
        return 0;
    }
    int lHeight = calcHeight(root->left);
    int rHeight = calcHeight(root->right);
    return max(lHeight,rHeight)+1;
}
//* sum replacement
void sumReplacement(Node* root){
    if(root==NULL){
        return;
    }
    sumReplacement(root->left);
    sumReplacement(root->right);
    if(root->left!=NULL){
        root->data += root->left->data;
    }
    if(root->right!=NULL){
        root->data += root->right->data;
    }
}
//* sum replacement

int main(){
    int postorder[]={4,2,5,3,1};
    int inorder[]={4,2,1,5,3};
    Node* root = buildTree(postorder,inorder,0,4);
    // inorderPrint(root);
    levelOrderPrint(root);
    return 0;
}
