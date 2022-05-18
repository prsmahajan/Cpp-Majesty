#include <iostream>
using namespace std;
// int add(int a, int b)
// {
//     return a + b;
// }
// int add(int a, int b, int c)
// {
//     return a + b + c;
// }
int add(int a, int b, int c = 0)
{
    return a + b + c;
}

int main()
{
    cout << add(4, 1) << endl;
    cout << add(12, 4, 1) << endl;
    cout << add(12, 4, 0) << endl;
    return 0;
}