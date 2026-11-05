#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct Student {
    int id;
    char name[20];
    float marks;
};

int main() {

    Student s1;

    s1.id = 101;
    strcpy(s1.name, "Rahul");
    s1.marks = 89.5;


    ofstream out("student.dat", ios::binary);  // general data file
    out.write((char*)&s1, sizeof(s1));  // write the next 28 bytes starting from the base address of the Student structure into the binary file. 

    out.close();


    Student s2;

    ifstream in("student.dat", ios::binary);

    in.read((char*)&s2, sizeof(s2)); //Read the 28 bytes from the binary file and store them into the memory space of "s2".

    in.close();


    cout << "ID: " << s2.id << endl;
    cout << "Name: " << s2.name << endl;
    cout << "Marks: " << s2.marks << endl;

    return 0;
}
