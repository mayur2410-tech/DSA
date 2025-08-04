      
    // Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*next;
    public:
    Node(int val){
        data = val;
        next = NULL;
    }
};

class List{
    Node*head;
    Node*tail;
    public:
    List(){
        head=NULL;
        tail=NULL;
    }
    
    //function to push in back 
 void push_back(int val){
        Node*newNode = new Node(val);
        if(head==NULL){
            head=tail=newNode;
            
        }else{
            tail->next=newNode;
            tail=newNode;
        }
    }
      
    
    // to print link list
    
    void print_list(){
       Node*temp=head;
       while(temp!=NULL){
           cout<<temp->data<<" ->";
           temp=temp->next;
       }
       cout<<"  NULL";
    }
    
    void insert_newNode(int val,int pos){
        Node*newNode = new Node(val);
        Node* temp =head;
        for(int i=0;i<pos-1;i++){
            if(temp==NULL){
                cout<<"Position is Invalid";
                return;
            }
            temp = temp->next;
        }
        newNode->next=temp->next;
        temp->next=newNode;
    }
    
};

int main() {
    
    List ll;
  
    ll.push_back(60);
    ll.push_back(50);
    ll.push_back(30);
    
    ll.insert_newNode(40,2);
    ll.print_list();
   
    return 0;
}





