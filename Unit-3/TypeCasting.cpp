#include <iostream>
#include <cmath>
using namespace std;
//type conversion

class complex{
    private:
        int a,b;
    public:
        complex(int x, int y) {
    a = x;
    b = y;
}
        complex() {
        a = 0;
        b = 0;
    }
        friend ostream& operator << (ostream &cout, complex& c){
            cout<<c.a<<" +"<<" i"<<c.b<<endl;
            return cout;
        }
        friend istream& operator>>(istream& cin, complex& c) {
    cin >> c.a >> c.b;
    return cin;
}
        operator float(){
            return sqrt(a * a + b * b);
        }
        complex(float x) {
        a = x;
        b = 0;
    }
        
};

int main()
{
    // 1. Default constructor
    complex c1;
    cout << "c1: " << c1;

    // 2. Parameterized constructor
    complex c2(3, 4);
    cout << "c2: " << c2;

    // 3. Overloaded >> operator
    complex c3;
    cout << "Enter real and imaginary parts of c3: ";
    cin >> c3;
    cout << "c3: " << c3;

    // 4. Complex -> float conversion
    float magnitude = c2;
    cout << "Magnitude of c2: " << magnitude << endl;

    // 5. Float -> complex conversion
    complex c4 = 7.5f;
    cout << "c4: " << c4;

    return 0;
   

    return 0;
}
