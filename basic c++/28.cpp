// continue;
// if you want to skip a round //print no from 1 to 20
#include <iostream>
using namespace std;
int main() {
    for (int i = 1; i <= 20; i++) {
        if (i==3||i==8) {
            continue; // Skip the number 10
        }
        cout << i << " "; // Print numbers from 1 to 20, skipping 10
    }
    cout << endl; // Print a newline at the end
    return 0; // Exit successfully
}