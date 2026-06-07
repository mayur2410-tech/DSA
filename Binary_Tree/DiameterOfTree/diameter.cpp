// Diameter of tree = number of nodes in the longest part between two leaves nodes

Approach 1 = O(n^2)

two cases 
i) diameter goes throught the root 
    - calculate left hieght + right height + 1;

ii) diameter not goes from root either in left subtree or rightsubtree
   - 



   // Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include<math.h>
using namespace std;

class Node{
    public:
    int data;
    Node*left;
    Node*right;
    Node(int val){
        data = val;
        left = right = nullptr;
    }
};
static int idx = -1;    
Node* BinaryTree(int*nodes){
    idx++;
    if(nodes[idx]==-1){
        return nullptr;
    }
    Node* currentNode = new Node(nodes[idx]);
    currentNode->left = BinaryTree(nodes);
    currentNode->right = BinaryTree(nodes);
    return currentNode ;
}

int Height( Node*root){
    if(root==nullptr){
        return 0;
    }
    int leftHt = Height(root->left);
    int rightHt = Height(root->right);
    
    int maxHt = max(rightHt,leftHt) + 1;
    return maxHt;
}

int Diameter(Node*root){
    if(root==nullptr){
        return 0;
    }
    int currentDiameter = Height(root->left) + Height(root->right) + 1;
    int leftDiameter = Diameter(root->left);
    int rightDiameter = Diameter(root->right);
    
    int diameter = max(currentDiameter,max(leftDiameter,rightDiameter));
    return diameter;
}

int main() {
int nodes[] = {1,-1,-1};
Node*root = BinaryTree(nodes);
      cout<<"Diameter is :"<<Diameter(root);
      


    return 0;
}