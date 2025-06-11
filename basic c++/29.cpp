// write a program to print odd numbers from 1 to 100 using continue statement  
#include <iostream>
using namespace std;
int main() {
    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            continue; // Skip even numbers
        }
        cout << i << " "; // Print odd numbers from 1 to 100
    }
    cout << endl; // Print a newline at the end
    return 0; // Exit successfully
}