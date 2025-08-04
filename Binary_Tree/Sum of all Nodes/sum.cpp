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

int sum(Node*root){
    if(root==NULL){
        return 0;
    }
    int leftSum= sum(root->left);
    int rightSum= sum(root->right);
    int TotalSum = leftSum + rightSum+root->data ;
    return TotalSum;
}

int main() {
int nodes[] = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
Node* root = BinaryTree(nodes);
    cout<<"Root = "<<root->data<<endl;
    cout<<"Total Sum in tree is "<<sum(root);

    return 0;
}



