// print the factorial of a given number 'n'
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    int fac=1;
    for(int i=1; i<=n; i++){
        fac *= i; 
    }
    cout << " factorial of  " << n << " is: " << fac << endl;
}