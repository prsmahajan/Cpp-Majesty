#include <iostream>
using namespace std;

int main()
{
    int m1, m2, m3, total;
    float average;
    cout << "Enter the yours marks of three subjects:";
    cin >> m1 >> m2 >> m3;
    total = m1 + m2 + m3;
    average = total / 3.0;
    if (average >= 60)
    {
        cout << "Your grade is 'A'!";
    }
    else if (average >= 35 && average <= 60)
    {
        cout << "Your grade is 'B'!";
    }
    else if (average <= 35)
    {
        cout << "Your grade is 'C'!";
    }

    return 0;
}