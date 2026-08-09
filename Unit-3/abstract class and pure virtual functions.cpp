#include <iostream>
using namespace std;

/*
Pure Virtual Function:
A pure virtual function is a virtual function that has
NO implementation in the base class.

Syntax:
virtual returnType functionName() = 0;

It forces derived classes to provide their own implementation.
*/

class Animal
{
public:

    /*
    Pure virtual function
    '= 0' makes this function pure virtual.
    */
    virtual void sound() = 0;
};

/*
Abstract Class:
A class containing at least one pure virtual function
is called an abstract class.

We CANNOT create an object of an abstract class.
*/

class Dog : public Animal
{
public:

    /*
    Dog MUST implement the pure virtual function
    to become a normal (concrete) class.
    */
    void sound() override
    {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal
{
public:

    // Cat provides its own implementation
    void sound() override
    {
        cout << "Cat meows" << endl;
    }
};

int main()
{
    // Animal a;  
    // ERROR: Animal is an abstract class

    Dog d;
    Cat c;

    d.sound();
    c.sound();

    /*
    Runtime Polymorphism:
    Base class pointer can point to derived objects.
    */
    Animal* ptr;

    ptr = &d;
    ptr->sound();       // Dog's sound()

    ptr = &c;
    ptr->sound();       // Cat's sound()

    return 0;
}