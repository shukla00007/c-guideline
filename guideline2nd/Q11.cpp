#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Student {
    int rollNo;
    string name;
    string className;
    int year;
    float totalMarks;
public:
    // Function to take input from user
    void input() {
        cout << "Enter Roll No.: ";
        cin >> rollNo;
        cin.ignore(); // Clear input buffer
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Class: ";
        getline(cin, className);
        cout << "Enter Year: ";
        cin >> year;
        cout << "Enter Total Marks: ";
        cin >> totalMarks;
        cin.ignore(); // Clear input buffer
    }

    // Function to display student details
    void display() {
        cout << "Roll No.: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Class: " << className << endl;
        cout << "Year: " << year << endl;
        cout << "Total Marks: " << totalMarks << endl;
        cout << "--------------------------" << endl;
    }

    // Function to write student data to file
    void writeToFile(ofstream &ofs) {
        ofs << rollNo << endl;
        ofs << name << endl;
        ofs << className << endl;
        ofs << year << endl;
        ofs << totalMarks << endl;
    }

    // Function to read student data from file
    void readFromFile(ifstream &ifs) {
        string temp;
        getline(ifs, temp);
        rollNo = stoi(temp);
        getline(ifs, name);
        getline(ifs, className);
        getline(ifs, temp);
        year = stoi(temp);
        getline(ifs, temp);
        totalMarks = stof(temp);
    }
};

int main() {
    const int N = 5;
    Student students[N];

    // Step 1: Input student details and write to file
    ofstream ofs("students.txt");
    if (!ofs) {
        cout << "Error opening file for writing." << endl;
        return 1;
    }
    cout << "Enter details for 5 students:" << endl;
    for (int i = 0; i < N; i++) {
        cout << "Student " << (i + 1) << ":" << endl;
        students[i].input();
        students[i].writeToFile(ofs);
    }
    ofs.close();

    // Step 2: Read student details from file and display
    ifstream ifs("students.txt");
    if (!ifs) {
        cout << "Error opening file for reading." << endl;
        return 1;
    }
    cout << "\nStudent Records from File:" << endl;
    for (int i = 0; i < N; i++) {
        Student s;
        s.readFromFile(ifs);
        s.display();
    }
    ifs.close();

    return 0;
}