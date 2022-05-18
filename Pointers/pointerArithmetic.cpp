#include <iostream>
using namespace std;
int main()
{
    int A[] = {2, 3, 4, 5, 6};
    int *p = A, *q = &A[4];
    cout << *p << endl;
    p++;
    cout << *p << endl;
    p--;
    cout << *p << endl;
    // cout << *(p + 2) << endl;
    // cout << p << endl;
    // cout << p + 2 << endl;

    // cout << p << endl;
    // for (auto x : A)
    // {
    //     cout << *p << endl;
    //     p++;
    // }
    // cout << p << endl;

    // cout << q - p << endl;
    // cout << p - q << endl;

    return 0;
}