#include <iostream>
using namespace std;

int main()
{
    float bill;
    float discount = 0.0f;

    cout << "Enter bill amount:";
    cin >> bill;
    if (bill >= 100 && bill < 500)
    {
        discount = bill * 10 / 100;
    }
    else if (bill > 500)
    {
        discount = bill * 20 / 100;
    }

    cout << "Bill is:" << bill;
    cout << endl
         << "Discount is:" << discount;
    cout << endl
         << "Discounted Bill is:" << bill - discount;
    return 0;
}