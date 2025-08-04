

// Post order = left-> right -> root


#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*left;
    Node*right;
    Node(int val){
        data = val;
        left=right=NULL;
    }
};
static int idx = -1;

Node* BinaryTree(int*nodes){
    idx++;
    if(nodes[idx]==-1){
        return NULL;
    }
    Node*currNode = new Node(nodes[idx]);
    currNode->left = BinaryTree(nodes);
    currNode->right = BinaryTree(nodes);
    return currNode;
}

void PostOrder(Node*root){
    if(root==NULL){
        return ;
    }
    
    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data<<" ";
}


int main() {
    
    
       int nodes[] ={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
       Node * root = BinaryTree(nodes);
       cout<<"Root = "<<root->data<<" \n";
            PostOrder(root);

    return 0;
}



