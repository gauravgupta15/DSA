#include <iostream>
#include<vector>
using namespace std;

class Node {
    public:

    int data;
    Node* next;
    public:
    Node(int d) {
        data=d;
        next = NULL;
    }
};

Node* convertArrToLL(vector<int> &arr) {

    Node* head = new Node(arr[0]);
    Node* mover = head;

    for (int i = 1; i <arr.size(); i++)
    {
        Node* temp = new Node(arr[i]);
        mover-> next = temp;
        mover = temp;
    }

    return head;
}

void print(Node* head) {
    Node* curr= head;
    while(curr != NULL) {
        cout << curr->data <<" ";
        curr=curr->next;
    }

}

Node* deleteHead(Node* head) {

    if(head==NULL) return head;
    Node* temp = head;
    head = head->next;

    delete temp;

    return head;
    
}

Node* deleteAtTail(Node* head) {
    if(head==nullptr || head->next == nullptr) return nullptr;

    Node* curr = head;
    while(curr->next-> next != NULL) {
        curr=curr->next;
    }
    delete curr->next;
    curr->next=nullptr;

    return head;
}

Node* deleteAtK(Node* head ,int k) {

    // deletation of index 1 means head:
    if(head == NULL) {
            return head;
    } 
    if(k==1) {
        
        Node* temp = head;
        head = head ->next;
        delete temp;
        return head;
    }
   


    Node* curr=head;
    Node* prev=NULL;

    int cnt=0;

    while(curr != NULL) {
        cnt++;
        if(cnt==k) {
            prev->next = prev->next->next;
            delete curr;
            break;
        }
        prev = curr;
        curr= curr->next;
    }

    
    return head;
}


    //Inserting to the head:
Node* insetAtHead( Node* &head , int val) {
    Node* temp = new Node(val);
    temp->next = head;
    temp = head;
    return head;
} 


// NOw solving problems arrounnd it: 
// 1. find middle of the linked list: 

int midElement(Node* head) {
    Node* slow = head;
    Node* fast = head;

    if(head == NULL || head -> next == NULL) {
        return head->data;
    }
    while(fast->next != NULL) {
        fast = fast->next;
        if(fast != NULL) {
            fast = fast->next;
        }
        slow = slow ->next;
    }
    int mid = slow -> data;
    return mid;
}
// Problems on linked list: 
// 2. Reverse the linked list

Node* reverseLL(Node* head) {
    if(head == NULL || head->next == NULL) {
        return head;
    }
    Node* prev = NULL;
    Node* curr = head;
    Node* Next = head;
    while(curr != NULL) {
        Next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = Next;
    }
    return prev;
}

// Problem 3: Group Odd indexes and Even indexes in linked list:
Node* oddEvenLL(Node* head) {
    Node* odd = head;
    Node* even = head->next;
    Node* groupHead = new Node(odd->data);
    Node* curr = groupHead;
    if(head == NULL) {
        return NULL;
    }

    while(odd->next != NULL) {
        odd=odd->next->next;
        Node* newNode = new Node(odd->data);
        curr->next= newNode;
        curr=curr->next;
    }
    Node* temp = new Node(even->data);
    curr->next = temp;
    curr=curr->next;
    while(even->next != NULL) {
        even=even->next;
        if(even->next != NULL) {
            even=even->next;
            Node* newNode = new Node(even->data);
            curr->next = newNode;
            curr=curr->next;
        }
        
    }
    return groupHead;
}


// remove Duplicate in sorted linkedlist: 
Node* removeDup(Node* head) {
    if(head == NULL || head -> next == NULL) {
        return head;
    }

    Node* fast = head->next;
    Node* curr = head;

    while (fast != NULL)
    {
        if(curr->data == fast->data) {
            Node* temp = fast;
            curr->next = NULL;
            temp->next = NULL;
            curr->next = fast;
            fast = fast->next;
            delete temp;
        } else {
            curr=fast;
            fast = fast ->next;
        }
    }
    return head;
    
}



int main() {
    vector<int> arr = {11,12,12,13};
    
    Node* head = convertArrToLL(arr);
    cout<<"all the linked list : ";
    print(head);
    cout<<endl;
    
    // cout << "\n after deleted at head: ";
    // head = deleteHead(head);
    // print(head);
    // cout<<endl;
    // head = deleteAtTail(head);
    //  cout << "after deleted at tail: ";
    // print(head);

    // // Inserting element at index: 
    // int k;
    // cout << "\n Enter the index to delete the element: ";
    // cin>>k;

    // head = deleteAtK(head,k);
    // print(head);

    // insetAtHead(head,12);
    // cout <<"\n After insert to the head: ";
    // print(head);

    int mid = midElement(head);
    cout << "The middle element of the linked list is: "<<mid<<endl;

    head = reverseLL(head);
    cout << "the reverse order of the linked list is: " ;
    print(head); 
    cout << endl;
    
    head = oddEvenLL(head);
    print(head);
    cout<<endl;
    
    cout <<"Remove Duplicate in sorted Linked list: "<<endl;
    head = removeDup(head);
    print(head);
    return 0;
}