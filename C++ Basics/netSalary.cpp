#include <iostream>
using namespace std;

int main()
{
    float basicSalary, percOfAllow, percOfDeduc, netSalary;
    cout << "Enter your Basic Salary:";
    cin >> basicSalary;
    cout << "Enter your percentage of Allowances:";
    cin >> percOfAllow;
    cout << "Enter your percentage of Deductions:";
    cin >> percOfDeduc;

    netSalary = (basicSalary + (basicSalary * percOfAllow) / 100 - (basicSalary * percOfDeduc) / 100);

    cout << netSalary << endl;
    return 0;
}