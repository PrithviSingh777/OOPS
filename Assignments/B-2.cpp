

#include <iostream>
using namespace std;
class complex{
    private:
        float real;
        float imag;
    
    public:
        complex(){
            real=0.0;
            imag=0.0;
        }
        
        complex(float n1, float n2){
            real=n1;
            imag=n2;
        }
    
        complex operator+(complex c){
            complex result;
            result.real=real+c.real;
            result.imag=imag+c.imag;
            return result;
        }
        
        complex operator-(complex c){
            complex result;
            result.real=real-c.real;
            result.imag=imag-c.imag;
            return result;
        }
        
        complex operator*(complex c){
            complex result;
            result.real = real * c.real - imag * c.imag;
            result.imag = real * c.imag + imag * c.real;
            return result;
        }
        
        complex operator/(complex c) {
             complex result;

            result.real = (real * c.real + imag * c.imag) /
                  (c.real * c.real + c.imag * c.imag);

            result.imag = (imag * c.real - real * c.imag) /
                  (c.real * c.real + c.imag * c.imag);

            return result;
                                    }
                                    
        friend ostream& operator<<(ostream& out, complex c) {
                out << c.real << " + " << c.imag << "i";
                return out;
        }
        
        friend istream& operator>>(istream& in, complex& c) {
            in >> c.real >> c.imag;
            return in;
        }
        
        
    
};

int main()
{
    
    complex c1, c2, c3;

    cout << "Enter first complex number (real imag): ";
    cin >> c1;

    cout << "Enter second complex number (real imag): ";
    cin >> c2;

    c3 = c1 + c2;
    cout << "Addition: " << c3 << endl;

    c3 = c1 - c2;
    cout << "Subtraction: " << c3 << endl;

    c3 = c1 * c2;
    cout << "Multiplication: " << c3 << endl;

    c3 = c1 / c2;
    cout << "Division: " << c3 << endl;

    return 0;
}