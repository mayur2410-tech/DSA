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
    
    void deleteBetween(int pos){
        if(head==nullptr){
            cout<<"List is empty";
            return;
        }
        
        if (pos==1){
            Node*temp = head;
            head = head->next;
            if(head!=nullptr){
                
            head->prev=nullptr;
            }
            temp->next=nullptr;
            delete temp;
            return;
        }
         // Traverse to the position
        Node*temp = head;
        for(int i=1;i<pos;i++){
            temp=temp->next;
        }
        if(temp==nullptr){
            cout<<"Inavlid postion";
            return;
        }
         // Case 2: deleting tail
        if(temp==tail){
            tail = tail->prev;
            if(tail!=nullptr){
                tail->next=nullptr;
            }
            delete temp;
            return;
            
        }
         // Case 3: deleting a middle node
         temp->prev->next= temp->next;
         temp->next->prev= temp->prev;
         delete temp;
        
        
    }
    
    void print_list(){
        Node*temp = head;
        while(temp!=nullptr){
            cout<<temp->data<<" <=>";
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
    dll.print_list();
    cout<<endl;
    dll.deleteBetween(3);
     dll.print_list();

    return 0;
}