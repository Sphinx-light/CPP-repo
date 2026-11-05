#include <iostream>
using namespace std;

const int SIZE = 5;

class queue {
public:
    int front, rear;
    int arr[SIZE];

    queue() {
        front = -1;
        rear = -1;
    }

    // ENQUEUE
    void enqueue(int data) {

        // Queue is full
        if ((rear + 1) % SIZE == front) {
            cout << "Queue overflow" << endl;
            return;
        }

        // Queue is empty
        if (front == -1) {
            front = 0;
            rear = 0;
        }
        // Normal + circular insertion
        else {
            rear = (rear + 1) % SIZE;
        }

        arr[rear] = data;
    }

    // DEQUEUE
    int dequeue() {

        // Queue is empty
        if (front == -1) {
            cout << "Queue underflow" << endl;
            return -1;
        }

        int x = arr[front];

        // Only one element was present
        if (front == rear) {
            front = -1;
            rear = -1;
        }
        // Move front circularly
        else {
            front = (front + 1) % SIZE;
        }

        return x;
    }

    // PEEK
    int peek() {

        // Queue is empty
        if (front == -1) {
            cout << "Queue is empty" << endl;
            return -1;
        }

        return arr[front];
    }

    // DISPLAY
    void display() {

        if (front == -1) {
            cout << "Queue is empty" << endl;
            return;
        }

        int i = front;

        while (true) {
            cout << arr[i] << " ";

            if (i == rear)
                break;

            i = (i + 1) % SIZE;
        }

        cout << endl;
    }
};

int main() {

    queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    q.display();

    cout << "Peek / Front data: " << q.peek() << endl;

    cout << "The value removed by dequeue: "<< q.dequeue() << endl;

    cout << "Peek after dequeue: "<< q.peek() << endl;

    cout<<"The elements of queue are: "<<endl;
    q.display();
    cout<<endl;

    // Testing circular behavior
    q.enqueue(60);

    q.display();

    q.dequeue();
    

    q.display();
    return 0;
}