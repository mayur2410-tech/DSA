// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*left;
    Node*right;
    Node(int val){
        data = val;
        right=left=NULL;
    }
};


Node* insert(Node*root,int val){
    if(root==NULL){
        root = new Node(val);
        return root;
    }
    if(val > root->data){
        root->right = insert(root->right,val);
    }else{
        root->left = insert(root->left,val);
    }
    return root;
}


Node* BuildBST(int arr[],int n){
    Node* root =NULL;
    for(int i=0;i<n;i++){
        root = insert(root,arr[i]);
    }
    return root;
}

bool searchkey(Node*root,int key){
    if(root==NULL){
        return false;
    }
    if(root->data==key){
        return true;
    }
    if(root->data>key){
        return searchkey(root->left,key);
    }else{
        return searchkey(root->right,key);
    }
}





int main() {
    int arr[6]={5,1,3,4,2,7};
   Node* root = BuildBST(arr,6) ;
   cout<<searchkey(root,8);

    return 0;
}






