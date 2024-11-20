#include <iostream>
using namespace std;
class Stack {
    public:
    int top;
    int *arr;
    int size;

    Stack(int s) {
        top = -1;
        this->size = s;
        arr = new int(size);
    }

    bool isEmpty() {
        return top==-1;
    }
    bool isFull() {
        return top == size-1;
    }

    void push(int val) {
        if(isFull()) {
            cout << "Stack OverFlow";
            return;
        }
        arr[++top] = val;
    }

    void pop() {
        if(isEmpty()) {
            cout << "Stack UnderFlow";
            return;
        }
        top--;
    }

    void peak() {
        if(isEmpty()) {
            cout <<"Stack is empty"<<endl;
            return;
        }
        cout << "Stack Top: "<<
        arr[top]<<endl;
    }

    void print() {
        if(isEmpty()) {
            return;
        }
        cout << "Stack Elements: "<<endl;
        for(int i=top; i>=0; i--) {
            cout << arr[i]<<endl;
        }
    }
};
int main() {
    Stack s(5);
    s.push(12);
    s.push(78);
    s.push(28);
    s.push(46);
    s.push(33);
    s.peak();
    s.pop();
    s.peak();
    s.print();
    
    
    return 0;
}