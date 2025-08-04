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

class Stack{
    Node*head;
    int count;
    public:
    Stack(){
        head=NULL;
        count=0;
        
    }
    
    void push(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head=newNode;
        }
        else{
            newNode->next=head;
            head=newNode;
        }
        count++;
        
    }
    
    void pop(){
        if(head==NULL){
            cout<<"Stack is Alredy Empty";
            return;
        }
        Node*temp = head;
        head= head->next;
        temp->next= NULL;
        delete temp;
        count -- ;
    }
    
    void print_stack(){
        Node*temp= head;
        while(temp!=NULL){
            cout<<temp->data<<" ->";
            temp=temp->next;
        }
        cout<<" NULL";
    }
    
    void peek(){
        if(head==NULL){
            cout<<"Stack is Empty\n";
            return;
        }
        cout<<"Upper Element is "<<head->data<<"\n";
        
    }
    
    void  empty(){
        if( head==NULL){
            cout<<"Stack is Empty";
            return;
        }else{
            cout<<"No satck is not empty\n";
        }
    }
    
    void size(){
        cout<<"Count :"<<count<<"\n";
    }
};

int main() {
  Stack s;
  s.push(5);
  s.push(10);
  s.push(34);
//   s.push(45);
//   s.pop();
s.peek();
s.empty();
s.size();
  s.print_stack();

    return 0;
}



