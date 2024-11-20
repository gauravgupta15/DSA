#include <iostream>
using namespace std;

class Queue {
    int *arr;
    int size;
    int front;
    int rear;

    public:
    Queue(int n) {
        arr = new int[n];
        front = rear = -1;
        size = n;
    }

    bool isEmpty() {
        return front == -1;
    }
    bool isFull() {
        return rear == size-1;
    }

    void push(int x) {
        if(isFull()) {
            cout << "Queue Overflow";
            return;
        } else if(isEmpty()) {
            front = rear = 0;
            arr[0] = x;
        } else{
            rear = rear+1;
            arr[rear] = x ;
        }
    }

    void pop() {
        if(isEmpty()) {
            cout<<"Queue UnderFlow";
            return;
        } else {
            if(front == rear) {
                front = rear = -1;
            } else {
                front = front + 1;
            }
        }
    }

    int front() {
        if(isEmpty()) {
            cout <<"Queue is Empty";
            return -1;
        } else {
            return arr[front];
        }
    }
};
    
int main() {
    
    Queue q(5);
    for (int i = 0; i < 5; i++)
    {
       q.push(i);
    }
    
    
    return 0;
}