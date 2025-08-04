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
        next=NULL;
        
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
    
    void push_front(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head=tail=newNode;
            
        }else{
            
        newNode->next=head;
        head=newNode;
        }
       
    }
    
    void reverse_list(){
        Node*curr = head;
        Node*prev = NULL;
        while(curr!=NULL){
            Node*next= curr->next;
            curr->next = prev;
            //updation for next itreation
            prev=curr;
            curr = next;
        }
        head=prev;
    }
    
    void print_list(){
         
        Node*temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ->";
            temp=temp->next;
          
        }
        cout<<" NULL";
        
       
        
    }
    int size(){
        int sz=0;
        Node*temp =head;
        while(temp!=NULL){
            temp=temp->next;
            sz++;
        }
        return sz;
    }
    
    void Remove_nth_from_back(int n){
        int sie = size();
        Node*prev =head;

if(n==sie){                          // if n is equal to size of linked list then we need to delete head node
    Node*newHead = head->next;    // new head will be second node
    delete head;
    cout<<"Deleted head node"<<endl;
}

        for(int i=1;i<sie-n;i++){
            prev=prev->next;
        }
        Node*toDel = prev->next;
        cout<<"go to delete node"<<toDel->data<<endl;
        prev->next=prev->next->next;
        
    }
    
};

int main() {
List ll;
ll.push_front(5);
ll.push_front(4);
ll.push_front(3);
ll.push_front(2);
ll.push_front(1);
cout<<"Original Linkedlist:";
ll.print_list();
cout<<"\n";
// ll.reverse_list();
ll.Remove_nth_from_back(2);
cout<<"updated linkedlist : " ;
  ll.print_list();

    return 0;
}



