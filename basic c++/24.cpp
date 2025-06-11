/*WAP to find the highest factor of a number 'n' (other than n itself)*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    int f=1; // Initialize with 1, as it's the lowest factor other than itself
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            cout << i << " " ; // Print each factor found
           f=i; // Update highest factor found
        }
    }

    cout << "The highest factor of " << n << " (other than itself) is: " <<f<< endl;
    return 0; // Exit successfully
}