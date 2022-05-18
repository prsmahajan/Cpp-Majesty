#include <iostream>
using namespace std;
main()
{
    int number, unit, ten;
    cout << "Please enter any number between 0-99: ";
    cin >> number;
    ten = number / 10;
    unit = number % 10;
    if (number < 0 || number > 99)
    {
        cout << "Number is out of range";
    }
    if (ten == 1)
    {
        if (number == 10)
            cout << "ten";
        if (number == 11)
            cout << "eleven";
        if (number == 12)
            cout << "twelve";
        if (number == 13)
            cout << "thirteen";
        if (number == 14)
            cout << "fourteen";
        if (number == 15)
            cout << "fifteen";
        if (number == 16)
            cout << "sixteen";
        if (number == 17)
            cout << "seventeen";
        if (number == 18)
            cout << "eighteen";
        if (number == 19)
            cout << "ninteen";
    }
    else
    {
        if (ten == 2)
            cout << "twenty";
        if (ten == 3)
            cout << "thirty";
        if (ten == 4)
            cout << "fourty";
        if (ten == 5)
            cout << "fifty";
        if (ten == 6)
            cout << "sixty";
        if (ten == 7)
            cout << "seventy";
        if (ten == 8)
            cout << "eighty";
        if (ten == 9)
            cout << "ninty";
        if (unit == 0 && ten == 0)
            cout << " zero";
        if (unit == 1)
            cout << " one";
        if (unit == 2)
            cout << " two";
        if (unit == 3)
            cout << " three";
        if (unit == 4)
            cout << " four";
        if (unit == 5)
            cout << " five";
        if (unit == 6)
            cout << " six";
        if (unit == 7)
            cout << " seven";
        if (unit == 8)
            cout << " eight";
        if (unit == 9)
            cout << " nine";
    }
}