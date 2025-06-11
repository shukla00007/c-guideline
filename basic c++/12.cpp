// If the age of Ram, Shyam and Ajay are input through the keyboard. write a program to determine the youngest of the three.
#include <iostream>
using namespace std;
int main() {
    int ram, shyam, ajay;
    cout << "Enter the age of Ram:";
    cin >> ram;
    cout << "Enter the age of Shyam:";
    cin >> shyam;
    cout << "Enter the age of Ajay:";
    cin >> ajay;
    if (ram < shyam) {
        if (ram < ajay) {
            cout << "The youngest person is Ram with age: " << ram << endl;
        } else {
            cout << "The youngest person is Ajay with age: " << ajay << endl;
        }
    } else {
        if (shyam < ajay) {
            cout << "The youngest person is Shyam with age: " << shyam << endl;
        } else {
            cout << "The youngest person is Ajay with age: " << ajay << endl;
        }
    }
}