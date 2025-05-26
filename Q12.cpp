#include <iostream>   // For standard input/output
#include <fstream>    // For file input/output

using namespace std;

int main() {
    // Open input file for reading
    ifstream inputFile("input.txt");

    // Open output file for writing
    ofstream outputFile("output.txt");

    // Check if either file failed to open
    if (!inputFile || !outputFile) {
        cerr << "Error opening file!" << endl;
        return 1; // Exit with error
    }

    char ch; // Variable to store each character read from the file

    // Read each character from the input file
    while (inputFile.get(ch)) {
        // Check if the character is not a whitespace
        // (space, tab, newline, or carriage return)
        if (ch != ' ' && ch != '\t' && ch != '\n' && ch != '\r') {
            // Write the character to the output file
            outputFile.put(ch);
        }
    }

    // Close both input and output files
    inputFile.close();
    outputFile.close();

    cout << "Contents copied after removing whitespaces." << endl;
    return 0; // Exit successfully
}
