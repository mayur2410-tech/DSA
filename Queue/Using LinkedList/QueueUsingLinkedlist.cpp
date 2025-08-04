// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    public:
    Node(int val){
        data =val;
        next=NULL;
    }
};

class Queue{
    Node*front;
    Node*rear;
    int count;
    public:
    Queue(){
        front = rear= NULL;
        count = 0;
    }
    
    void enqueue(int val){
        Node*newNode = new Node(val);
        if(front==NULL){
            front = rear = newNode;
        }else{
            rear->next=newNode;
            rear=newNode;
        }
        count ++;
    }
    
    void dequeue(){
      
        if(front==NULL){
            cout<<"Queue is Empty";
            return;
        }
          Node*temp=front;
        front = front->next;
        temp->next=NULL;
        delete temp;
        count --;
        
        
    }
    
    void print_queue(){
        Node*temp= front;
        while(temp!=NULL){
            cout<<temp->data<<" -> ";
            temp=temp->next;
        }
        cout<<" NULL";
    }
    
    void peek(){
        if(front==NULL){
            cout<<"Queue is Empty";
            return;
        }
        cout<<"First Element is : "<<front->data<<"\n";
    }
    int size(){
        return count;
    }
    void isEmpty(){
        if(front==NULL){
            cout<<"Queue is Empty\n";
            return;
        }
        cout<<"Queue is Not Empty\n";
    }
    
    
};


int main() {
   Queue q;
//   q.enqueue(8);
//   q.enqueue(5);
//   q.enqueue(6);
   q.enqueue(7);
//   q.dequeue();
//   q.dequeue();
//   q.dequeue();
//   q.dequeue();
    q.isEmpty();

   q.peek();
   cout<<"Size of Queue is "<<q.size()<<"\n";
  
//   q.print_queue();

    return 0;
}




