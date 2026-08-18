#include <iostream>
using namespace std;

class Demo {
private:
    int a = 10;

public:
    int b = 20;

protected:
    int c = 30;

public:
    void showPrivate() {
        cout << "Private: " << a << endl;
    }

    void showPublic() {
        cout << "Public: " << b << endl;
    }

    void showProtected() {
        cout << "Protected: " << c << endl;
    }
};

int main() {
    Demo obj;

    obj.showPrivate();
    obj.showPublic();
    obj.showProtected();

    return 0;
}