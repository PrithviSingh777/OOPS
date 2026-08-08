#include <iostream>
using namespace std;

/*
Binding:
Binding is the process of connecting a function call
to the function that will actually execute.

Static Binding:
Function call is connected to the function at compile time.

Dynamic Binding:
Function call is connected to the function at runtime,
based on the actual object.
*/

class Animal
{
public:

    // Normal function → static binding
    void eat()
    {
        cout << "Animal eats" << endl;
    }

    // Virtual function → allows dynamic binding
    virtual void sound()
    {
        cout << "Animal sound" << endl;
    }
};

class Dog : public Animal
{
public:

    // Overrides Animal's sound()
    void sound() override
    {
        cout << "Dog barks" << endl;
    }
};

int main()
{
    Dog d;

    // STATIC BINDING
    // Compiler knows d is a Dog object.
    d.eat();


    // DYNAMIC BINDING
    // Pointer type = Animal*
    // Actual object = Dog
    Animal *ptr = new Dog();

    // Because sound() is virtual,
    // the actual object's function is selected at runtime.
    ptr->sound();

    delete ptr;

    return 0;
}