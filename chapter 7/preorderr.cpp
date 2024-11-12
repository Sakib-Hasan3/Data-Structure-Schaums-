#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;


    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

void preorderTraversal(Node* root) {
    if (root == nullptr)
        return;

    cout << root->data << " ";
    
    // Traversing left subtree
    preorderTraversal(root->left);
    
    // Traversing right subtree
    preorderTraversal(root->right);
}

int main() {

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout << "Pre-order Traversal: ";
    preorderTraversal(root);
    cout << endl;

    return 0;
}