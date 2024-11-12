#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};


void del(Node*& start, Node*& avail, Node* loc, Node* locp) {
    
    if (locp == NULL) {
        start = loc->next;  
    } else {
        locp->next = loc->next;  
    }

    
    loc->next = avail;  
    avail = loc;        
}


void linkedListTraversal(Node* ptr) {
    while (ptr != NULL) {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}

int main() {
    // Create a linked list
    Node* head = new Node{7, nullptr};
    Node* second = new Node{11, nullptr};
    Node* third = new Node{41, nullptr};
    Node* fourth = new Node{66, nullptr};
                                                                                                                                                                                                                                                                                                                                                                                                
    // Link nodes
    head->next = second;
    second->next = third;
    third->next = fourth;

    
    Node* avail = nullptr;

   
    cout << "Original linked list: ";
    linkedListTraversal(head);


    Node* loc = second;   // Node to delete
    Node* locp = head;    // Previous node (7)

    // Delete the node
    del(head, avail, loc, locp);

    // Print the linked list after deletion
    cout << "Linked list after deletion: ";
    linkedListTraversal(head);

    // Print the available nodes
    cout << "Available nodes after deletion: ";
    linkedListTraversal(avail);

    return 0;
}
