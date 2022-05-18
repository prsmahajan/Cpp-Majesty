#include <iostream>
using namespace std;
int min(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}
float min(float a, double b)
{
    if (a > b)
    {
        return b;
    }
    else
        return a;
}

int main()
{
    cout << min(4, 1) << endl;
    cout << min(5.12f, 10.224) << endl;
    return 0;
}