// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Node{
      public:
    int data;
    Node*next;
  
    Node(int val){
        data= val;
        next=nullptr;
    }
};

class CircularLL{
    Node*head;
    Node*tail;
    public:
    CircularLL(){
        head=tail=nullptr;
    }
  void push_back(int val){
      Node*newNode = new Node(val);
      if(head==nullptr){
          head=tail=newNode;
          tail->next = newNode;
      }else{
          tail->next = newNode;
          tail= newNode;
          tail->next = head;
      }
  }
  
  void print_list(){
      cout<<head->data<<" ->";
      Node*temp = head->next;
      while(temp!=head){
          cout<<temp->data<<" ->";
          temp=temp->next;
      }
       cout<<head->data;
  }
};
int main() {
   CircularLL cll;
   cll.push_back(4);
   cll.push_back(3);
   cll.push_back(2);
   cll.push_back(1);
   cll.print_list();
    return 0;
}