#include <iostream>
using namespace std;
int main(){
    int num ; int ans = 0; int rem = 0;
    cout<<"Enter a number: ";
    cin>>num;
    while(num != 0){
        rem = num % 10;
        ans  = ans * 10 + rem;
        num = num / 10;
    }
    cout<<"Reversed numbers: "<<ans<<endl;
    
    return 0;
}
