#include <iostream>
using namespace std;
class Node {
    public:
    int data;
    Node* next;
    Node(int d) {
        this->data = d;
        next = nullptr;
    }
};

class Stack {

    public:
    Node* top;

    Stack(){
        top = NULL;
    }

    bool isEmpty() {
        return top == NULL;
    }

    void push(int d) {
        Node* newNode = new Node(d);
        newNode->next = top;
        top = newNode;
    }

    void pop() {
        if(isEmpty()) {
            cout << "Stack Overflow";
            return;
        }
        Node* temp = top;
        top = top->next;
    }

    void peak() {
        if(isEmpty()) {
            cout << "Stack is Empty";
            return;
        }

        cout << top->data<<endl;
    }

    void print(Stack s) {
        while(!s.isEmpty()) {
            Node* temp = top;
            top=top->next;
            // s.pop();
            cout << temp->data<<endl;
        }
    }
};
    
int main() {
    Stack st;
    st.push(3);
    st.push(1);
    st.push(4);
    st.pop();
    st.peak();
    st.print(st);

    
    return 0;
}