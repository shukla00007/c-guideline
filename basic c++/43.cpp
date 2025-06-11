// Write a program to print all the ASCII values and their equivalent characters of 26 alphabets using while loop
#include <iostream>
using namespace std;
int main() {
    char ch = 'a'; // Start with the first lowercase letter
    int asciiValue = static_cast<int>(ch); // Get ASCII value of 'a'
    
    while (ch <= 'z') { // Loop until we reach 'z'
        cout << "ASCII value of " << ch << " is: " << asciiValue << endl; // Print ASCII value
        ch++; // Move to the next character
        asciiValue = static_cast<int>(ch); // Update ASCII value
    }
// for case of uppercase letters, you can start with 'A' and go to 'Z'
    ch = 'A'; // Start with the first uppercase letter
    asciiValue = static_cast<int>(ch); // Get ASCII value of 'A';
    while (ch <= 'Z') { // Loop until we reach 'Z'
        cout << "ASCII value of " << ch << " is: " << asciiValue << endl; // Print ASCII value
        ch++; // Move to the next character
        asciiValue = static_cast<int>(ch); // Update ASCII value
    }
    // Return 0 to indicate successful execution
    return 0; // Exit successfully
}