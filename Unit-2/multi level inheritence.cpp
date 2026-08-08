

#include <iostream>
using namespace std;
/*
Multilevel inheritance is a type of inheritance in which a derived class
becomes the base class for another derived class, forming a chain of inheritance.

Animal → Dog → Puppy
*/
class Animal{
    public:
        void info(){
            cout<<"An animal is a multicellular living organism that breathes, moves on its own, and feeds on organic matter. \n";
        }
};

class Dog: public Animal{
    public:
        void info(){
            cout<<"A domesticated carnivorous mammal typically kept as a pet or for guarding \n";
        }
};

class Puppy : public Dog{
    public:
        void info(){
            cout<<"A puppy is a young, immature dog.\n";
        }
};

int main()
{
    Puppy pup;
    pup.info();
    pup.Dog::info();
    pup.Animal::info();
    

    return 0;
}