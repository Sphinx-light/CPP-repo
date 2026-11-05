#include<iostream>
using namespace std;

const int MAX_SIZE = 5;

class Queue
{
public:

    int arr[MAX_SIZE];
    int front;
    int rear;

    Queue()
    {
        front = -1;
        rear = -1;
    }

    void enqueue(int ele)
    {
        // Overflow
        if((rear + 1) % MAX_SIZE == front) {
            cout << "Queue Overflow" << endl;
            return;
        }

        // First insertion
        if(front == -1) {
            front = 0;
            rear = 0;
            arr[rear] = ele;
        }

        // Normal + Circular insertion
        else {
            rear = (rear + 1) % MAX_SIZE;
            arr[rear] = ele;
        }

        cout << "Enqueuing element " << ele << endl;
    }

    int dequeue()
    {
        // Underflow
        if(front == -1) {
            cout << "Queue Underflow" << endl;
            return -1;
        }

        int ans = arr[front];

        // Only one element
        if(front == rear) {
            front = -1;
            rear = -1;
        }

        // Normal + Circular movement
        else {
            front = (front + 1) % MAX_SIZE;
        }

        cout << "Removing element " << ans << endl;

        return ans;
    }

    int peek()
    {
        if(front == -1)
        {
            cout << "Empty Queue" << endl;
            return -1;
        }

        cout << "Current front element is "
             << arr[front] << endl;

        return arr[front];
    }

    void display()
    {
        if(front == -1)
        {
            cout << "Empty Queue" << endl;
            return;
        }

        cout << "Elements in queue are: ";

        int i = front;

        while(i != rear)
        {
            cout << arr[i] << " ";
            i = (i + 1) % MAX_SIZE;
        }
        cout<< arr[i] << endl;
    }
};

int main()
{
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    q.dequeue();
    q.dequeue();

    q.enqueue(60);
    q.enqueue(70);

    q.display();

    return 0;
}