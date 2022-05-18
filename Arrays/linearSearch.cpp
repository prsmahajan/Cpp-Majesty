#include <iostream>
using namespace std;
int main()
{
    int elements[5], i, key, n = 5;
    cout << "Enter the numbers:";
    for (i = 0; i < n; i++)
    {
        cin >> elements[i];
    }
    cout << "Enter the key:";
    cin >> key;
    for (i = 0; i < n; i++)
    {
        if (key == elements[i])
        {
            cout << "Key found at " << i;
        }
    }
    cout << "\nNot found";
    return 0;
}