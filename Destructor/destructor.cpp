#include <iostream>
using namespace std;
class Test
{
    int *p;

public:
    Test()
    {
        p = new int[10];
        cout << "Constructor Test" << endl;
    }
    ~Test()
    {
        delete[] p;
        cout << "Destructor Test" << endl;
    }
};
void fun()
{
    // Test t;
    Test *t = new Test();
    delete t;
}
int main()
{
    fun();
}