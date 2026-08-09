#include <iostream>
#include <string>
using namespace std;
//A friend function is a normal function that is not a member of a class, but is allowed to access the class's private and protected members.

class Student {
private:
    string name;
    int marks;

public:
    Student(string n, int m) {
        name = n;
        marks = m;
    }

    // Friend function declaration
    friend void showResult(Student);
    friend void addbonus(Student&, int);

    // Normal member function
    void display() {
        cout << "Name: " << name << endl;

        // Uncommenting the next line is fine because this
        // is a member function.
        // cout << "Marks: " << marks << endl;
    }
};

// Friend function definition
void showResult(Student s) {
    cout << "Student Result " << endl;
    cout << "Name  : " << s.name << endl;
    cout << "Marks : " << s.marks << endl;
}
void addbonus(Student &s, int bonus){
    s.marks+=bonus;
    if (s.marks>100){
        s.marks=100;
    }
}




int main() {
    Student s1("Alice", 95);

    s1.display();      // Normal member function
    showResult(s1);    // Friend function
    addbonus(s1,3);
    showResult(s1);
    addbonus(s1,3);
    showResult(s1);
    

    return 0;
}