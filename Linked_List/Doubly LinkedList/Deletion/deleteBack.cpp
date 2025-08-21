// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node*prev;
    Node(int val){
        data=val;
        next=prev=nullptr;
    }
};

class doublyList{
    Node*head;
    Node*tail;
    public:
    doublyList(){
        head=tail=nullptr;
    }
      void push_front(int val){
        Node*newNode = new Node(val);
        if(head==nullptr){
            head=tail=newNode;
        }else{
            newNode->next=head;
            head->prev=newNode;
            head=newNode;
        }
        
    }
    void pop_back(){
        
       if (head==nullptr){
           cout<<"Dll in empty";
           return;
       }
       Node*temp = tail;
       tail = tail->prev;
       if(tail!=nullptr){
           tail->next=nullptr;
       }
       temp->prev=nullptr;
       delete temp;
       
       
       
        
    }
    
    void print_list(){
        Node*temp = head;
        while(temp!=nullptr){
            cout<<temp->data<<"<=>";
            temp=temp->next;
        }
        cout<< "NULL";
    }
};

int main() {
    doublyList dll;
      dll.push_front(4);
    dll.push_front(3);
    dll.push_front(2);
    dll.push_front(1);
  dll.pop_back();
    dll.print_list();

    return 0;
}