// print n to 1
#include <iostream>
using namespace std;
void print(int n) {
    if (n==0) return; // Base case: if n is less than 1, return
    cout << n <<endl; // Print the current value of n
    print(n - 1); // Recursive call with n decremented by 1

}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n; // Input the starting number
    print(n); // Call the recursive function to print from n to 1
    return 0; // Exit successfully
}