// do while loop: The code uses a do while loop to repeatedly prompt the user for input until a valid number is entered.
// The loop ensures that the user is prompted at least once, even if the first input is invalid.
#include <iostream>
using namespace std;
int main() {
    int n = 11; // Initialize with 1, as it's the lowest factor other than itself
    do {
        cout << n << endl; // Print the current value of n
        n++; // Increment n to check the next number
    } while (n <= 10); // Continue until n exceeds 10
    return 0; // Exit successfully
}