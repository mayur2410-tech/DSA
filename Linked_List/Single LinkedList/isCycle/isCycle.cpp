// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Node {
    public: 
    int data;
    Node*next;
    public:
    Node(int val){
        data = val;
        next=NULL;
        
    }
};

class List{
    public:
    Node*head;
    Node*tail;
    public:
    List(){
        head=NULL;
        tail=NULL;
    }
    
    void push_front(int val){
        Node*newNode = new Node (val);
        if(head==NULL){
            head=tail=newNode;
        }else{
            newNode->next=head;
            head= newNode;
        }
    }
    
    void print_list(){
        Node*temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" ->";
            temp=temp->next;
        }
        cout<<" NULL";
    }
};

bool isCycle(Node*head){
    Node*slow = head;
    Node*fast = head;
    while(fast!=NULL&& fast->next!=NULL){      
        slow = slow->next;                 // slow moves one step
        fast=fast->next->next;               // fast moves two steps
        if(slow==fast){                          // if slow and fast meet then cycle exist
            cout<<"Cyclic linkedList\n";
            return true;
        }
        
    }
    cout<<"cycle not exist";
    return false;
}

int main() {
   List ll;
   ll.push_front(4);
   ll.push_front(3);
   ll.push_front(2);
   ll.push_front(1);
//   ll.tail->next=ll.head;   // to do linked list cyclic
   ll.print_list();
   cout<<endl;
   // check if cycle exist or not
  cout<<isCycle(ll.head);
//   ll.print_list();

    return 0;
}




