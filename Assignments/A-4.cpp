#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int prn;
    int roll;
    string dept;
    float gpa;

    static int count;   // static member variable

public:

    // Parameterized constructor (inline)
    Student(string n, int p, int r, string d, float g) {
        name = n;
        prn = p;
        roll = r;
        dept = d;
        gpa = g;

        count++;
        cout << "Added student: " << name << endl;
    }

    // Default constructor
    Student() {
        name = "Null";
        prn = 0;
        roll = 0;
        dept = "N/A";
        gpa = -1;

        count++;
        cout << "Added student: " << name << endl;
    }

    // Inline function inside class
    void display() {
        cout << "Name: " << name << endl;
        cout << "PRN: " << prn << endl;
        cout << "Roll: " << roll << endl;
        cout << "Department: " << dept << endl;
        cout << "GPA: " << gpa << endl;
    }

    // Static member function
    static void getCount() {
        cout << "Total students: " << count << endl;
    }

    // Friend function declaration
    friend void showPrivate(Student s);

    // Destructor
    ~Student() {
        count--;
        cout << "Removed student: " << name << endl;
    }
};

// static variable initialization
int Student::count = 0;

// Friend function definition
void showPrivate(Student s) {
    cout << "accessing private data: " << endl;
    cout << "Name: " << s.name << endl;
    cout << "GPA: " << s.gpa << endl;
}


int main() {

    Student s1("A", 3000, 3, "COMP", 6.7);
    Student s2;

    s1.display();
    Student::getCount();

    showPrivate(s1);

    return 0;
}