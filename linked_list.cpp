#include <iostream>
#include <vector>
#include<algorithm>
#include <string>
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

void insertHead(Node *&head, int d) {
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertTail(Node *&tail, int d) {
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

int count(Node *head) {
    Node *current = head;
    int cnt = 0;

    while (current != NULL) {
        cnt++;
        current = current->next;
    }

    return cnt;
}

void display(Node *head) {
    Node *ptr = head;

    while (ptr != NULL) {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }

    cout << endl;
}

void insertPos(Node *&head, Node *&tail, int position, int d) {
    Node *current = head;
    
    if (position == 1) {
        insertHead(head, d);
        return;
    }
    else if(current->next ==NULL){
        insertTail(tail,d);
        return;
    }
    
    int cnt = 1;

    while (cnt < position - 1 && current != NULL) {
        current = current->next;
        cnt++;
    }

    if (current == NULL) {
        cout << "Invalid position!" << endl;
        return;
    }

    if (current->next == NULL) {
        insertTail(tail, d);
        return;     
    }

    Node *temp = new Node(d);
    temp->next = current->next;
    current->next = temp;
}


void deletePosition(Node *head,int pos){
    if(pos==1){
        Node *temp = head;
        head = head->next;
        delete temp;
    }
}


int main() {
    Node *node = new Node(10);
    Node *head = node;
    Node *tail = node;

    insertHead(head, 20);
    insertTail(tail, 30);

    cout << "Linked List: ";
    display(head);

    cout << "Number of nodes: " << count(head) << endl;

    insertPos(head, tail, 2, 40);

    cout << "After inserting 40 at position 2: ";
    display(head);

    cout << "Number of nodes: " << count(head) << endl;

    deletePosition(head,1);

    return 0;
}