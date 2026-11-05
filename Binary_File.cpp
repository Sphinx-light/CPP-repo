#include <iostream>
#include <fstream>
using namespace std;

int main() {

    int id = 101;// 4bytes
    float marks = 89.5; //4bytes

    

    //WRITING
    ofstream out("student.bin",ios::binary);

    out.write((char*)&id, sizeof(id));
    out.write((char*)&marks, sizeof(marks));

    out.close();




    //READING
    int newId;
    float newMarks;

    ifstream in("student.bin",ios::binary);

    in.read((char*)&newId, sizeof(newId));
    in.read((char*)&newMarks, sizeof(newMarks));

    in.close();

    cout << "ID: " << newId << endl;
    cout << "Marks: " << newMarks << endl;

    return 0;
}