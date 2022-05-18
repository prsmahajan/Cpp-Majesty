#include <iostream>
using namespace std;
int power(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    else if (b % 2 == 0)
    {
        return power(a, b / 2) * power(a, b / 2);
    }
    else
        return a * power(a, b / 2) * power(a, b / 2);
}
int main()
{
    int m = 2, n = 3, j;
    j = power(m, n);
    cout << "Power of " << m << " to " << n << " is " << j << endl;
    m = 5, n = 4;
    j = power(m, n);
    cout << "Power of " << m << " to " << n << " is " << j << endl;
    return 0;
}