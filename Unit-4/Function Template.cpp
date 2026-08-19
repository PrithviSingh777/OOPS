#include <iostream>
using namespace std;

// A template allows us to write a single function
// that can work with different data types.
// It is used to avoid writing separate functions
// for int, float, string, etc.

template <typename t>
t add(t a, t b){
    return a+b;
}

int main()
{
    // Here, t is int
    int res = add<int>(1, 4);
    cout << res << endl;
    
    // Here, t is float
    float res1 = add<float>(1.4, 4.3);
    cout << res1 << endl;
    
    // Here, t is string
    // The + operator concatenates the two strings
    string res2 = add<string>("computer", "science");
    cout << res2 << endl;
    
    // The type does not have to be explicitly specified.
    // The compiler automatically deduces the type from the arguments.
    int res3 = add(10, 20);
    cout << res3 << endl;

    return 0;
}