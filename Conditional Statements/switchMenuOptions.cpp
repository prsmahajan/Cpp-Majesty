#include <iostream>
using namespace std;
int main()
{
    cout << "Menu" << endl;
    cout << "1. Add\n 2. Subtract\n 3. Multiply\n 4. Division\n";
    int option;
    cout << "Enter your choice:";
    cin >> option;
    float a, b, c;
    cout << "Enter 2 no's:";
    cin >> a >> b;
    switch (option)
    {
    case 1:
        c = a + b;
        break;
    case 2:
        c = a - b;
        ;
        break;
    case 3:
        c = a * b;
        break;
    case 4:
        c = a / b;
        break;
        break;
    default:
        cout << "Invalid choice!" << endl;
    }
    cout << "Result is:" << c;
    return 0;
}