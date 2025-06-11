// combination and permutation
#include <iostream>
using namespace std;
int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i; // Calculate factorial
    }
    return result;

}
int combination(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r)); // Calculate combination
}
int permutation(int n, int r) {
    return factorial(n) / factorial(n - r); // Calculate permutation
}
int main() {
    int n;
    cout << "Enter n (total items): ";
    cin >> n;
    
for (int i = 0; i <= n; i++) {
        for(int j=0; j<=n-i;j++)
        cout << " "; // Output combination
        
        for(int j=0;j<=i;j++){
            cout<<combination(i,j)<<" "; // Output combination
        }
        cout << endl; // Move to the next line after each row
          }
    

}