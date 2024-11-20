#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* left;
    Node* right;

    Node* newNode(int item) {
        Node* temp = new Node;
        temp->data = item;
        temp->left = temp->right = nullptr;
        return temp;
    }
    Node* input(Node* node, int data) {
        if (node == nullptr)
            return newNode(data);
        if (data < node->data)
            node->left = input(node->left, data);
        else if (data > node->data)
            node->right = input(node->right, data);
        return node;
    }

    int findingMinimum(Node* node) {
        if (node == nullptr)  
            return 0;
        node=node->left;
       }
       return node->data;
    }

};




int main() {
    Node* root = nullptr;
    root = root->input(root, 50);
    root->input(root, 10);
    root->input(root, 59);
    root->input(root, 39);
    root->input(root, 45);
    root->input(root, 3);
    root->input(root, 78);

    int ans = root->findingMinimum(root);
    cout << "The minimum : "<<ans;


    return 0;
}
