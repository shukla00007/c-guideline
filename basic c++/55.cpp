// difference operator
#include <iostream>
using namespace std;
int main() {
    int a = 10; // Declare an integer variable
    int *b = &a; // Declare another integer variable
    
    
    cout << "Value of a: " << a << endl; // Output the value of 'a'
    *b =23;
    cout << "Value of b: " << a<< endl; // Output the value pointed to by pointer 'b'
    return 0; // Exit successfully
}