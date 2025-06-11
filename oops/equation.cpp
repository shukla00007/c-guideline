#include <iostream>
#include <cmath>

using namespace std;

long double factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    long double result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main(int argc, char* argv[]) {
    if (argc != 3) {
        cout << "Usage: ./program <x> <n>" << endl;
        return 1;
    }

    double x = stod(argv[1]);
    int n = stoi(argv[2]);
    long double sum = 0;
    for (int i = 0; i < n; ++i) {
        int power = 2 * i + 1;
        long double term = pow(x, power) / factorial(power);
        if (i % 2 == 0) {
            sum += term;
        } else {
            sum -= term;
        }
    }
    cout << "Sum of the series: " << sum << endl;
    return 0;
}