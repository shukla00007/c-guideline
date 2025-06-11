#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream fin("a1.txt");         // Input file stream
    ofstream fout("a2.txt");        // Output file stream

    string word;
    int count = 0;

    if (!fin || !fout) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    while (fin >> word) {
        fout << word << " " ;       // Write word to output file
        count++;                    // Increment word count
    }

    cout << "Number of words copied: " << count << endl;

    fin.close();
    fout.close();

    return 0;
}
