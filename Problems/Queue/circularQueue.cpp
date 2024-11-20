#include <iostream>

using namespace std;

class CircularQueue {
private:
    int *arr;
    int size;
    int front;
    int rear;

public:
    CircularQueue(int s) {
        size = s;
        arr = new int[size];
        front = rear = -1;
    }

    ~CircularQueue() {
        delete[] arr;
    }

    bool isEmpty() {
        return (front == -1 && rear == -1);
    }

    bool isFull() {
        return ((rear + 1) % size == front);
    }

    void enqueue(int data) {
        if (isFull()) {
            cout << "Queue is full. Cannot enqueue." << endl;
            return;
        } else if (isEmpty()) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % size;
        }
        arr[rear] = data;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot dequeue." << endl;
            return;
        } else if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % size;
        }
    }

    int frontElement() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return -1; // or throw an exception
        }
        return arr[front];
    }

    int rearElement() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return -1; // or throw an exception
        }
        return arr[rear];
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return;
        }

        int i = front;
        while (i != rear) {
            cout << arr[i] << " ";
            i = (i + 1) % size;
        }
        cout << arr[rear] << endl;
    }
};

int main() {
    CircularQueue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);

    cout << "Queue after enqueuing 10, 20, 30, 40: ";
    q.display();

    q.dequeue();
    cout << "Queue after dequeuing: ";
    q.display();

    cout << "Front element: " << q.frontElement() << endl;
    cout << "Rear element: " << q.rearElement() << endl;

    return 0;
}
