//A friend class is a class that is allowed to access the private and protected members of another class.

#include <iostream>
using namespace std;
/*A derived class normally cannot directly access private members of its base class. 
It can access protected members. A friend class, however, can access both private and protected members.*/

class B;  // Forward declaration

class A
{
private:
    int x = 10;

    friend class B;
};

class B
{
public:
    void show(A obj)
    {
        cout << obj.x;  // Allowed
    }
};

int main()
{
  

    A a;
    B b;

    b.show(a);

    return 0;
}

