// Take positive integer input and tell if it is divisible by 3 or 5 but not divisible by 15
#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;

    if ((num % 3 == 0 || num % 5 == 0) && num % 15 != 0) {
        cout << "The number is divisible by 3 or 5 but not by 15." << endl;
    } else {
        cout << "The number does not meet the criteria." << endl;
    }

    return 0; // Exit successfully
}