#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int d) {
        data = d;
        next = NULL;
    }
};

// Insert at the beginning
void insertHead(Node *&head, Node *&tail, int d) {
    Node *temp = new Node(d);

    if (head == NULL) {          // empty list: node points to itself
        head = tail = temp;
        tail->next = head;
        return;
    }

    temp->next = head;
    head = temp;
    tail->next = head;           // keep the circle closed
}

// Insert at the end
void insertTail(Node *&head, Node *&tail, int d) {
    Node *temp = new Node(d);

    if (head == NULL) {
        head = tail = temp;
        tail->next = head;
        return;
    }

    tail->next = temp;
    tail = temp;
    tail->next = head;           // new tail points back to head
}

// Count nodes (stop when we come back to head, NOT NULL)
int count(Node *head) {
    if (head == NULL) return 0;

    Node *current = head;
    int cnt = 0;

    do {
        cnt++;
        current = current->next;
    } while (current != head);

    return cnt;
}

// Display (do-while so a 1-node list still prints)
void display(Node *head) {
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }

    Node *ptr = head;

    do {
        cout << ptr->data << " ";
        ptr = ptr->next;
    } while (ptr != head);

    cout << endl;
}

// Insert at a position (1-based)
void insertPos(Node *&head, Node *&tail, int position, int d) {
    int n = count(head);

    if (position < 1 || position > n + 1) {
        cout << "Invalid position!" << endl;
        return;
    }

    if (position == 1) {
        insertHead(head, tail, d);
        return;
    }

    if (position == n + 1) {
        insertTail(head, tail, d);
        return;
    }

    Node *current = head;
    for (int i = 1; i < position - 1; i++) {
        current = current->next;
    }

    Node *temp = new Node(d);
    temp->next = current->next;
    current->next = temp;
}

// Delete at a position (1-based) - head/tail passed by reference
void deletePosition(Node *&head, Node *&tail, int pos) {
    int n = count(head);

    if (head == NULL || pos < 1 || pos > n) {
        cout << "Invalid position!" << endl;
        return;
    }

    if (n == 1) {                // only node
        delete head;
        head = tail = NULL;
        return;
    }

    if (pos == 1) {
        Node *temp = head;
        head = head->next;
        tail->next = head;
        delete temp;
        return;
    }

    Node *prev = head;
    for (int i = 1; i < pos - 1; i++) {
        prev = prev->next;
    }

    Node *temp = prev->next;
    prev->next = temp->next;

    if (temp == tail) {          // deleted the last node
        tail = prev;
    }

    delete temp;
}

int main() {
    Node *head = NULL;
    Node *tail = NULL;

    insertTail(head, tail, 10);
    insertHead(head, tail, 20);
    insertTail(head, tail, 30);

    cout << "Circular List: ";
    display(head);
    cout << "Number of nodes: " << count(head) << endl;

    insertPos(head, tail, 2, 40);
    cout << "After inserting 40 at position 2: ";
    display(head);

    deletePosition(head, tail, 1);
    cout << "After deleting position 1: ";
    display(head);

    deletePosition(head, tail, count(head));
    cout << "After deleting last node: ";
    display(head);

    cout << "tail->next == head ? " << (tail->next == head ? "yes" : "no") << endl;

    return 0;
}
