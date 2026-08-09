#include <iostream>
using namespace std;

/*
Operator Overloading:
Operator overloading allows us to give a new meaning
to an existing operator when it is used with objects.

Example:
c3 = c1 + c2

Here, '+' is overloaded to add two Complex objects.
*/

class Complex
{
private:
    int real;
    int imag;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    /*
    Operator Overloading:
    The 'operator+' function defines how the '+' operator
    should work when used between two Complex objects.

    c1 + c2
    is internally treated as:
    c1.operator+(c2)
    */
    Complex operator+(Complex c)
    {
        Complex temp;

        temp.real = real + c.real;
        temp.imag = imag + c.imag;

        return temp;
    }

    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    Complex c1(3, 4);
    Complex c2(2, 5);

    // '+' operator is overloaded for Complex objects
    Complex c3 = c1 + c2;

    cout << "First Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    cout << "Sum: ";
    c3.display();

    return 0;
}