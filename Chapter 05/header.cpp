#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertFirst(Node* header, Node*& avail, int item) {
    if (avail == NULL) {
        cout << "OVERFLOW: No available nodes to insert." << endl;
        return;
    }

    // Use the first node in avail as the new node
    Node* newNode = avail;
    avail = avail->next;

    // Insert the new node after the header
    newNode->data = item;
    newNode->next = header->next;
    header->next = newNode;
}

// Function to traverse and print the linked list starting from the header node
void linkedListTraversal(Node* header) {
    Node* ptr = header->next;  // Skip the header node itself
    while (ptr != NULL) {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}

int main() {
    int numNodes;
    cout << "Enter the number of available nodes: ";
    cin >> numNodes;

    // Initialize avail list with specified number of nodes
    Node* avail = nullptr;
    for (int i = 0; i < numNodes; ++i) {
        Node* newNode = new Node{0, avail};
        avail = newNode;
    }

    // Create a header node for the linked list
    Node* header = new Node{0, nullptr};  // Header node with data = 0 and next = nullptr

    int itemCount;
    cout << "Enter the number of items to insert: ";
    cin >> itemCount;

    // Take input from user and insert items at the beginning of the list (after the header)
    for (int i = 0; i < itemCount; ++i) {
        int item;
        cout << "Enter item " << (i + 1) << ": ";
        cin >> item;
        insertFirst(header, avail, item);
    }

    // Display the linked list after insertions
    cout << "Linked list after insertions: ";
    linkedListTraversal(header);

    // Display remaining nodes in AVAIL
    cout << "Remaining nodes in AVAIL: ";
    linkedListTraversal(avail);

    return 0;
}
