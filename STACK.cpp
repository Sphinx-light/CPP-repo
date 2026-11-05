#include <iostream>
using namespace std;


const int SIZE = 5;
class stack{
    public:
    int top;
    int arr[SIZE];

    stack(){
        top = -1;
    }

    void push(int data){
        if(top==SIZE-1){
            cout<<"Stack overflow";
            return;
        }

        top++;
        arr[top] = data;

    }

    int pop(){
        if(top==-1){
            cout<<"Stack underflow";
            return -1;
        }
        int x = arr[top];
        top--;
        return x;
    }

   int peek() {
    if (top == -1) {
        cout << "Stack underflow";
        return -1;
    }

    return arr[top];
}
};
int main(){
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60); //stack overflows here
    s.pop();//removed from the top
    cout<<endl;
    cout<<s.peek()<<endl;// see the top element after pop

    return 0;
}