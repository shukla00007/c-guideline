// switch statement 
// switch statement is a control flow statement that
// allows a variable to be tested for equality against
// a list of values, each with its own case block.
/*
Q. Write a program to create a calculator that performs
basic arithmetic operations(add,subtract,multiply,divide)using 
switch case.The calculator should input two numbers and an 
operator from the user.
*/
#include <iostream>
using namespace std;
int main(){
    int a,b;
    char op;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    switch(op) {
        case '+':
            cout << "Result: " << a + b << endl;
            break;
        case '-':
            cout << "Result: " << a - b << endl;
            break;
        case '*':
            cout << "Result: " << a * b << endl;
            break;
        case '/':
            if (b != 0) {
                cout << "Result: " << a / b << endl;
            } else {
                cout << "Error: Division by zero!" << endl;
            }
            break;
        default:
            cout << "Error: Invalid operator!" << endl;
    }
}