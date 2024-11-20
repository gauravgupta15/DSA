#include <bits/stdc++.h>
using namespace std;

// Structure of Node
class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        this->data = d;
        this->next = NULL;
    }
};

// Function to print the content of
// linked list starting from the
// given node
void printList(Node* n) {
    // Iterate till n reaches NULL
    while (n != NULL) {
        // Print the data
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}

// Get Length of the Linked list:
int getLength(Node* head) {
    Node* temp = head;
    int cnt = 0;
    while (temp != NULL) {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

// Get middle of the linked list:
int getmiddleLL(Node* head)
{
	int len = getLength(head);
	int ans = len/2;
	int cnt =0;

	Node* temp = head;
	while (cnt < ans)
	{
		temp = temp -> next;
		cnt++;
	}
	return temp -> data;
}
// Driver Code
int main() {
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* forth = new Node(4);
	Node* fifth = new Node(5);
    // Link the nodes correctly
    head->next = second;
    second->next = third;
    third->next = forth;
	forth -> next = fifth;
    printList(head);

    cout << "length of the linked list : " << getLength(head)<<endl;

	cout << "the middle element of the linked list is : "<< getmiddleLL(head);
    return 0;
}
