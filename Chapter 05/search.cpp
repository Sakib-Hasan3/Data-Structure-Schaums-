#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Function to search for an item in a linked list
Node* search(Node* start, int item) {
    Node* ptr = start;

    // Traverse the linked list
    while (ptr != NULL) {
        if (ptr->data == item) {
            return ptr;  // Item found; return the node's address
        }
        ptr = ptr->next;  // Move to the next node
    }

    // If the item is not found
    return NULL;
}

// Function to print the linked list
void linkedListTraversal(Node* ptr) {
    while (ptr != NULL) {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}

int main() {
    // Create nodes
    Node* head = new Node{7, nullptr};
    Node* second = new Node{11, nullptr};
    Node* third = new Node{41, nullptr};
    Node* fourth = new Node{66, nullptr};

    // Link nodes
    head->next = second;
    second->next = third;
    third->next = fourth;

    // Print the linked list
    cout << "Linked list: ";
    linkedListTraversal(head);

    // Search for an item in the linked list
    int item = 41;
    Node* loc = search(head, item);

    // Display the result
    if (loc != NULL) {
        cout << "Item " << item << " found at node with address: " << loc << endl;
    } else {
        cout << "Item " << item << " not found in the list." << endl;
    }

    return 0;
}
