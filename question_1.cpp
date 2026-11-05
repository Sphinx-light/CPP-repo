#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

void sortedInsert(Node **head, int d) {

    // Create a new node for every insertion
    Node *node = new Node();
    node->data = d;
    node->next = NULL;

    // If list is empty or new data is smaller than head
    if (*head == NULL || d <= (*head)->data) {
        node->next = *head;
        *head = node;
        return;
    }

    // Find the correct position
    Node *current = *head;

    while (current->next != NULL &&
           current->next->data < d) {
        current = current->next;
    }

    // Insert node
    node->next = current->next;
    current->next = node;
}

void display(Node *head) {
    Node *current = head;

    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }

    cout << endl;
}

int main() {

    Node *head = NULL;

    int n, data;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> data;
        sortedInsert(&head, data);
    }

    display(head);

    return 0;
}