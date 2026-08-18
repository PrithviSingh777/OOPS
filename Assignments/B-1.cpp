#include <iostream>
using namespace std;

class Payment {
public:

    // Payment using UPI
    void pay(double amount) {
        cout << "Payment of Rs. " << amount << " made using UPI." << endl;
    }

    // Payment using Card
    void pay(double amount, long long cardNo) {
        cout << "Payment of Rs. " << amount
             << " made using Card: " << cardNo << endl;
    }

    // Payment using Cash on Delivery
    void pay(double amount, string address) {
        cout << "Cash on Delivery for Rs. " << amount
             << " at " << address << endl;
    }
};

int main() {
    Payment p;

    p.pay(500);                         // UPI
    p.pay(1200, 1234567890123456);      // Card
    p.pay(750, "Pune");                 // Cash on Delivery

    return 0;
}