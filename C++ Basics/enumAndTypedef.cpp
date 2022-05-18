#include <iostream>
using namespace std;

enum day
{
    mon = 1,
    tues,
    wed,
    thurs,
    fri
};
typedef int chutr;
int main()
{
    day d;
    chutr l1;
    l1 = 27;
    d = wed;
    cout << d << endl;
    cout << l1 << endl;
    return 0;
}