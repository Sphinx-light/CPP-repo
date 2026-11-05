#include <iostream>
using namespace std;

class rectangle{
    public:
    int length;
    int breadth;
    
    void input(){
        cout<<"Enter the length: ";
        cin>>length;

        cout<<"\nEnter the breadth: ";
        cin>>breadth;
    }

    void area(){
        int area = length * breadth;
        cout<<"Area of the rectangle is:"<<area<<endl;
    }

    void display(){
        cout<<"The length is: "<<length<<endl;
        cout<<"The breadth is: "<<breadth<<endl;

    }
};

int main(){
    rectangle r1;

    cout<<"Enter the length of first rectangle: ";
    cin>>r1.length;

    cout<<"Enter the breadth of first rectangle: ";
    cin>>r1.breadth;

    rectangle r2;

    cout<<"\nEnter the length of second rectangle: ";
    cin>>r2.length;

    cout<<"Enter the breadth of second rectangle: ";
    cin>>r2.breadth;

    cout<<"\nThe dimentions for the first rectangle are: "<<endl;
    r1.display();

    cout<<"\nThe dimentions for the second rectangle are: "<<endl;
    r2.display();

    
    
    r1.area();

    cout<<"\n"<<endl;
    
    r2.area();

    return 0;

}