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

int HeightLevelOrder(Node* root){
    if(root==NULL){
        return 0;
    }
    queue<Node*> q;
    q.push(root);
    int height = 0 ;
    while(!q.empty()){
        int levelSize =q.size();           
        for (int i=0;i<levelSize;i++){
            Node*curr = q.front();
            q.pop();
            if(curr->left){
                q.push(curr->left);
            }
            if(curr->right){
                q.push(curr->right);
            }
        }
        height++;
    }
    return height;
}

int main() {
int nodes[] = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
Node* root = BinaryTree(nodes);
    cout<<"Root = "<<root->data<<endl;
    cout<<"Heigt of tree is "<<HeightLevelOrder(root);

    return 0;
}



