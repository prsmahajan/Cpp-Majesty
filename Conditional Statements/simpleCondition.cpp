#include <iostream>
using namespace std;

int main()
{
    int rollNo;
    cout << "Enter your roll number:";
    cin >> rollNo;

    if (rollNo < 1)
    {
        cout << "Invalid roll number";
    }
    else
    {
        cout << "Valid roll number";
    }
    return 0;
}