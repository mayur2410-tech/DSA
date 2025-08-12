

// Add two linkedlist

// step 1 first reverse both linked list
// step 2 Add both linked list 
//   so function for that
// int carry=0
// then sum = carry + l1->data + l2->data;
// then digit = sum %10;
// then carry = sum/10;

// step 3 create a new node of that digit 
// Node*newNode = new Node(digit)
// then insert that new node in tail


/*
class Node {
  public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/


#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*next;
    public:
    Node(int val){
        data = val;
        next = NULL;
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
};

    void reverseList(Node*head) {
        Node*current = head;
        Node* prev = nullptr;
       while(current!=nullptr){
           Node*next = current->next;
           current->next= prev;
           prev=current;
           current=next;
       }
       return prev;
    }
 
    Node* addTwoLists(Node* head1, Node* head2) {
        // code here
        head1 = reverseList(head1);
        head2 = reverseList(head2);
        
        Node*newHead=nullptr;
        Node*tail=nullptr;
        int carry = 0;
        while(head1!=nullptr || head2!=nullptr || carry !=0){
            int val1=0;
            if(head1!=nullptr){
                val1 = head1->data;
                head1= head1->next;
            }
            int val2=0;
            if(head2!=nullptr){
                val2 = head2->data;
                head2= head2->next;
            }
            
            int sum = carry + val1 + val2;
            int digit = sum % 10;
             carry = sum /10;
            
            //create new Node
            Node * newNode = new Node(digit);
            if(newHead==nullptr){
                newHead=tail=newNode;
            }else{
                tail->next = newNode;
                tail=newNode;
            }
        }
        
        newHead = reverseList(newHead);
      while(newHead!=nullptr && newHead->data==0 && newHead->next){
          Node* temp = newHead;
          newHead = newHead->next;
          delete temp;
      }
       return newHead;
        
    }
    