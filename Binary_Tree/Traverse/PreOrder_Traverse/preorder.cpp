


// preOrder = root -> left -> right


#include <iostream>
#include <vector>
using namespace std;

class Node{
    public:
    int data;
    Node*left;
    Node*right;
    // public:
    Node(int val){
        data=val;
        left=right=NULL;
    }
};
static int idx =-1;
Node* BinaryTree(vector<int> nodes){
    idx++;
    if(nodes[idx]==-1){
        return NULL;
    }
    Node* currNode = new Node(nodes[idx]);
    currNode->left = BinaryTree(nodes);
    currNode->right = BinaryTree(nodes);
    return currNode;
    
    
}

void preOrder(Node * root){
    if(root == NULL){
        return;
    }
    
    cout<<root->data;
    preOrder(root->left);
    preOrder(root->right);
}
int main() {
    vector <int> nodes ={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = BinaryTree(nodes);
    cout<<"root = "<<root->data<<"\n";
    preOrder(root);

    return 0;
}


