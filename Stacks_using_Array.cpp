#include<iostream>
using namespace std;


const int MAX_SIZE = 5;

class Stack
{
    public:
    int arr[MAX_SIZE];
    int top;

    Stack() {
        top = -1;
    }

    void push(int ele) {
        //overflow
        if(top == MAX_SIZE - 1) {
            cout<<"Stack Overflow"<<endl;
            return;
        }
        //normal
        top++;
        arr[top] = ele;
        cout<<" Pushing element " << ele <<endl;
    }

    int pop() {
        //underflow
        if(top == -1) {
            cout<<"Stack undeflow"<<endl;
            return -1;
        }

        //normal
        int ans = arr[top];
        top--;

        cout << " removing Element " <<ans<<endl;
        return ans;
    }

    int peek(){
        //underflow
        if(top == -1) {
            cout<<"Empty Stack"<<endl;
            return -1;
        }

        //normal
        cout << "Current top element is " << arr[top] <<endl;
        return arr[top];
    }

    void display() { 
        if(top == -1) {
            cout<<"Empty Stack"<<endl;
            return;
        }

        cout <<"Elements in stack is " << endl;
        for(int i = top; i >= 0; i--) {
            cout<< arr[i] << " ";
        }
    }

};


int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.pop();
    s.pop();
    s.peek();
    s.display();
}   