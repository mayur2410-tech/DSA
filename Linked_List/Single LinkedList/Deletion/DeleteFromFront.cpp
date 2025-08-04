// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*next;
    public:
    Node(int val){
        data=val;
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
        Node*newNode = new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }else{
           newNode->next = head;
           head=newNode;
        }
    }
    
    void delete_front(){
        if(head==NULL){
            cout<<"List not present nothing to delete";
            return;
        }
        Node*temp=head;
        head=head->next;
        temp->next = NULL;  //before deleting it just breaking the connection
        delete temp;
        
        if(head == NULL){  //this is for if only one node is present in this 
        tail = NULL;
    }
    }
    
    void print_list(){
        Node*temp =  head;
        while(temp!=NULL){
            cout<<temp->data<<" ->";
            temp=temp->next;
        }
        cout<<" NULL";
    }
    
};

int main() {
    List ll;
    ll.push_front(20);
    ll.push_front(30);
    ll.push_front(40);
    ll.delete_front();
    ll.print_list();

    return 0;
    
    
    
}