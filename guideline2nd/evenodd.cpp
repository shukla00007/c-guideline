// take positive integer input andd tell if it is even or odd
#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;

    if (number < 0) {
        cout << "Please enter a positive integer." << endl;
        return 1; // Exit with an error code
    }

    if (number % 2 == 0) {
        cout << number << " is even." << endl;
    } 
    else {
        cout << number << " is odd." << endl;
    }

    return 0; // Exit successfully
}