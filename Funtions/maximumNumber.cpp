#include <iostream>
using namespace std;
float maxInput(int a, int b, float c)
{
    if (a > b && a > c)
    {
        return a;
    }
    else if (b > c)
    {
        return b;
    }
    else
        return c;
}
int main()
{
    int x = 10, y = 21;
    float z = 22.2, r;
    r = maxInput(x, y, z);
    cout << r << endl;
    return 0;
}