#include <iostream>
#include <vector>
#include <queue>
using namespace std;
class Node {
    public:

    int data;
    Node* left;
    Node* right;
    Node(int d) {
        this->data = d;
        this->left = NULL;
        this->right= NULL;
    }
};

    Node* buildTree(Node* root) {
        cout << "Enter data: "<<endl;
        int d;
        cin>>d;
            root = new Node(d);
        if(d == -1) {
            return NULL;
        }

        cout << "Enter the data of left side: "<<endl;
        root->left = buildTree(root->left);
        cout << "Enter the data of right side: "<<endl;
        root->right = buildTree(root->right);

        return root;
    }


    Node* buildTreeArray(vector<int> &arr, int index) {
        if(arr[index] == -1 || index >= arr.size())
            return NULL;
        Node* root = new Node(arr[index]);

        root->left = buildTreeArray(arr,2*index+1);

        root->right = buildTreeArray(arr, 2*index+2);

        return root;
    }

    void inOrderTraversal(Node* root) {
        if(root == NULL) return;

        inOrderTraversal(root->left);
        cout << root->data << " ";
        inOrderTraversal(root->right);
    }
    void PreOrderTraversal(Node* root) {
        if(root == NULL) return;

        cout << root->data << " ";
        PreOrderTraversal(root->left);
        PreOrderTraversal(root->right);
    }
    void PostOrderTraversal(Node* root) {
        if(root == NULL) return;

        PostOrderTraversal(root->left);
        PostOrderTraversal(root->right);
        cout << root->data << " ";
    }

    void levelOrderTraversal(Node* root) {

        if(root == NULL) return;

        queue<Node*> q;

         q.push(root);
         q.push(NULL);  // Sperator

          while(!q.empty()) {

            Node* temp = q.front();
            q.pop();
            if(temp == NULL) {
                cout << endl;
                if(!q.empty()) {
                    q.push(NULL);
                }
            } else {

                cout << temp -> data << " ";
                if(temp -> left) {
                    q.push(temp->left);
                }
                if(temp -> right) {
                    q.push(temp -> right);
                }
          }
        
    }
    }

// Problems on binary Trees:
// 1. Height of the binary Trees:
int heightBinaryTree(Node* root) {
    if(root == NULL) return 0;

    int h1 = heightBinaryTree(root -> left);
    int h2 = heightBinaryTree(root -> right);
    return max(h1,h2)+1;
}

    


    
int main() {
    

    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    // 7 2 1 -1 -1 5 4 3 -1  -1 -1  6 -1 -1 9 8 -1 -1 13 11 10 -1 -1 12 -1 -1 14 -1 -1 
    // vector<int>arr={9,2,1,8,4,3,7,5,6};
    Node* root = buildTree(root);
    
    cout << "InOrder Traversal : ";
    inOrderTraversal(root);
    cout << endl;
    cout << "PreOrder Traversal : ";
    PreOrderTraversal(root);
    cout << endl;
    cout << "PostOrder Traversal : ";
    PostOrderTraversal(root);
    cout << endl;
    cout << "LevelOrder Traversal : "<<endl;
    levelOrderTraversal(root);
    cout << endl;

    // height of the binary tree: 
    int height = heightBinaryTree(root);
    cout << "Height of the binary tree is : "<<height<<endl;

    
    return 0;
}