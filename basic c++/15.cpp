// ternary operator
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    // (condtion)?if true: if false;
    (n%2==0)?cout<<"The number is even"<<endl:cout<<"The number is odd"<<endl;
    return 0; // Exit successfully
}