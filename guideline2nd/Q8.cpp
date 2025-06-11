#include <iostream>
#include <stdexcept>
using namespace std;

class Matrix {
private:
    int rows, cols;
    int **data;

public:
    // Constructor to initialize matrix with given rows and columns
    Matrix(int r, int c) : rows(r), cols(c) {
        data = new int *[rows];
        for (int i = 0; i < rows; i++) {
            data[i] = new int[cols];
        }
    }

    // Destructor to deallocate memory
    ~Matrix() {
        for (int i = 0; i < rows; i++) {
            delete[] data[i];
        }
        delete[] data;
    }

    // Function to input matrix elements
    void input() {
        cout << "Enter matrix elements: \n";
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cin >> data[i][j];
            }
        }
    }

    // Function to display matrix elements
    void display() const {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }

    // Function to find the transpose of the matrix
    Matrix transpose() {
        Matrix result(cols, rows);  // Transpose will swap rows and columns
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result.data[j][i] = data[i][j];  // Swap positions of i and j
            }
        }
        return result;
    }
};

int main() {
    int rows, cols;

    // Get matrix dimensions
    cout << "Enter rows and columns for the matrix: ";
    cin >> rows >> cols;

    try {
        // Create matrix object
        Matrix m(rows, cols);

        // Input matrix
        cout << "Enter matrix:\n";
        m.input();

        // Find and display transpose of the matrix
        Matrix transposed = m.transpose();
        cout << "Transpose of the matrix:\n";
        transposed.display();
    } catch (const exception &e) {
        // Handle exceptions (if any)
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
