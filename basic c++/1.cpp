// Take positive interger input and tell if it is divisible by 5 or not
#include <iostream>
using namespace std;    
int main(){
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;

    if (number < 0) {
        cout << "Please enter a positive integer." << endl;
        return 1; // Exit with an error code
    }

    if (number % 5 == 0) {
        cout << number << " is divisible by 5." << endl;
    } 
    else {
        cout << number << " is not divisible by 5." << endl;
    }

    return 0; // Exit successfully
}