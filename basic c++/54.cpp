// POINTERS

#include <iostream>
using namespace std;
int main() {
    int a = 10; // Declare an integer variable
    int *p = &a; // Declare a pointer and assign it the address of 'a'
    
    cout << "Value of a: " << a << endl; // Output the value of 'a'
    cout << "Address of a: " << &a << endl; // Output the address of 'a'
    cout << "Value of p (address of a): " << p << endl; // Output the value of pointer 'p'
    cout << "Value pointed to by p: " << *p << endl; // Output the value at the address stored in 'p'
    
    return 0; 
}
