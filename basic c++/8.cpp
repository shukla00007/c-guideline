// take 3 numbers as input and tell if they can be the sides of a triange
#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    cout << "Enter the length of first sides: ";
    cin >> a ;
    cout << "Enter the length of second sides: ";
    cin >> b;
    cout << "Enter the length of third sides: ";
    cin >> c;

    if ((a+b)>c && (a+c)>b && (b+c)>a) {
        cout << "The lengths can form a triangle." << endl;
    } else {
        cout << "The lengths cannot form a triangle." << endl;
    }

    return 0; // Exit successfully
}