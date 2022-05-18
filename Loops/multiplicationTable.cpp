#include <iostream>
using namespace std;
int main()
{
    int i = 1, n;
    cout << "Enter no.";
    cin >> n;
    cout << "Multiplication of " << endl;
    for (; i <= 10; i++)
    {
        cout << n << " X " << i << " is " << n * i << endl;
    }
    return 0;
}