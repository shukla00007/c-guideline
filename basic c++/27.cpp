// Write a program to check if a number is composite or not. 
// if n has extra factor/factors other than 1 and itself, then it is composite.
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    bool x = true; //means prime
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            x= false; // If n is divisible by i, it has a factor other than 1 and itself
            break; // Exit successfully
        }
    }
    if(x==true){
        cout << n << " is a prime number." << endl; // If no factors found, it's prime
    } else {
        cout << n << " is a composite number." << endl; // If factors found, it's composite
    }
}
