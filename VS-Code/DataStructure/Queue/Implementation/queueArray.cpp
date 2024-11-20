#include <iostream>
using namespace std;
class Queue {
    public:
    int rear;
    int front;
    int *arr;
    int s;

    Queue(int size) {
        front = rear = -1;
        this->s = size;
        arr = new int(s);
    }
    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return (rear == s-1);
    }

    void push(int d) {

        if(front == -1 && rear ==-1) {
            front++;
            arr[++rear] = d;
        } else{
            arr[++rear] = d;
        }
        if(isFull()) {
            cout << "Queue OverFlow" <<endl;
            return;
        }

    }

    void pop() {
        if(isEmpty()){
            cout << "Queue UnderFlow"<<endl;
            return;
        }
        if(front > s)
            front++;
    }


    void print() {
        int val = q.front();

    }
    
        
    
};

int main() {
    Queue  q(4);
   for(int i=1; i<4; i++) {
    q.push(i);
   }


    // q.push(5);
    // q.push(5);
    // q.push(5);
    // q.push(5);
    


    
    return 0;
}