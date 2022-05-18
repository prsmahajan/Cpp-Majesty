#include <iostream>
using namespace std;

int main()
{
    int bill;
    int discount;

    cout << "Enter bill amount:";
    cin >> bill;
    cout << "Enter discount percentage:";
    cin >> discount;

    int afterDiscount = bill - (bill * discount / 100);

    cout << "After discount your bill is: " << afterDiscount;
    return 0;
}