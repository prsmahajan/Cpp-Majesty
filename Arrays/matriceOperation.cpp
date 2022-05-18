#include <iostream>
using namespace std;
int main()
{
    int a[2][3];
    int b[2][3];
    int c[2][3];
    cout << "Enter three each elements of a and b:\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
            cin >> b[i][j];
        }
        cout << endl;
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}