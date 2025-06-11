// WAP to print reverse of a given number
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int reverse = 0; // Initialize reverse to 0
    while (n != 0) {
        int ld = n % 10; // Get the last digit
        reverse = reverse * 10 + ld; // Build the reverse number
        n /= 10; // Remove the last digit
    }
    
    cout << "Reverse of the number: " << reverse << endl; // Output the reversed number
}