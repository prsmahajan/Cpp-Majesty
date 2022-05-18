#include <iostream>
using namespace std;
int sum(int a, int b)
{
    return a + b;
}
float sum(float a, double b)
{
    return a / b;
}
int sum(int a, int b, int c)
{
    return a * b + c;
}

int main()
{
    cout << sum(4, 1) << endl;
    cout << sum(5.12f, 10.224) << endl;
    cout << sum(12, 2, 12) << endl;
    return 0;
}