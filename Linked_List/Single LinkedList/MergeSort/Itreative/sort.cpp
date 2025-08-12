// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*next;
    Node(int val){
        data=val;
        next=nullptr;
    }
};
class List{
    public:
    Node*head;
    Node*tail;
    List(){
        head=tail = nullptr;
    }
   void push_back(int val){
       Node*newNode = new Node(val);
       if(head==nullptr){
           head=tail=newNode;
       }else{
           tail->next=newNode;
           tail=newNode;
       }
   }
   void print_list(){
       Node*temp = head;
       while(temp!=nullptr){
           cout<<temp->data<<" ->";
           temp=temp->next;
       }
       cout<<" NULL";
   }
};

Node* splitAtMid(Node* head){
    Node*slow=head;
    Node* fast = head;
    Node* prev = nullptr;
    while(fast!=nullptr && fast->next!=nullptr){
        prev=slow;
        slow= slow->next;
        fast=fast->next->next;
    }
    if(prev!=nullptr){
        prev->next=nullptr;
    }
    return slow;  //it return righthead
}

Node*merge(Node* left,Node*right){
    List ans;
    Node*i = left;
    Node*j = right;
    while(i!=nullptr && j!=nullptr){
        if(i->data <= j->data){
            ans.push_back(i->data);
            i = i->next;
        }else{
            ans.push_back(j->data);
            j = j->next;
        }
    }
    while(i!=nullptr){
         ans.push_back(i->data);
            i = i->next;
    }
    while(j!=nullptr){
         ans.push_back(j->data);
            j = j->next;
    }
    return ans.head;
}

Node* mergeSort(Node*head){
    if (head==nullptr || head->next==nullptr){
        return head;
    }
    Node * rightHead = splitAtMid(head);
    Node* left = mergeSort(head);
    Node* right = mergeSort(rightHead);
    
    return merge(left,right);
}

int main() {
   List ll;
  
   ll.push_back(4);
   ll.push_back(2);
   ll.push_back(1);
    ll.push_back(3);
    ll.print_list();
    cout<<endl;
    
    ll.head= mergeSort(ll.head);
        ll.print_list();
    return 0;
}






