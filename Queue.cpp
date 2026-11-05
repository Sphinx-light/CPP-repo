#include <iostream>
using namespace std;

const int SIZE = 5;
class queue{
    public:
    int front , rear;
    int arr[SIZE];

    queue(){
        front = -1;
        rear = -1;
    }

    void enqueue(int data){
        if(rear==SIZE-1){
            cout<<"Queue overflow";
        }
        if(front==-1){
            front++;
            rear++;
            arr[rear] = data;
            return;
        }

        rear++;
        arr[rear]=data;
    }

    int dequeue(){
        if(front==-1 || front>rear){
            cout<<"Queue underflow"<<endl;
            return 0;
        }
        int x = arr[front];
        front++;
        return x;
    }
    int peek(){
         if(front==-1 || front>rear){
            cout<<"Queue underflow"<<endl;
            return -1;
        }
        return arr[front];
    }
    void display(){
        for(int i = 0; i<rear;i++){
            cout<<arr[i]<<" ";
        }
    }
};
int main(){
    queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    q.display();
    cout<<endl;

    cout<<"Peek / Front data: "<<q.peek()<<endl;

    cout<<"The value removed by dequeue: "<<q.dequeue()<<endl;
    
    cout<<"Peek after dequeue: "<<q.peek()<<endl;

    return 0;
}