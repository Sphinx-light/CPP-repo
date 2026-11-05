#include <iostream>
using namespace std;

#define MAX_SIZE 100

char arr[MAX_SIZE];
int top;


void initialize() {
}

bool isFull() {
}

bool isEmpty() {
}

void pushCharacter(char value) { 
}

void popCharacter() {
}

void view() {
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