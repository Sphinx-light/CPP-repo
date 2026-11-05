#include<iostream>
using namespace std;
const int MAX_SIZE = 5;

class Queue
{
    public:
    int arr[MAX_SIZE];
    int front;
    int rear;

    Queue() {
        front = -1;
        rear = -1;
    }

    void enqueue(int data){ 

        //Overflow
        if(rear == MAX_SIZE-1){
            cout<<"Queue Overflow"<<endl;
            return;
        }

        //1st data insertion
        if(front == -1){
            front = 0;
            rear = 0;
            arr[rear] = data;
            return;
        }
        
        //Normal
        rear++;
        arr[rear] = data;
    }

    int dequeue(){ 

        //Underflow
        if(front == -1  || front > rear){
            cout<<"Underflow"<<endl;
            return 0;
        }

        //Normal
        int x = arr[front];
        front++;
        return x;
    }

    int peek() {

        // underflow
        if(front == -1 || front > rear) {
            cout << "Empty Queue" << endl;
            return -1;
        }

        cout << "Current front element is "
             << arr[front] << endl;

        return arr[front];
    }

    void display() {

         if(front == -1 || front > rear) {
            cout << "Empty Queue" << endl;
            return;
        }

        cout << "Elements in queue are " << endl;

        for(int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }

        cout << endl;
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

    q.enqueue(60);   // Queue Overflow

    q.dequeue();
    q.dequeue();

    q.peek();

    q.display();

    return 0;
}