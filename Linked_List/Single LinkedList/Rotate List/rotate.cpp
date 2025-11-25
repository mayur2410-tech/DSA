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
    
    //function to push in front 
    void push_front(int val){
        Node*newNode = new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }
        else{
            newNode->next = head;
            head=newNode;
        }
    }
    
    void to(int k ){
         Node*temp = head;
        int len = 1 ; 
        while(temp->next!=nullptr){
            len++;
            temp = temp->next;
        }
        temp->next = head;
        for(int i =0 ; i < len - k; i++){
            temp= temp->next;
        }
        head= temp->next;
        temp->next=nullptr;
        
      
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
    
};

int main() {
    
    List ll;
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    
    ll.to(3);
    cout<<endl;
    ll.print_list();
   
    return 0;
}





