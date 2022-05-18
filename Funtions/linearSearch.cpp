#include <iostream>
using namespace std;

int Search(int A[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (key == A[i])
            return i;
    }
    return 0;
}

int main()
{
    int A[] = {2, 4, 5, 7, 1, 9, 12, 15};
    int k;
    cout << "Enter an element to be searched: ";
    cin >> k;
    int index = Search(A, 9, k);
    cout << "Element found at index: " << index << endl;
    return 0;
}