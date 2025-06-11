// WAP to print product of digits of a given number
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int product = 1; 
    while (n != 0) {
        int ld = n % 10; // Get the last digit
        n /= 10; // Remove the last digit
        product *= ld; // Multiply the product by the last digit
    }
    
    cout << "Product of digits: " << product << endl; // Output the product of digits
}