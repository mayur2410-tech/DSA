// Search the index of key or given node data

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
        }
        else{
            newNode->next=head;
            head=newNode;
        }
    }
    
    void print_list(){
        Node*temp= head;
        while(temp!=NULL){
            cout<<temp->data<<" -> ";
            temp=temp->next;
        }
        cout<<" NULL\n";
    }
    
    int searchitr(int key){   //time complexity O(n) and space complexity O(1)
        Node*temp=head;
       int indx=0;
       while(temp!=NULL){
           if(temp->data==key){
               return indx;
           }
           temp=temp->next;
           indx++;
       }
      return -1;
    }
    
};

int main() {
    
  List ll;
  ll.push_front(3);
  ll.push_front(2);
  ll.push_front(1);
  ll.print_list();  // Output: 1 -> 2 -> 3 -> NULL
  cout<< ll.searchitr(3) << endl; // Output: 2

    return 0;
}


