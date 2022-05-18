#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c, d, rootone, rootTwo;
    cout << "Enter the values of a, b and c:";
    cin >> a >> b >> c;
    d = b * b - 4 * a * c;
    if (d == 0)
    {
        cout << "Roots are real and equal";
    }
    else if (d > 0)
    {
        cout << "Roots are real and unequal";
        cout << endl
             << (-b + sqrt(d) * (2 * a));
        cout << endl
             << (-b - sqrt(d) * (2 * a));
    }
    else if (d < 0)
    {
        cout << "Roots are imaginary";
    }
    return 0;
}