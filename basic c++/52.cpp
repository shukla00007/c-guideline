// scope of varible
// formarl parameters and actual parameters
//swap 2 numbers 
#include <iostream>
using namespace std;
int main(){
    // int a=2;
    // int b=5;
    // cout << "Before swap: a = " << a << ", b = " << b << endl; // Output before swap
    // int c;
    // c=a;
    // a=b;
    // b=c;
    // cout << "After swap: a = " << a << ", b = " << b << endl; // Output after swap
    int a=2;
    int b=5;
    cout << "Before swap: a = " << a << ", b = " << b << endl; // Output before swap
    a = a + b; // Add a and b
    b = a - b; // Subtract b from the new a to get original a
    a = a - b; // Subtract the new b from the new a to get original b
    cout << "After swap: a = " << a << ", b = " << b << endl; // Output after swap
    

}
