#include <iostream>
using namespace std;

/*
Function Overriding:
Function overriding occurs when a derived class provides
its own implementation of a function that already exists
in the base class.

The function in the derived class must have the same:
- Name
- Parameters
- Return type

Function overriding is mainly used for Runtime Polymorphism
when the base function is declared as virtual.
*/

class Animal
{
public:

    // Base class function
    virtual void sound()
    {
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal
{
public:

    /*
    Function Overriding:
    Dog provides its own implementation of sound().
    */
    void sound() override
    {
        cout << "Dog barks" << endl;
    }
};

int main()
{
    Animal a;
    Dog d;

    // Calls base class function
    a.sound();

    // Calls overridden function of Dog
    d.sound();

    /*
    Runtime Polymorphism:
    Base class pointer pointing to derived class object.
    Because sound() is virtual, Dog's version is called.
    */
    Animal* ptr = &d;

    ptr->sound();

    return 0;
}