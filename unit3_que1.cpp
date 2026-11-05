#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of values: ";
    cin>>n;
    if(n<1 || n>100){
        cout<<"Invalid entry"<<endl;
        return -1;
    }
    int arr[n];
    for(int i = 0 ;i<n;i++){
        cout<<"Enter value "<<i+1<<": ";
        cin>>arr[i];
    }
    ofstream file("numbers.dat",ios::binary);
    for(int i=0;i<n;i++){
         file.write((char*)&arr[i], sizeof(arr[i]));
    }
    file.close();

    ifstream readfile("numbers.dat", ios::binary);
    int value;
     for (int i = 0; i < n; i++) {
        readfile.read((char*)&value, sizeof(value));
        cout << value<<" ";
    }
    file.close();

    return 0;
}