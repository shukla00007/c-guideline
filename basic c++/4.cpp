// Given the length and breath of a rectangle, write a program to find wheather the area of the rectangle is grater than its perimeter 
#include <iostream>
using namespace std;
int main() {
    float length, breadth;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the breadth of the rectangle: ";
    cin >> breadth;

    float area = length * breadth;
    float perimeter = 2 * (length + breadth);

    if (area > perimeter) {
        cout << "The area of the rectangle is greater than its perimeter." << endl;
    } else if (area < perimeter) {
        cout << "The area of the rectangle is less than its perimeter." << endl;
    } else {
        cout << "The area of the rectangle is equal to its perimeter." << endl;
    }

    return 0; // Exit successfully
}