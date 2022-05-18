#include <iostream>
using namespace std;
int main()
{
    int firstNo, secondNo;
    cout << "Enter first no and second no:";
    cin >> firstNo >> secondNo;

    if (firstNo > secondNo)
    {
        cout << firstNo << endl;
    }
    else
    {
        cout << secondNo << endl;
    }

    return 0;
}