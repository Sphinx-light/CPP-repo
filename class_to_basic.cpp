#include <iostream>
#include <iomanip>
using namespace std;


// CLASS TO BASIC CONVERSION

class temp{
    public:
    double C;
    temp(double a){
        C = a;

    }
    operator double(){
        return (C*9/5) + 32;
    }
};

int main(){
    double n;
    cout<<"Enter temperature in celcius: ";
    cin>>n;

    temp t(n);
    double F = t;
    cout<<fixed<<setprecision(2)<<F<<endl;

    return 0;
    
}