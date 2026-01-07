#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = right = nullptr;
    }
};

static int idx = -1;

Node* BinaryTree(int* nodes){
    idx++;
    if(nodes[idx] == -1){
        return nullptr;
    }

    Node* curr = new Node(nodes[idx]);
    curr->left = BinaryTree(nodes);
    curr->right = BinaryTree(nodes);

    return curr;
}

// Step 1: Calculate total sum of tree
long long sum(Node* root){
    if(root == nullptr) return 0;

    return sum(root->left) + sum(root->right) + root->data;
}

// Global variable to store best answer
long long best = 0;

// Step 2: DFS to compute subtree sums and max product
long long solve(Node* root, long long totalSum){
    if(root == nullptr) return 0;

    long long left = solve(root->left, totalSum);
    long long right = solve(root->right, totalSum);

    long long currSum = left + right + root->data;

    long long product = currSum * (totalSum - currSum);
    best = max(best, product);

    return currSum;
}

int main(){
    int nodes[] = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};

    Node* root = BinaryTree(nodes);

    long long totalSum = sum(root);

    solve(root, totalSum);

    cout << "Maximum product = " << best << endl;

    return 0;
}
