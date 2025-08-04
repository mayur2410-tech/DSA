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

void checkCycle(Node*head){
    Node*slow =head;
    Node*fast = head;
    bool isCycle = false;
    while(fast!=NULL && fast->next!=NULL){     
        slow = slow->next;   
        fast=fast->next->next;
    if(slow == fast){
        cout<<"Cycle Exist\n";
        isCycle=true;
        break;
    }
    }
    
    if(!isCycle){
        cout<<"Cycle does not exisit\n";
        return ;
    }
    
    slow = head;
    if(slow == fast){    // if cycle is at head  means tail is pointing to head complete loop
        
        while(fast->next!=slow){    //
            fast = fast->next;
        }
        
        fast->next = NULL;
        
    }else {   // if cycle is not at head then we need to find the node where cycle starts
        Node*prev = fast;   
        while(slow!=fast){
            slow=slow->next;
            prev = fast;
            fast=fast->next;
        }
        prev->next=NULL;
    }
}

int main() {
   List ll;
   ll.push_front(4);
   ll.push_front(3);
   ll.push_front(2);
   ll.push_front(1);
  ll.tail->next=ll.head;
  checkCycle(ll.head);
  ll.print_list();

    return 0;
}




