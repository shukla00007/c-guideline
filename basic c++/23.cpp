// gp 
// display this gp 1,2,4,8,16,32...upto "n" terms
#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    int a=1;
    // cout << "Enter the first term: ";
    // cin >> a;
    // int r;
    // cout << "Enter the common ratio: ";
    // cin >> r;

    cout << "The series is: ";
    for (int i = 0; i <= n; i++) {
        cout <<a<< " ";
        a=a*2; 
    }
    cout << endl;

    return 0; 
}   