// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node*next;
    Node(int val){
        data = val;
        next= nullptr;
    }
};

class CircularLL{
    Node*head;
    Node*tail;
    public:
    CircularLL(){
        head=tail=nullptr;
    }
    
    void insert_front(int val){
        Node*newNode =new Node(val);
        if(head==nullptr){
            head=tail=newNode;
            tail->next = newNode;
        }else{
            newNode->next = head;
            head=newNode;
            tail->next= head;
        }
    }
    
    void delete_front(){
        if(head==nullptr){
            cout<<"Circular Linked list is empty";
            return;
        }
        else if(head==tail){
            delete head;
            head= tail = nullptr;
            return;
        }
            else{Node*temp = head;
            head = head->next;
            tail->next = head;
            temp->next =nullptr;
            delete temp;}
        
    }
    
    void print_list(){
        
        if (head==nullptr){
            cout<<"circular linked list is empty";
            return ;
        }
        cout<<head->data<< " ->";
        Node*temp = head->next;
        while(temp!=head){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<head->data;
    }
    
};

int main() {
    CircularLL cll;
    cll.insert_front(1);
    cll.insert_front(2);
    cll.insert_front(3);
    cll.insert_front(4);
    // cll.print_list();
    cll.delete_front();
    cll.delete_front();
    cll.delete_front();
    cll.delete_front();
    cout<<endl;
        cll.print_list();


    return 0;
}





