#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter the no of hours:";
    cin >> age;

    if (age >= 12 || age <= 60)
    {
        cout << "Eligible for the job!" << endl;
    }
    else
    {
        cout << "Not Eligible for the job!" << endl;
    }
    return 0;
}