

 
#include <iostream>
#include <queue>
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

void LevelOrder(Node* root){
    if(root==NULL){
        return;
    }
   
    queue<Node*> Q;
    Q.push(root);
    while(!Q.empty()){
        Node *curr = Q.front();
        Q.pop();
        cout<<curr->data<< " ";
        if(curr->left){
            Q.push(curr->left);
        }
        if(curr->right){
            Q.push(curr->right);
        }
    }
    cout<<endl;
}


int main() {
    
    
       int nodes[] ={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
       Node * root = BinaryTree(nodes);
       cout<<"Root = "<<root->data<<" \n";
          LevelOrder(root);

    return 0;
}



