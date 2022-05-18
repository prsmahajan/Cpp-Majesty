#include <iostream>
using namespace std;
// int main()
// {
//     int elements[] = {1, 2, 19, 124, 98, 971}, max = elements[0];

//     for (int i = 1; i < elements[i]; i++)
//     {
//         if (elements[i] > max)
//         {
//             max = elements[i];
//         }
//     }
//     cout << max;

//     return 0;
// }

int main()
{
    int A[10] = {2, 4, 6, 8, 12, 3, 5, 7, 9, 11};
    int max = INT_MIN;
    for (int i = 0; i <= 10; i++)
    {
        if (A[i] > max)
            max = A[i];
    }
    cout << max << endl;
}