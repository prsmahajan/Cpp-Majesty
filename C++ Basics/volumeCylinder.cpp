#include <iostream>
using namespace std;
int main()
{
    float volume, radius, height;
    const float PI = 3.142f;
    cout << "Enter the value of radius and height:";
    cin >> radius >> height;

    volume = PI * (radius * radius) * height;
    cout << "Volume of cylinder is:" << volume;
    return 0;
}