#include <iostream>
using namespace std;
int main()
{
    int count = 0;
    for (int i = 0; i <= 4; i++)
    {
        for (int j = 0; j <= 4; j++)
        {
            // count++;
            // cout << count << " ";
            if (i <= j)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
}