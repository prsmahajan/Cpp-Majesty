#include <iostream>
using namespace std;

int main()
{
    int hours;
    cout << "Enter the no of hours:";
    cin >> hours;

    if (hours >= 9 && hours <= 18)
    {
        cout << "Working"<< endl;
    }
    else
    {
        cout << "Leisure"<< endl;
    }
    return 0;
}