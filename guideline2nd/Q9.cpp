#include <iostream>
using namespace std;

// Base class Person
class Person {
protected:
    string name; // Name of the person
public:
    // Constructor to initialize name
    Person(string n) : name(n) {}

    // Virtual display method for runtime polymorphism
    virtual void display() {
        cout << "Name: " << name << endl;
    }

    // Virtual destructor
    virtual ~Person() {}
};

// Derived class Student from Person
class Student : public Person {
    string course; // Course enrolled
    int marks;     // Marks obtained
    int year;      // Year of study
public:
    // Constructor to initialize all attributes
    Student(string n, string c, int m, int y) : Person(n), course(c), marks(m), year(y) {}

    // Override display method
    void display() override {
        cout << "Student Name: " << name << endl;
        cout << "Course: " << course << endl;
        cout << "Marks: " << marks << endl;
        cout << "Year: " << year << endl;
    }
};

// Derived class Employee from Person
class Employee : public Person {
    string department; // Department name
    double salary;     // Salary amount
public:
    // Constructor to initialize all attributes
    Employee(string n, string d, double s) : Person(n), department(d), salary(s) {}

    // Override display method
    void display() override {
        cout << "Employee Name: " << name << endl;
        cout << "Department: " << department << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Person* p; // Pointer to base class

    // Create Student and Employee objects
    Student s("Alice", "Computer Science", 90, 2);
    Employee e("Bob", "HR", 50000);

    // Point to Student and call display (runtime polymorphism)
    p = &s;
    p->display(); // Calls Student's display

    cout << endl;

    // Point to Employee and call display (runtime polymorphism)
    p = &e;
    p->display(); // Calls Employee's display

    return 0;
}