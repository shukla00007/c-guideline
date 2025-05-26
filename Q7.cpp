#include <iostream>
using namespace std;

// Function to calculate GCD using recursion
int gcdRecursive(int a, int b) {
    if (b == 0)
        return a;
    return gcdRecursive(b, a % b);
}

// Function to calculate GCD without recursion (iterative)
int gcdIterative(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    // Input two numbers from user
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Calculate GCD using recursion
    int gcdRec = gcdRecursive(num1, num2);
    cout << "GCD (using recursion): " << gcdRec << endl;

    // Calculate GCD without recursion
    int gcdItr = gcdIterative(num1, num2);
    cout << "GCD (without recursion): " << gcdItr << endl;

    return 0;
}