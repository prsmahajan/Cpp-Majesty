#include <iostream>
using namespace std;
int main()
{
    int elements[10], i, key, n = 10, low = 0, high = 10, mid;
    cout << "Enter the numbers:";
    for (i = 0; i < n; i++)
    {
        cin >> elements[i];
    }
    cout << "Enter the key:";
    cin >> key;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (key == elements[mid])
        {
            cout << "Found at " << mid;
            break;
        }
        else if (key < elements[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    cout << "\nNot found";
    return 0;
}