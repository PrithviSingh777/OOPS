#include <iostream>
using namespace std;
/*Definition: Function overloading is the 
ability to define multiple functions with the same name but different parameter lists in the same scope.*/
class Calculator {
public:
    // 2 parameters
    int add(int a, int b) {
        return a + b;
    }

    // 3 parameters
    int add(int a, int b, int c) {
        return a + b + c;
    }

    // Different parameter types
    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Calculator c;

    cout << c.add(2, 3) << endl;       // calls add(int, int)
    cout << c.add(2, 3, 4) << endl;    // calls add(int, int, int)
    cout << c.add(2.5, 3.5) << endl;   // calls add(double, double)

    return 0;
}