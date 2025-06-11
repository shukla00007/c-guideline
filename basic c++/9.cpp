// Take 3 positive interger inputs and print the greatest of them 
#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cout << "Enter the first positive integer: ";
    cin >> a;
    cout << "Enter the second positive integer: ";
    cin >> b;
    cout << "Enter the third positive integer: ";
    cin >> c;

    if (a >= b && a >= c) {
        cout << "The greatest number is: " << a << endl;
    } else if (b >= a && b >= c) {
        cout << "The greatest number is: " << b << endl;
    } else {
        cout << "The greatest number is: " << c << endl;
    }

    return 0; // Exit successfully
}