#include <iostream>
using namespace std;

class Calculator {
public:
    float a, b;

    void add() {
        cout << "Result: " << a + b << endl;
    }

    void subtract() {
        cout << "Result: " << a - b << endl;
    }

    void multiply() {
        cout << "Result: " << a * b << endl;
    }

    void divide() {
        if (b != 0)
            cout << "Result: " << a / b << endl;
        else
            cout << "Cannot divide by zero!" << endl;
    }
};

int main() {
    Calculator c;
    int choice;
    char again;

    do {
        cout << "\nEnter two numbers: ";
        cin >> c.a >> c.b;

        cout << "\n1. Add";
        cout << "\n2. Subtract";
        cout << "\n3. Multiply";
        cout << "\n4. Divide";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                c.add();
                break;

            case 2:
                c.subtract();
                break;

            case 3:
                c.multiply();
                break;

            case 4:
                c.divide();
                break;

            default:
                cout << "Invalid choice!" << endl;
        }

        cout << "\nDo you want to calculate again? (y/n): ";
        cin >> again;

    } while (again == 'y' || again == 'Y');

    return 0;
}