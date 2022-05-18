#include <iostream>
using namespace std;
float add(float x, float y)
{
    float z = x + y;
    return z;
}

int main()
{
    float a = 10.25f, b = 23.7f, c;
    c = add(a, b);
    cout
        << "Sum of a and b is: " << c;
    return 0;
}
