#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c, rootOne, rootTwo;
    cout << "Enter values of a, b and c:";
    cin >> a >> b >> c;

    rootOne = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    rootTwo = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

    cout << "Quadratic equation is:\n"
         << rootOne << endl
         << rootTwo;
    return 0;
}