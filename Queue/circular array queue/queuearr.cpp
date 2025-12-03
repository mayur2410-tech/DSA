// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Queue{
    int*arr;
    int currSize;
    int capacity;
    int r,f;
    public:
    Queue(int capacity){
        this->capacity=capacity;
        arr = new int[capacity];
        currSize =0;
        r=-1;
        f=0;
        
    }
    
    void push(int data){
        if(currSize==capacity){
            cout<<"Qeue is full"<<endl;
            return;
        }
        r=(r+1)%capacity;
        arr[r]=data;
        currSize++;
    }
    
    void pop(){
        if(isEmpty()){
            cout<<"Queue is empty"<<endl;
            return;
        }
        f= (f+1)%capacity;
        currSize--;
    }
    
    int front(){
        if(isEmpty()){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        
        return arr[f];
    }
    
    bool isEmpty(){
        return currSize==0;
    }
};

int main() {
   Queue q(4);
   
   q.push(4);
   q.push(3);
   q.push(2);
   q.push(1);
   
   cout<<q.front()<<endl;
   q.pop();
   cout<<q.front()<<endl;

    return 0;
}