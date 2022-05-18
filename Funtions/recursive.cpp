#include <iostream>
using namespace std;

int recursive(int n)
{
    // if (n > 0)
    // {
    //     cout << n << endl;
    //     recursive(n - 1);
    // }
    if (n > 0)
    {
        recursive(n - 1);
        cout << n << endl;
    }
    return 0;
}

int main()
{
    int a = 5;
    recursive(a);
    return 0;
}