#include <iostream>
using namespace std;

#define MAX_SIZE 100

char arr[MAX_SIZE];
int top;


void initialize() {
    top = -1;
}

bool isFull() {
    return top == MAX_SIZE - 1;
}

bool isEmpty() {
    return top == -1;
}

void pushCharacter(char value) {
    if (isFull()) {
        cout << "Stack is full" << endl;
    } else {
        top++;
        arr[top] = value;
        cout<<"Pushed value is: "<<value<<endl;
    }
}

void popCharacter() {
    if (isEmpty()) {
        cout << "Text buffer is empty. Nothing to undo." << endl;
    } else {
        cout << "Popped character: " << arr[top] << endl;
        top--;
    }
}

void view() {
    if (isEmpty()) {
        cout << "Text buffer is empty." << endl;
    } else {
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}


int main() {
    int choice;
    char input;

    initialize();

    while (true) {
        cin >> choice;

        switch (choice) {
            case 1:
                cin >> input;
                pushCharacter(input);
                break;
            case 2:
                popCharacter();
                break;
            case 3:
                view();
                break;
            case 4:
                return 0;
            default:
                cout << "Invalid choice" << endl;
        }
    }

    return 0;
}