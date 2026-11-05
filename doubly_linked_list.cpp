#include <iostream>
#include <vector>
#include<algorithm>
#include <string>
using namespace std;


class Node {
public:
    int data;
    Node *next;
    Node *prev;

    Node(int d) {
        data = d;
        next = NULL;
        prev = NULL;
    }
};

void insertHead(Node *&head, int d){
    Node *temp = new Node(d);
    temp->next=head;
    if (head != NULL) {
        head->prev = temp;
    }

    head = temp;
}

void display(Node *head) {
    Node *ptr = head;

    while (ptr != NULL) {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }

    cout << endl;
}


void insertTail(Node *&tail,int d){
    Node *temp1 = new Node(d);
    tail->next = temp1;
    if (tail != NULL) {
        tail->next = temp1;
    }

    tail = temp1;
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
    current->next->prev = temp;
    current->next = temp;
    temp->prev=current;
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

void deletePos(Node *&head, Node *&tail, int pos) {

    
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }

   
    if (pos <= 0) {
        cout << "Invalid position" << endl;
        return;
    }

    
    if (pos == 1) {
        Node *temp = head;

        head = head->next;
        head->prev = NULL;
        delete temp;
        return;
    }

    Node *current = head;

    for (int i = 1; i < pos; i++) {
        if (current == NULL) {
            cout << "Invalid position" << endl;
            return;
        }

        current = current->next;
    }

    if (current == NULL) {
        cout << "Invalid position" << endl;
        return;
    }

   
    if (current == tail) {
        tail = current->prev;
        tail->next = NULL;

        delete current;
        return;
    }

    current->prev->next = current->next;
    current->next->prev = current->prev;

    delete current;
}

int main(){
    Node *node = new Node(10);
    Node *tail = node;
    Node *head = node;

    insertHead(head,20);
    insertTail(tail,30);
    insertPos(head,tail,2,40);

   display(head);
   cout<<count(head)<<endl;
}