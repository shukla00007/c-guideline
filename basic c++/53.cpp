// pass by value & pass by reference
//swap(x,y) function
#include <iostream>
using namespace std;
void swap(int &x, int &y) {
    int temp = x;
    x = y; 
    y = temp; 
}
int main() {
    int a = 2;
    int b = 5;
    cout << "Before swap: a = " << a << ", b = " << b << endl; // Output before swap
    swap(a, b);
    cout << "After swap: a = " << a << ", b = " << b << endl; // Output after swap
    return 0; 
}