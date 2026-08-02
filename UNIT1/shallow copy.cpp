#include <iostream>
using namespace std;

class Student {

    

public:
    int* marks; // Pointer 
    // Parameterized Constructor
    Student(int m) {
        marks = new int; //select memory for an integer
        *marks = m;      // Assign value 'm' to the selected memory
        cout << "Constructor: Allocated memory and set marks to " << *marks << endl;
    }

    // Destructor
    ~Student() {
        delete marks;    
        cout << "Destructor: Memory freed successfully" << endl;
    }

    void display() {
        
        cout << marks << endl;// the memory address
        cout << *marks << endl;// the actual data (pointer)at that address 
}
};

int main() {
  
    Student s1(95);
    s1.display();
    
    Student a(90);
    Student b = a;
    cout<< a.marks<<endl;
    cout<< b.marks<<endl;
    //same address-> shallow copy
    cout<<*a.marks<<endl;
    cout<<*b.marks<<endl;
    //same values
    *b.marks = 100;//chamging b to 100 also changes a to hundered becuase the address is same
    cout<<*a.marks<<endl;
    cout<<*b.marks<<endl;
    //destructors are called but they delete the value at same address; online compiler gives free(): double free detected in tcache 2

    return 0;
}