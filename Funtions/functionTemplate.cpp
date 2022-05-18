#include <iostream>
using namespace std;
template <class T>
T maximum(T a, T b) { return a > b ? a : b; }
// int maximum(int a, int b)
// {
//     return a > b ? a : b;
// }
// float maximum(float a, float b)
// {
//     return a > b ? a : b;
// }

int main()
{
    cout << maximum(4, 1) << endl;
    cout << maximum(5.12f, 5.11f) << endl;
    return 0;
}