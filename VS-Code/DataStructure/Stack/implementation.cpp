#include <iostream>
using namespace std;
// Using Array implementation: 
class Stack {
    // properties
    int top;
    int size;
    int *arr;

    // Behaviour
    public:
    // constructer:
    Stack(int s) {
        this -> size = s;
        top = -1;
        arr = new int(size);
    }

    void push(int element) {
        if((size - top) > 1) {
            top++;
            arr[top] = element;
        }
        else {
            cout << "Stack Overflow";
        }
    }
    void pop() {
        if(top >= 0) {
            top--;
        } else {
            cout << "Stack Underflow";
        }
    }

    int peak() {
        if(top >= 0 && top < size) {
            return arr[top];
        } 
        else {
            cout << "Stack is Empty";
            return -1;
        }
    }

    bool isEmpty() {
        if(top == -1) {
            return true;
        } else {
            return false;
        }
    }
};
    
int main() {
    
    Stack s(5);
    s.push(5);
    s.push(6);
    s.push(7);
    s.push(8);
    s.push(9);
    cout << s.peak();
    


    return 0;
}