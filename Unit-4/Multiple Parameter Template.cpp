#include <iostream>
using namespace std;

// A class template can have multiple type parameters.
// Here, a and b can represent two different data types.

template <typename a, typename b>
class sample {
private:
    a t1;
    b t2;

public:
    // Constructor
    sample(a x, b y) {
        t1 = x;
        t2 = y;
    }

    // Display function
    void disp() {
        cout << t1 << endl;
        cout << t2 << endl;
    }
};

int main()
{
    // a = int, b = float
    sample<int, float> s(10, 5.5);

    s.disp();

    return 0;
}