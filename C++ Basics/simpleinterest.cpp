#include <iostream>
using namespace std;

int main()
{
    float p, r, t, simpleInterest;
    cout << "Enter the values of p, r and t:";
    cin >> p >> r >> t;

    simpleInterest = (p * r * t) / 100;
    cout << "Simple Interest:" << simpleInterest;
    return 0;
}