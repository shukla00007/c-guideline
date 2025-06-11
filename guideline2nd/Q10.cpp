#include <iostream>
#include <stdexcept>
#include <cmath>

using namespace std;

class Triangle {
    double a, b, c;

public:
    // Constructor with exception handling
    Triangle(double side1, double side2, double side3) : a(side1), b(side2), c(side3) {
        if (a <= 0 || b <= 0 || c <= 0)
            throw invalid_argument("All sides must be greater than 0.");
        if (a + b <= c || a + c <= b || b + c <= a)
            throw invalid_argument("Sum of any two sides must be greater than the third side.");
    }

    // Area for right-angled triangle (overloaded)
    double area(double base, double height) {
        return 0.5 * base * height;
    }

    // Area using Heron's formula (overloaded)
    double area() {
        double s = (a + b + c) / 2.0;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }
};

int main() {
    try {
        Triangle t1(3, 4, 5);
        cout << "Area using Heron's formula: " << t1.area() << endl;
        cout << "Area of right-angled triangle (base=3, height=4): " << t1.area(3, 4) << endl;
    } catch (const exception& ex) {
        cerr << "Error: " << ex.what() << endl;
    }
    return 0;
}