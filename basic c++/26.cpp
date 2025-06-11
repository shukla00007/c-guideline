// factor of n
#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    int f = 1; // Initialize with 1, as it's the lowest factor other than itself
    for (int i =n/2; i < n; i--) {
        if (n % i == 0) {
            cout << i << " "; // Print each factor found
            break;
        }
    }

    cout << "\nThe highest factor of " << n << " (other than itself) is: " << f << endl;
    return 0; // Exit successfully
}   