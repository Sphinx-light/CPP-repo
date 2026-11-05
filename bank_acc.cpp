#include <iostream>
using namespace std;

class BankAccount{
    public:
    int accountNumber;
    string accountHolder;
    float balance;

    void deposit(float amount){
        balance = balance + amount;

    }
    void display(){
        cout<<"Account number: "<<accountNumber<<endl;
        cout<<"Account holder: "<<accountHolder<<endl;
        cout<<"Account balance: "<<balance<<endl;
    }
};
int main(){
    BankAccount b1;
    float amount;

    cout<<"Enter account number: ";
    cin>>b1.accountNumber;

    cout<<"Enter account holder: ";
    cin>>b1.accountHolder;

    cout<<"Enter account balance: ";
    cin>>b1.balance;

    cout<<"\nThe account details are as follows: "<<endl;
    b1.display();

    cout<<"\nEnter an amount: ";
    cin>>amount;
    b1.deposit(amount);

    cout<<"Updated account details: "<<endl;
    b1.display();

    return 0;

}