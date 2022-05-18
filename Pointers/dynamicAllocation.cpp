#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size of elements:";
    cin >> size;
    int *p = new int[size];
    cout << "The size is:" << size << endl;

    cout << "Enter new size:";
    cin >> size;
    p = new int[size];
    cout << "The new size is:" << size;
    return 0;
}