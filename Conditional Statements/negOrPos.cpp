#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter no:";
    cin >> num;

    if (num > 0)
    {
        cout << "Number is positive";
    }
    else
    {
        cout << "Number is negative";
    }
    return 0;
}