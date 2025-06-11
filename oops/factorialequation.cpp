

#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate factorial
long long factorial(int n) {
    long long fact = 1;
    for(int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main(int argc, char* argv[]) {
    if (argc != 3) {
        cout << "Usage: ./program x n" << endl;
        return 1;
    }

    double x = atof(argv[1]); // Convert string to double
    int n = atoi(argv[2]);    // Convert string to int

    double sum = 0;
    int sign = 1;
    for(int i = 0; i < n; i++) {
        int power = 2*i + 1;
        double term = sign * pow(x, power) / factorial(power);
        sum += term;
        sign *= -1;
    }

    cout << "The value of the series is: " << sum << endl;
    return 0;
}
