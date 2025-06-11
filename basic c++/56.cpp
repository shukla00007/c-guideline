// swap pointers
// swap pointer
#include <iostream>
using namespace std;
void swap(int *x, int *y) {
    int temp = *x; // Store the value pointed to by x in temp
    *x = *y; // Assign the value pointed to by y to the location pointed to by x
    *y = temp; // Assign the value in temp to the location pointed to by y
}
int main() {
    int a = 2; // Declare an integer variable a
    int b = 5; // Declare another integer variable b
    cout << "Before swap: a = " << a << ", b = " << b << endl; // Output before swap
    swap(&a, &b); // Call swap function with addresses of a and b
    cout << "After swap: a = " << a << ", b = " << b << endl; // Output after swap
    return 0; // Exit successfully
} 
/*
state true or false 
1.every called function contain a return statement-false
2.function may contain more than one return statement-true
*/