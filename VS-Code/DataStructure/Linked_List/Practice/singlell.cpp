#include <iostream>
#include<vector>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node(int d) {
        this->data = d;
        next = nullptr;
    }
    Node() {
        next= NULL;
    }

};
    Node* convertLL(vector<int> &arr) {

        if(arr.size()==0) {
            return nullptr;
        }
      Node* head = new Node(arr[0]);
        Node* curr = head;
        
        for(int i=1; i<arr.size(); i++) {
            Node* temp = new Node(arr[i]);
            curr->next = temp;
            curr=temp;
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

    Node* insertAtHead(Node* head, int data) {
        Node* ptr = new Node(data);
        ptr->next = head;
       head = ptr;
       return head;
    }
    void insertAtTail(Node* &head, int data) {
        Node* newNode = new Node(data);
        if(head == NULL) {
            head = newNode;
            return;
        }

        Node* curr = head;
        while(curr->next != NULL) {
            curr=curr->next;
        }
        curr->next = newNode;
        

    }

    Node* insertAtPos(Node* head, int data, int k) {
        Node* newNode= new Node(data);

        if(head == NULL) {
            return newNode;
        }

        if(k == 1)  {
            return insertAtHead(head,data);
        } 
        
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 0;
        while(curr != NULL) {
            cnt++;
            if(cnt == k) {
                prev ->next = newNode;
                newNode->next = curr;
                break;
            }
            prev = curr;
            curr = curr ->next;
        }

        if(curr == NULL) {
            insertAtTail(head,data);
        }
        return head;
    }

    Node* deleteAtHead(Node* head) {
        if(head == NULL || head -> next == NULL) {
            return head;
        }

        Node* temp = head;
        head = head -> next;
        delete temp;
        return head;
    }
    
    Node* deleteAtTail(Node* head) {
        if(head == NULL || head->next == NULL) {
            return NULL;
        }

        Node* curr = head;
        while(curr->next->next != NULL) {
            curr= curr->next;
        }
        Node* temp = curr->next;
        curr->next = NULL;
        delete temp;

        return head;
    }

    Node* deleteATPos(Node* head, int k) {
        if(head == NULL || head->next == NULL) {
            return NULL;
        }

        if(k==1) {
            return deleteAtHead(head);
        }
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 0;
        while(curr != NULL) {
            cnt++;
            if(k == cnt) {
                Node* temp = curr;
                prev->next = curr->next;
                temp->next = NULL;
                delete temp;
                break;
            }
            prev = curr;
            curr=curr->next;
        }

        return head;
    }
int main() {
    
    vector<int>arr ={1};
    Node* head = convertLL(arr);
    // print(head);

    head = insertAtHead(head,12);
    insertAtTail(head,13);
    head = insertAtPos(head,45,4);
    // head = deleteAtHead(head);
    // head = deleteAtTail(head);
    head = deleteATPos(head,4);
    print(head);
    
    return 0;
}