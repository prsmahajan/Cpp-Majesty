#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter two nos:";
    cin >> a >> b;

    if (b == 0)
    {
        cout << "Division is zero!!";
    }
    else
    {
        c = a / b;
        cout << "\t" << c << endl;
    }
    return 0;
}