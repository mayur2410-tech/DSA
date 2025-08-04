#include <iostream>
using namespace std;

class Stack {
private:
    int arr[100]; // fixed-size array
    int topIndex; // to track top of the stack

public:
    Stack() {
        topIndex = -1; // initially, stack is empty
    }

    void push(int val) {
        if (topIndex >= 99) {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++topIndex] = val;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack is empty\n";
            return;
        }
        topIndex--;
    }

    int top() {
        if (isEmpty()) {
            cout << "Stack is empty\n";
            return -1;
        }
        return arr[topIndex];
    }

    bool isEmpty() {
        return topIndex == -1;
    }
};

int main() {
    Stack s;
    s.push(3);
    s.push(2);
    // s.push(1);
    s.pop(); // removes 2

    while (!s.isEmpty()) {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}
