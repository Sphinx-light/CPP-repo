#include<fstream>
#include<iostream>
using namespace std;

int main(){
    fstream file;
    file.open("student.txt" , ios::in | ios::out | ios::ate);

    if(!file.is_open()){
        cout<<"File Not opened"<<endl;
        return 0;
    }

    file.seekp(1);
    file << "HELLO";

    file.seekg(0);
    string data;
    file>>data;
    cout << data;


    file.close();
}