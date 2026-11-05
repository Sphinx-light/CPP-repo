#include <iostream>
using namespace std;

void calculate(int a, int b){
    int sum = a + b;
    cout<<sum;
};

void calculate(double a , double b){
    int sum = a + b;
    cout<<sum;
};

void calculate(int a , int b , int c){
    int sum = a + b + c;
    cout<<sum;
}

void displayMessage(string message = "Calculation Completed"){
    cout<<message<<endl;
}

int main() {
    int a, b, c;
    double x, y;

    cout << "Enter integer number 1: ";
    cin >> a;

    cout << "Enter integer number 2: ";
    cin >> b;

    cout << "Enter integer number 3: ";
    cin >> c;

    cout << "Enter decimal number 1: ";
    cin >> x;

    cout << "Enter decimal number 2: ";
    cin >> y;

    cout<<"\n";
    calculate(a, b);

    cout<<"\n";
    calculate(x, y);

    cout<<"\n";
    calculate(a, b, c);

    cout<<"\n";
    displayMessage();

    return 0;
}