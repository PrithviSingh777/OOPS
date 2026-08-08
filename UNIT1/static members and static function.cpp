#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    
public:
    // Static functions cannot access non-static members or call
    // non-static member functions because they do not have a 'this' pointer.
    static int totalStudents;

    Student(string n) {
        name = n;
        totalStudents++; 
    }

    // Static functions cannot access non-static members or call
    // non-static member functions because they do not have a 'this' pointer.
    static void showTotalStudents() {
        cout << "Total Students Enrolled: " << totalStudents << endl;
    }
};

//inline initialization is allowed in newer version of c++, but not used here
int Student::totalStudents = 0;

int main() {
    
    Student::showTotalStudents(); 
    Student s1("Alice");
    Student s2("Bob");
    Student s3("Charlie");
    Student::showTotalStudents(); 
    // Static functions belong to the class, not to any object.
    // They are usually called using ClassName::functionName().
    // They can also be called using an object, but that is discouraged.

    return 0;
}
