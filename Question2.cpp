#include <iostream>
#define MAX_SIZE 5
using namespace std;

int ticketIDs[MAX_SIZE];
int front;
int rear;

void initializeQueue() {

}

bool isEmpty() {
}

bool isFull() {
}

bool enqueue(int ticketID) {
}

bool dequeue(int& ticketID) {
}

void display() {
}

int main() {
    int ticketID;
    int option;

    initializeQueue();

    while (true) {
        try {
            cin >> option;
        } catch (...) {
            break;
        }

        switch (option) {
            case 1:
                try {
                    cin >> ticketID;
                } catch (...) {
                    break;
                }
                if (enqueue(ticketID)) {
                    // Helpdesk ticket enqueued successfully
                }
                break;

            case 2:
                if (dequeue(ticketID)) {
                    cout << "Dequeued Helpdesk Ticket ID: " << ticketID << endl;
                } else {
                    cout << "Queue is empty." << endl;
                }
                break;

            case 3:
                display();
                break;

            case 4:
                cout << "Exiting the program" << endl;
                return 0;

            default:
                cout << "Invalid option." << endl;
                break;
        }
    }

    return 0;
}