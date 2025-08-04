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
    
   void delete_back(){
       
       //If only one node is present 
       if(head==tail){
           delete head;
           head=tail=NULL;
           return;
       }
       
       Node*temp=head;
       while(temp->next->next!=NULL){   //upto last second node 
           temp=temp->next;
       }
       Node*toDelete = temp->next;
       temp->next=NULL;
       delete toDelete;
       tail=temp;
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
    ll.delete_back();
    ll.print_list();
    


    

    return 0;
    
    
    
}





#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class Stack {
    Node* head;

public:
    Stack() {
        head = NULL;
    }

    void push(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    void pop() {
        if (head == NULL) {
            cout << "Stack Underflow (Empty Stack)" << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    int top() {
        if (head == NULL) {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return head->data;
    }

    bool isEmpty() {
        return head == NULL;
    }

    void print() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};
