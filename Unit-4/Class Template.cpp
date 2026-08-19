#include <iostream>
using namespace std;

// A class template allows us to create a class
// that can work with different data types.
// Instead of creating separate classes for int, float, etc.,
// we can use one generic class.

template <typename T>
class Calculator {
private:
    T a, b;

public:
    Calculator(T x, T y) {
        a = x;
        b = y;
    }

    T add() {
        return a + b;
    }
};

int main() {

    // T is int
    Calculator<int> c1(10, 20);
    cout << c1.add() << endl;

    // T is float
    Calculator<float> c2(2.5, 3.5);
    cout << c2.add() << endl;

    // T is string
    Calculator<string> c3("Hello ", "World");
    cout << c3.add() << endl;

    return 0;
}