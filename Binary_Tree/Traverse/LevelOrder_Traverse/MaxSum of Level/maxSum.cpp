// Online C++ compiler to run C++ program online
#include <iostream>
#include <queue>
#include <climits>
using namespace std;

class Node{
    public:
    int data;
    Node*left;
    Node*right;
    Node(int val){
        data = val;
        right=left = nullptr;
    }
};

static int idx = -1;
Node*BinaryTree(int*nodes){
    idx++;
    if(nodes[idx]==-1){
        return nullptr;
    }
    Node*currentNode = new Node(nodes[idx]);
    currentNode->left = BinaryTree(nodes);
    currentNode->right = BinaryTree(nodes);
    
    return currentNode;
    
}

void leveOrder(Node*root){
    if(root ==nullptr){
        return ;
    }
     
     queue<Node*>Q;
     Q.push(root);
     Q.push(NULL);
     int level =1;
     int maxLevel =1;
     int sum =0;
     int maxSum = INT_MIN;
     while(!Q.empty()){
         
         Node*currentNode = Q.front();
         Q.pop();
         
          if(currentNode==NULL){
            if(sum > maxSum){
                maxSum=sum;
                maxLevel = level;
            }
            
            sum =0;
            level++;
            if(Q.empty()){
                break;
            }
            Q.push(NULL);
        }else{
            
         sum += currentNode->data;
        
         if(currentNode->left){
             Q.push(currentNode->left);
         }
         if(currentNode->right){
             Q.push(currentNode->right);
         }
        }
        
        
     }
     cout<<maxSum<<endl;
        cout<<maxLevel;
    //  cout<<endl;
}

int main() {
    
       int nodes[] ={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
       Node*root = BinaryTree(nodes);
    //   cout<<"root "<<root->data;
       leveOrder(root);
       

    return 0;
}