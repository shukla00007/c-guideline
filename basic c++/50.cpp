// pascal trangle 
//for loops,pattern printing,nested loops
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of rows for Pascal's Triangle: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int C = 1; // Initialize C to 1 for each row
        for (int j = 0; j <= i; j++) {
            cout << C << " "; // Print the current value of C
            C = C * (i - j) / (j + 1); // Calculate the next value of C
        }
        cout << endl; // Move to the next line after each row
    }
    
    return 0; // Exit successfully
}