// Online C++ compiler to run C++ program online
#include <iostream>
#include <queue>
using namespace std;

class Node {
    public:
    int data;
    Node*left;
    Node*right;
    Node(int val){
        data = val;
        left=right=NULL;
    }
};
static int idx=-1;

Node* BinaryTree(int* nodes){
    idx++;
    if(nodes[idx]==-1){
        return NULL;
    }
    Node*currNode = new Node(nodes[idx]);
    currNode->left = BinaryTree(nodes);
    currNode->right = BinaryTree(nodes);
    return currNode;
    
}

int TotalNodeInTree(Node*root){
    if(root==NULL){
        return 0;
    }
    int leftCount= TotalNodeInTree(root->left);
    int rightCount= TotalNodeInTree(root->right);
    int TotalNodes = leftCount + rightCount +1;
    return TotalNodes;
}

int main() {
int nodes[] = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
Node* root = BinaryTree(nodes);
    cout<<"Root = "<<root->data<<endl;
    cout<<"Total Nodes in tree is "<<TotalNodeInTree(root);

    return 0;
}



