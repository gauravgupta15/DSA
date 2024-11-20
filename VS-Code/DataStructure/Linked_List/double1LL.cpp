#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node* prev;

    public: 
    Node(int d) {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }
};

Node* convertLL(int arr[], int n) {
    Node* head = new Node(arr[0]);
    Node* back = head;

    for (int i = 1; i < n; i++)
    {
        Node* temp = new Node(arr[i]);
        temp -> prev = back;
        back -> next = temp;
        back = temp;
    }
    
    return head;

}

void print(Node* head) {
    Node* curr = head;
    while(curr != NULL) {
        cout<<curr->data<<endl;
        curr=curr->next;
    }
}

void len(Node* head) {
    Node* temp = head;
    int len=0;
    while(temp != NULL) {
        len++;
        temp = temp->next;
    }
    cout << "The length of Doubly Linked List: "<<len<<endl;
}

Node* deleteAtHead(Node* head) {
    if(head == NULL) {
        return head;
    } 
    Node* temp = head;
    head = head -> next;
    head -> prev = NULL;
    temp -> next = NULL;
    delete temp;
    return head;
}

Node* deleteAtTail(Node* head) {
    if(head==NULL) {
        return head;
    }
    if(head->next == NULL) {
        delete head;
        return head;
    }
    Node* curr=head;
    while(curr->next != NULL) {
        curr=curr->next;
    }
    Node* temp = curr->prev;
    curr->prev = NULL;
    temp->next = NULL;
    delete curr;

    return head;
}

Node* deleteAtK(Node* head, int k) {
    if(head == NULL) return NULL;

    Node* temp = head;
    int cnt=0;
    while(temp != NULL) {
        cnt++;
        if(cnt == k) break;
        temp=temp->next;
    }

    Node* back = temp -> prev;
    Node* front = temp -> next;

    if(back == NULL && front == NULL) {
        delete temp;
        return NULL;
    }
    else if(back == NULL) {
        return deleteAtHead(head);
    }
    else if(front == NULL) {
        return deleteAtTail(head);
    }

    back->next = front;
    front->prev = back;
    temp ->next = NULL;
    temp-> prev = NULL;
    delete temp;
    return head;

}

Node* insertAtHead(Node* head , int val) {
    Node* temp = new Node(val);
    if(head == NULL) {
        head= temp;
        return head;
    }

    temp->next = head;
    head -> prev = temp;
    head = temp;
    return head;
    
} 

Node* insertAtTail(Node* head, int val) {
    Node* temp = new Node(val);
    if(head==NULL) {
        temp=head;
        return temp;
    }
    Node* curr = head;
    while(curr->next != NULL) {
        curr=curr->next;
    }
    curr->next = temp;
    temp -> prev = curr;
    
    return head;
}

Node* insertAtPos(Node* head, int k, int val) {
    Node* curr = new Node(val);
    Node* rear = NULL;
    Node* front = NULL;
    if(head == NULL) {
        return curr;
    }
    if(k==1) {
        return insertAtHead(head,val);
    }
    Node* temp = head;

    int cnt=0;
    while(temp != NULL) {
        cnt++;
        if(cnt==k) {
            break;
        }
        temp = temp ->next;
    }
        rear = temp -> prev;
        front = temp -> next;
    if(front == NULL) {
        return insertAtTail(head,val);
    }

    if(front != NULL && rear != NULL) {
        rear -> next = curr;
        temp -> prev = curr;
        curr->next=temp;
        curr->prev = rear;
        return head;
    }
        
    }

Node* reverseDLL(Node* head) {
    Node* back = NULL;
    Node* curr = head;
    Node* forward = NULL;

    while(curr != NULL) {
        forward = curr->next;
        curr->next = back;
        curr->prev = forward;
        back = curr;
        curr=forward;
    }
    return back;
}
    
int main() {
    int n=5;
    
    int arr[n] = {2,4,5,3,9};
    Node* head = convertLL(arr,n);
    print(head);
    len(head);
    // cout <<head->next->data;
//     int k = 4;
//    head = deleteAtK(head,k);
//     print(head);
//     len(head);

    // head = insertAtHead(head,1);
    // print(head);
    // len(head);
    
    // head = insertAtTail(head,10);
    // print(head);
    // len(head); 
    // head = insertAtPos(head,5,3);
    // print(head);
    // len(head); cout<<endl;

    head = reverseDLL(head);
    print(head);
  
    // head = in
    return 0;
}