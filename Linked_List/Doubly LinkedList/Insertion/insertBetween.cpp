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
    void push_between(int val , int pos){
        Node*newNode = new Node(val);
        
        // case 1 if head is null and pos is 1 then 
        if(head==nullptr){
            if(pos==1){
                cout<<"head is null but this is aclled"<<endl;
                push_front(val);
            }else{
                cout<<"Linked list is empty we can insert at pos= "<<pos<<endl;
               delete newNode;
            }
             return;
        }
        // case 2 if direct pos is 1
        if(pos==1){
            cout<<"function called"<<endl;
            push_front(val);
            return;
        }
        // case 3 in between or tail 
        Node*temp=head;
        for(int i =1;i<pos;i++){
            temp=temp->next;
        }
        if(temp==tail){
            cout<<"this is called for pos 4"<<endl;
            tail->next=newNode;
            newNode->prev=tail;
            tail=newNode;
        }else{
            
            newNode->next=temp->next;
            newNode->prev= temp;
            temp->next->prev = newNode;
            temp->next = newNode;
        }
        
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
    //   dll.push_front(4);
    // dll.push_front(3);
    // dll.push_front(2);
    // dll.push_front(1);
//   dll.pop_back();
dll.push_between(5,1);
    dll.print_list();

    return 0;
}