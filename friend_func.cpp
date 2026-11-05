#include <iostream>
using namespace std;

class student{
    private:
    int marks;
    string name;

    friend void showDetails(student s);
};
void showDetails(student s1){
    cout<<"Enter the name: ";
    cin>>s1.name;
    

    cout<<"Enter marks: ";
    cin>>s1.marks;

    cout<<"\nName: "<<s1.name<<endl;
    cout<<"Marks: "<<s1.marks<<endl;
}
int main(){
    student s1;
            
    
    showDetails(s1);
}