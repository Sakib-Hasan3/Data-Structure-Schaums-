#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertFirst(Node*& start, Node*& avail, int item) {
    if (avail == NULL) {
        cout << "OVERFLOW: No available nodes to insert." << endl;
        return;
    }

    Node* newNode = avail;
    avail = avail->next;

    newNode->data = item;
    newNode->next = start;
    start = newNode;
}

// Function to traverse and print the linked list
void linkedListTraversal(Node* ptr) {
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

    // Initialize an empty linked list (START)
    Node* start = NULL;

    int itemCount;
    cout << "Enter the number of items to insert: ";
    cin >> itemCount;

    // Take input from user and insert items at the beginning of the list
    for (int i = 0; i < itemCount; ++i) {
        int item;
        cout << "Enter item " << (i + 1) << ": ";
        cin >> item;
        insertFirst(start, avail, item);
    }

    // Display the linked list after insertions
    cout << "Linked list after insertions: ";
    linkedListTraversal(start);

    // Display remaining nodes in AVAIL
    cout << "Remaining nodes in AVAIL: ";
    linkedListTraversal(avail);

    return 0;
}
