// Online C++ compiler to run C++ program online
#include <iostream>
// #include <math.h>
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

static int idx=-1;
Node* BinaryTree(int*nodes){
    idx++;
    if(nodes[idx]==-1){
        return NULL;
    }
    Node* currNode = new Node(nodes[idx]);
    currNode->left=BinaryTree(nodes);
    currNode->right=BinaryTree(nodes);
    return currNode;
}


int Height(Node*root){
    if (root==NULL){
        return 0;
    }
    
    int leftHt = Height(root->left);
    int rightHt = Height(root->right);
    
    int maxHt = max(leftHt,rightHt)+1;    // +1 for the current node
    return maxHt;
}

int main() {
   int nodes[] ={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
   Node*root = BinaryTree(nodes);
   cout<<"Root = "<<root->data<<endl;
   cout<<"height of tree is "<<Height(root);
   

    return 0;
}



// int HeightLevelOrder(Node* root) {
//     if (root == NULL) return 0;

//     queue<Node*> q;
//     q.push(root);
//     int height = 0;

//     while (!q.empty()) {
//         int levelSize = q.size(); // Number of nodes at the current level

//         for (int i = 0; i < levelSize; ++i) {
//             Node* curr = q.front();
//             q.pop();

//             if (curr->left) q.push(curr->left);
//             if (curr->right) q.push(curr->right);
//         }

//         height++; // Finished processing one level
//     }

//     return height;
// }
