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
    
};

int main() {
List ll;
ll.push_front(3);
ll.push_front(2);
ll.push_front(1);
cout<<"Original Linkedlist:";
ll.print_list();  // 1 ->2 ->3 -> NULL
cout<<"\n";
ll.reverse_list();
cout<<"reversed linkedlist : " ;
  ll.print_list();  //3 ->2 ->1 -> NULL

    return 0;
}



