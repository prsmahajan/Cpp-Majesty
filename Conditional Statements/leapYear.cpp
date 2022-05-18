#include <iostream>
using namespace std;

int main()
{
    int years;

    cout << "Enter the year:";
    cin >> years;

    if (years % 4 == 0)
    {
        if (years % 100 == 0)
        {
            if (years % 400 == 0)
            {
                cout << years << " is a leap Year";
            }
            else
            {
                cout << years << " is not a leap year";
            }
        }
        else
        {
            cout << years << " is a leap year";
        }
    }
    else
    {
        cout << years << " is not a leap year.";
    }
    return 0;
}