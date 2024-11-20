#include <iostream>
using namespace std;

#define MAX_SIZE 100

class QueueArray {
private:
    int *arr;
    int front, rear;
    int size;

public:
    QueueArray(int s) {
        this->size = s;
        front = rear = -1;
        arr = new int(s);

    }

    bool isEmpty() {
        return (front == -1 && rear == -1);
    }

    bool isFull() {
        return (rear + 1) % MAX_SIZE == front ? true : false;
    }

    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue is full. Cannot enqueue more elements." << endl;
            return;
        } else if (isEmpty()) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % MAX_SIZE;
        }
        arr[rear] = value;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot dequeue." << endl;
            return;
        } else if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % MAX_SIZE;
        }
    }

    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return -1;
        }
        return arr[front];
    }

void print(QueueArray q) {
    
        while(!q.isEmpty()) {
            int val = q.peek();
            cout << val <<endl;
            q.dequeue();
        }

    }
};

int main() {
    QueueArray q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    cout << "Front element: " << q.peek() << endl;
    


    q.print(q);
    return 0;
}
