#include <iostream>
using namespace std;

class Student {
private:
    int* marks;

public:
    // Parameterized Constructor
    Student(int m) {
        marks = new int;
        *marks = m;
    }

    // Deep Copy Constructor
    Student(const Student& other) {
        marks = new int;         // Allocate new memory
        *marks = *(other.marks); // Copy the value
    }

    // Destructor
    ~Student() {
        delete marks; // Clean up memory
    }

    // Getter and Setter to demonstrate independent memory
    void setMarks(int m) { 
        *marks = m; 
    }

    void display(string studentName) const {
        cout << studentName << " Marks: " << *marks << endl;
    }
};

int main() {
    // 1. Create original object using Parameterized Constructor
    Student s1(85);
    cout << "--- Original Object Created ---" << endl;
    s1.display("s1");

    // 2. Create a copy using the Deep Copy Constructor
    Student s2 = s1; // Can also be written as: Student s2(s1);
    cout << "\n--- Deep Copy Created (s2) ---" << endl;
    s2.display("s2");

    // 3. Modify s2's marks to prove s1 is unaffected
    cout << "\n--- Updating s2's marks to 95 ---" << endl;
    s2.setMarks(95);

    // 4. Display both objects to verify independence
    s1.display("s1"); // Output: 85 (unchanged!)
    s2.display("s2"); // Output: 95

    return 0; // Destructors automatically run here safely for both s1 and s2
}