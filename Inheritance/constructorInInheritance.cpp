#include <iostream>
using namespace std;
class Base
{
public:
    Base()
    {
        cout << "Param of base" << endl;
    }
    Base(int x)
    {
        cout << "Param of base: " << x << endl;
    }
};
class Derived : public Base
{
public:
    Derived()
    {
        cout << "Derived of Base" << endl;
    }
    Derived(int a)
    {
        cout << "Derived of Base: " << a << endl;
    }
    Derived(int x, int a) : Base(x)
    {
        cout << "Derived of Base: " << x << " and " << a << endl;
    }
};
int main()
{
    Derived d;
    Derived d2(20, 10);
}