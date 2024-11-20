#include <iostream>
#include<vector>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int d) {
        next = NULL;
        prev = NULL;
        this->data = d;
    }
};

Node* convertLL(vector<int>&arr) {
    if(arr.size() == 0) {
        return NULL;
    }
    Node* head = new Node(arr[0]);
    Node* curr = head;

    for(int i=1; i<arr.size(); i++) {
        Node* temp = new Node(arr[i]);
        curr->next = temp;
        temp->prev = curr;
        curr = temp;
    }
    return head;
}

void print(Node* head) {
    Node* curr = head;
    while(curr != NULL) {
        cout << curr->data<<endl;
        curr=curr->next;
    }
}

Node* insertAtHead(Node* head, int val) {
    Node* newNode = new Node(val);
    if(head == NULL) {
        return newNode;
    }

    newNode->next = head;
    head -> prev = newNode;
    head = newNode;
    return head;
} 

Node* insertAtTail(Node* head, int val) {
    Node* newNode = new Node(val);
    if(head == NULL) {
        return newNode;
    }
    Node* curr = head;
    while(curr->next != NULL) {
        curr=curr->next;
    }
    curr->next = newNode;
    newNode->prev = curr;
    return head;
}

Node* insertAtPos(Node* head, int val, int k) {
    Node* newNode = new Node(val);
    if(head == NULL) {
        return newNode;
    }

    if(k==1) {
        return insertAtHead(head,val);
    }

    Node* front = head;
    Node* rear = NULL;
    int cnt = 0;
    while(front != NULL) {
        cnt++;
        if(cnt == k) {
            rear->next = newNode;
            newNode->next = front;
            newNode->prev = rear;
            front->prev = newNode;
        }
        rear = front;
        front = front ->next;
    }

    if(front == NULL) {
        return insertAtTail(head, val);
    }
    return head;
}

Node* deleteAtHead(Node* head) {
    if(head == NULL || head->next == NULL) {
        return NULL;
    }
    
    Node* temp = head;
    head = head->next;
    temp ->next = NULL;
    delete temp;
    return head;
}

Node* deleteAtTail(Node* head) {
    if(head == NULL || head->next == NULL) {
        return NULL;
    }

    Node* curr = head;
    while(curr->next != NULL) {
        curr=curr->next;
    }
    Node* temp = curr;
    curr->prev->next = NULL;
    temp->prev = NULL;
    delete temp;
    return head;
}

Node* deleteAtPos(Node* head, int k) {
    if(head == NULL || head->next == NULL) {
        return NULL;
    }

    if(k==1) {
        return deleteAtHead(head);
    }

    Node* front = head;
    Node* rear = NULL;
    int cnt=0;
    while(front->next != NULL) {
        cnt++;
        if(cnt == k) {
            Node* temp = front;
            rear -> next = front -> next;
            front->next->prev = rear;
            temp->next = NULL;
            temp->prev = NULL;
            delete temp;
            break;
        }
        rear = front;
        front = front ->next;
    }

    if(front->next == NULL) {
        return deleteAtTail(head);
    }
    return head;
}
int main() {
    vector<int>arr={1,2,3,4,5};
    Node* head = convertLL(arr);
    head = insertAtHead(head,12);
    head = insertAtTail(head,42);
    head = insertAtPos(head,23,8);
    head= deleteAtHead(head);
    head = deleteAtTail(head);
    head = deleteAtPos(head,6);
    print(head);

    
    return 0;
}