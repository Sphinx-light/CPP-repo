#include<iostream>
#include<fstream>
using namespace std;

class Record {
    public:
    string filename;
    fstream obj;


    //constructor
    Record(string f) {
        filename = f;
        obj.open(filename , ios::in | ios::out);
        if(!obj) {
            cout<<"Failed to open"<<endl;
        }
        else {
            cout<<"Successfully opened the file"<<endl;
        }
    }

    // MEMBER FUNCTION 
    void write(string message) {
        obj<< message <<endl;
    }



    void read() {
        string data;
        // obj >> s;  word by word
        getline(obj , data);  /// line by line
        cout << data << endl;
    }

    //Destructor
    ~Record() {
        cout<<"Closing the file"<<endl;
    }
};

int main() {
    Record log1("lecture.txt");
    log1.read();
}