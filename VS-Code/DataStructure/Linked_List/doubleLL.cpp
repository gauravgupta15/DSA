#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* prev;
    Node* next;

    // Constructer:
    Node(int d)
    {
        this-> data = d;
        this-> prev = NULL;
        this-> next = NULL;
    }
};

// Traversing the Linked List:
void print(Node* head)
{
    Node* temp = head;
    
    while(temp != NULL)
    {
        cout << temp-> data << " ";
        temp = temp -> next;
    } 
    cout << endl;
}

// Give the length of linked list:
int getLength(Node* head)
{
    Node* temp = head;
    int len=0;
    while(temp != NULL)
    {
        len++;
        temp = temp-> next;

    }
    return len;
}

// Insert At Head of Linked List:
void insertAtHead(Node* &head, int data)
{
     Node* temp = new Node(data);
     temp -> next = head;
     head -> prev = temp;
     head = temp;
}

// Insert At Head of Linked List:
void insertAtTail(Node* &tail, int d)
{
    Node* temp = new Node(d);
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp;
}

// Insert At any Position in Linked List:
void insertAtPosition(Node* &head, int position, int d)
{
    // Insert at Start:
    if(position == 1) {
        insertAtHead(head, d);
        return;
    }

    // Insert at any postion:
    

    // Insert at Last Postion:

}

void reverseLL(Node * head)
{
    Node* curr = head;
    Node* forward = NULL;
    Node* prev = NULL;

    while(curr != NULL)
    {
        forward = curr-> next;
        curr->next = prev;
        curr->prev = forward;

        prev = curr;
        curr = forward;
    }
    return print(prev);
}

int main() {
    
    Node* node1 = new Node(10);
   

    Node* head = node1;
    Node* tail = node1;
    print(head);

    insertAtHead(head , 11);
    print(head);

    insertAtHead(head , 13);
    print(head);

    insertAtHead(head , 7);
    print(head);

    insertAtTail(tail, 19);
    print(head);

cout << "Reverse of the the doublely Linked List: "<<endl;
    reverseLL(head);
    // print(head);

    cout << "The Length of the Linked list: " << getLength(head) <<endl;
    return 0;
}