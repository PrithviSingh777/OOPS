#include <iostream>
using namespace std;

template <class T>
T maximum(T a, T b)
{
    if (a > b){
        return a;}
    return b;
}

int main()
{
    int choice;

    do
    {
        cout << "\n--- MAXIMUM MENU ---\n";
        cout << "1. Integer\n";
        cout << "2. Float\n";
        cout << "3. Double\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
            {
                int a, b;
                cout << "Enter two integers: ";
                cin >> a >> b;

                cout << "Maximum = " << maximum<int>(a, b) << endl;
                break;
            }

            case 2:
            {
                float a, b;
                cout << "Enter two floats: ";
                cin >> a >> b;

                cout << "Maximum = " << maximum<float>(a, b) << endl;
                break;
            }

            case 3:
            {
                double a, b;
                cout << "Enter two doubles: ";
                cin >> a >> b;

                cout << "Maximum = " << maximum<double>(a, b) << endl;
                break;
            }

            case 4:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice.\n";
        }

    } while (choice != 4);

    return 0;
}
