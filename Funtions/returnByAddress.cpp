#include <iostream>
using namespace std;

// int swap(int *a, int *b) // Formal Arguments
// {
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main()
// {
//     int x = 10, y = 20; // Actual Arguments
//     swap(&x, &y);
//     cout << x << " " << y;
//     return 0;
// }

int *fun(int n)
{
    int *p = new int[n];
    for (int i = 0; i < n; i++)
        p[i] = i + 1;
    return p;
}
int main()
{
    int *ptr = fun(5);
    for (int i = 0; i < 5; i++)
        cout << i << endl;
}