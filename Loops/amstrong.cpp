#include <iostream>
using namespace std;
int main()
{
    int n, r, m, sum = 0;
    ;
    cout << "Enter a no. ";
    cin >> n;
    m = n;
    while (n != 0)
    {
        r = n % 10;
        n = n / 10;
        sum += r * r * r;
    }
    if (sum == m)
        cout << "Amstrong no.";
    else
        cout << "Not a amstrong no.";
    cout << endl;
}