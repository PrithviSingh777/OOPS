#include <iostream>
using namespace std;

/*
Multipath inheritance:
A derived class inherits the same base class through
more than one inheritance path.

*/

class A {
public:
    void show() {
        cout << "Function from A" << endl;
    }
};

class B : public A {};
class C : public A {};

class D : public B, public C {};

int main() {
    D obj;

    // obj.show();   // ERROR: Ambiguous
                   // D has two paths to A:
                   // D -> B -> A
                   // D -> C -> A

    obj.B::show();  // Access A's function through B
    obj.C::show();  // Access A's function through C

    return 0;
}