#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double distance, x1, x2, y1, y2;
    cout << "Enter first point x1 and y1:";
    cin >> x1 >> y2;
    cout << "Enter second of x2 and y2:";
    cin >> x2 >> y2;

    distance = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
    cout<<"Distance between two points are:"<<distance<<endl;
    return 0;
}