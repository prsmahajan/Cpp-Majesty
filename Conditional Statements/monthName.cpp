#include <iostream>
using namespace std;
int main()
{
    int day;
    cout << "Enter Day no. :";
    cin >> day;
    if (day == 1)
        cout << "January" << endl;
    else if (day == 2)
        cout << "February" << endl;
    else if (day == 3)
        cout << "March" << endl;
    else if (day == 4)
        cout << "April" << endl;
    else if (day == 5)
        cout << "May" << endl;
    else if (day == 6)
        cout << "June" << endl;
    else if (day == 7)
        cout << "July" << endl;
    else if (day == 8)
        cout << "August" << endl;
    else if (day == 9)
        cout << "September" << endl;
    else if (day == 10)
        cout << "October" << endl;
    else if (day == 11)
        cout << "November" << endl;
    else if (day == 12)
        cout << "December" << endl;
    else
        cout << "Invalid Day no. !" << endl;
    return 0;
}