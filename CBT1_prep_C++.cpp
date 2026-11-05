#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>
using namespace std;

//UNIT 1
//question 1
// class student{
//     public:
//     string name;
//     int rollno;
//     int marks;

//     void display(){
//         cout<<"Name: "<<name<<endl;
//         cout<<"Rollno: "<<rollno<<endl;
//         cout<<"Marks: "<<marks<<endl;
//     }
// };
// int main(){
//     student s1;
//     s1.name = "karan";
//     s1.rollno = 1;
//     s1.marks = 100;

//     s1.display();
// }



//question 2
// the answer will be 3 as the count increases with every new object created of test


// question 3
// void area(int a){
//     int ans;
//     ans = a * a;
//     cout<<"Area of square is:" <<ans<<endl;
// }
// void area(int a, int b){
//     int ans;
//     ans = a * b;
//     cout<<"Area of rectangle is:" <<ans<<endl;
// }
// void area(double a){
//     double ans;
//     ans = a * a * 3.14;
//     cout<<"Area of circle is:" <<ans<<endl;
// }
// int main(){
//     area(4);
//     area(3,4);
//     area(3.5);
// }


//question 4
// 10 and 100


//question 5
// int sum(int n){
//     if(n==0) return 0;
//     return n + sum(n-1);
// }
// int main(){
//     cout<<sum(5)<<endl;
// }


//challange question 
// class employee {
// public:
//     static int count;

//     employee() {
//         count++;
//     }
//     static void displaycount(){
//         cout<<count<<endl;
//      }
// };

// int employee::count = 0;

// int main() {
//     employee e1, e2, e3, e4;
   

//    employee::displaycount();
// }



//question 6
// 10 and 50 , because for the fist display it just calls the deafult value of x = 10 in the class and for the second one it changes the value of x to 50 using this


//question 7
// class BankAccount{
//     private:
//     int balance = 100 ;

//     public:
//     friend void checkBalance(BankAccount B);

// };
// void checkBalance(BankAccount B){
//     cout<<B.balance;
// }
// int main(){
//     BankAccount B;
//     checkBalance(B);
// }


//question 8
// void swap(int *a, int *b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
    
// }
// int main(){
//     int x = 10, y = 20;
//     cout<<"Before swap: "<<x<<" "<<y<<endl;

//     swap(&x,&y);
//     cout<<"After swap: "<<x<<" "<<y<<endl;

// }


//question 9
// void display(int x, int y = 10) is called for display(5) and void display(double x) is called for display(5.5) and the output for the first is 15 and for the second is 5.5


//question 10
// class calculator{
//     public:

//     int factorial(int n){
//         if(n==0 || n==1) return 1;
//         return n * factorial(n-1);
//     }
// };
// int main(){
//     calculator c;
//     int n;
//     cin>>n;
//     cout<<c.factorial(n)<<endl;
//     return 0;
// }



// UNIT 2

// question 1
// int main(){
//     int x;
//     cin>>x;
//     cout<<"x before change: "<<x<<endl;
//     int *ptr = &x;
//     *ptr = 100;
//     cout<<"x after change: "<<x<<endl;
// }


// question 2
// void swap(int *a, int *b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
    
// }
// int main(){
//     int x = 10, y = 20;
//     cout<<"Before swap: "<<x<<" "<<y<<endl;

//     swap(&x,&y);
//     cout<<"After swap: "<<x<<" "<<y<<endl;

// }


// question 3
// int largest(int *a, int *b){
//     return max(*a,*b);
// }
// int main(){
//     int x = 110 , y = 20;
//     cout<<largest(&x,&y);
// }


// question 4
// int main(){
//     int arr[5];
//     for(int i = 0; i<5;i++){
//         cin>>arr[i];
//     }
//     int *ptr = arr;
//     for(int j = 0;j<5;j++){
//         cout<<*(ptr+j)<<" ";
//     }
// }


// question 5
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i = 0;i <n;i++){
//         cin>>arr[i];
//     }
//     int *ptr = arr;
//     int sum = 0;
//     for(int j = 0;j<n;j++){
//         sum = sum + *(ptr+j);
//     }
//     cout<<"The total sum is: "<<sum<<endl;

//     return 0;
// }



// question 6
// void reverse(int *arr, int size) {
//     int *start = arr;
//     int *end = arr + size - 1;
//     while (start < end) {
//         int temp = *start;
//         *start = *end;
//         *end = temp;
//         start++;
//         end--;
//     }
// }

// int main() {
//     int arr[5];
//     for (int i = 0; i < 5; i++)
//         cin >> *(arr + i);

//     reverse(arr, 5);

//     cout << "Reversed: ";
//     for (int i = 0; i < 5; i++)
//         cout << *(arr + i) << " ";
//     cout << endl;
//     return 0;
// }



// question 7
// int main(){
//     int x = 10;
//     int *p =&x;
//     int **q = &p;
//     **q = 50;
//     cout<<"After change: "<<x<<endl;
// }


// question 8
// class student{
//     public:
//     string name;
//     int marks;

//     void display(){
//         cout<<"Name: "<<name<<endl;
//         cout<<"Marks: "<<marks<<endl;
//     }

// };
// int main(){
//     student s;
//     student *ptr  = &s;
//     ptr->name = "Meena";
//     ptr->marks = 70;
//     ptr->display();

// }


// question 9
// class Student {
// public:
//     string name;
//     int *marks;

//     Student(string n, int m) {
//         name = n;
//         marks = new int(m);   
//     }


//     ~Student() {
//         delete marks;
//         marks = nullptr;
//     }

//     void display() {
//         cout << "Name: " << name << endl;
//         cout << "Marks: " << *marks << endl;
//     }
// };

// int main() {
//     Student s("Karan", 90);
//     s.display();
//     return 0;
// }   


// question 10
// class employee{
//     public:
//     string name;
//     double salary;

//     void setData(string name, double salary){
//         this->name=name;
//         this->salary=salary;
//     }
//     void display(){
//         cout<<"Name: "<<name<<endl;
//         cout<<"Salary: "<<salary<<endl;
//     }
// };
// int main(){
//     employee e;
//     e.setData("Karan", 50000);

//     e.display();
// }


