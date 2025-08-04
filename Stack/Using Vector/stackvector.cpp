// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <vector>

class Stack{
    vector<int> v;
    public:
    void push(int val){
        v.push_back(val);
    }
    void pop(){
        if(isEmpty()){
            cout<<"stack is empty";
            return;
        }
        v.pop_back();
    }
    
    int  top(){
        int topElement = v.size()-1;
        return v[topElement];
    }
    
    bool isEmpty(){
        return v.size()==0;
    }
};

int main() {
    
    Stack s;
    s.push(3);
    s.push(2);
    // s.push(1);
    s.pop();
    
    while(!s.isEmpty()){
        cout<<s.top()<< " ";
        s.pop();
    }
    

    return 0;
}










