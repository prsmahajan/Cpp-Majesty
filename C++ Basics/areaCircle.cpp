#include <iostream>
using namespace std;

int main()
{
    int area, height, breadth;
    cout << "Enter height and breadth:";
    cin >> height >> breadth;

    area = (breadth * height) / 2;

    cout << "Area of a triangle is:" << area;
    return 0;
}