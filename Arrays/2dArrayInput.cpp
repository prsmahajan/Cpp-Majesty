#include <iostream>
using namespace std;
int main()
{
    int a[2][3], i, j;
    for (auto &x : a)
    {
        for (auto &y : x)
        {
            cin >> y;
        }
        cout << endl;
    }
    for (auto &x : a)
    {
        for (auto &y : x)
        {
            cout << y << " ";
        }
        cout << endl;
    }
    return 0;
}