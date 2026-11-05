#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int rollNo;
    float marks;

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s1, s2;

    
    cout << "Enter name of Student 1: ";
    cin >> s1.name;

    cout << "Enter roll number: ";
    cin >> s1.rollNo;

    cout << "Enter marks: ";
    cin >> s1.marks;

  
    cout << "\nEnter name of Student 2: ";
    cin >> s2.name;

    cout << "Enter roll number: ";
    cin >> s2.rollNo;

    cout << "Enter marks: ";
    cin >> s2.marks;

    
    cout << "\nStudent 1 Details:" << endl;
    s1.display();

    cout << "\nStudent 2 Details:" << endl;
    s2.display();

    return 0;
}