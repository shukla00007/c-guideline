//print the factorial of first n numbers
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    for(int i = 1; i <= n; i++) {
        int fac = 1; // Initialize factorial for each number
        for(int j = 1; j <= i; j++) {
            fac *= j; // Calculate factorial
        }
        cout << "Factorial of " << i << " is: " << fac << endl; // Output the factorial
    }
    return 0; // Exit successfully
}