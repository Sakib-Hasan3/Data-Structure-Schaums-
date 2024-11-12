#include <iostream>
using namespace std;

struct Node {
    int data;
     Node* left;
     Node* right;

    Node(int val) {
        data = val; 
        left = right = nullptr; }
};

void inOrderTraversal(Node* root) {
    if (root == nullptr) {
        return;
    }
    inOrderTraversal(root->left);   
    cout << root->data << " ";  
    inOrderTraversal(root->right);  
}

int main() {
    
    Node* root = new Node(1);
    root->right = new Node(2);
    root->right->left = new Node(3);

    cout << "In-order Traversal: ";
    inOrderTraversal(root);
    cout << std::endl;
    return 0;
}