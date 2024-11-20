#include <iostream>
using namespace std;

struct TreeNode {
    int key;
    TreeNode* left;
    TreeNode* right;
};

TreeNode* newNode(int item) {
    TreeNode* temp = new TreeNode;
    temp->key = item;
    temp->left = temp->right = nullptr;
    return temp;
}

TreeNode* insert(TreeNode* node, int key) {
    if (node == nullptr)
        return newNode(key);
    if (key < node->key)
        node->left = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);
    return node;
}

TreeNode* search(TreeNode* root, int key) {
    
    if (root == nullptr || root->key == key)
        return root;
    if (root->key < key)
        return search(root->right, key);
    return search(root->left, key);
}

void preOrder(TreeNode* node) {
    if (node == nullptr)
        return;
    cout << node->key << " ";
    preOrder(node->left);
    preOrder(node->right);
}

int main() {
    TreeNode* root = nullptr;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    int key = 6;
    if (search(root, key) == nullptr)
        cout << key << " not found" << endl;
    else
        cout << key << " found" << endl;

    key = 60;
    if (search(root, key) == nullptr)
        cout << key << " not found" << endl;
    else
        cout << key << " found" << endl;

        preOrder(root);

    return 0;
}
