#include <iostream>
using namespace std;
class Base
{
public:
    void fun1() { cout << "fun1 of Base" << endl; }
};
class Derived : public Base
{
public:
    void fun2() { cout << "fun2 of Derived" << endl; }
};
int main()
{
    Derived d;
    Base *ptr;
    ptr = &d;
    ptr->fun1();
    // ptr->fun2(); // class Base has no member such as fun2
    // Base b;
    // Derived *ptr=&b; cannot set the value because base cannot inherit the value of derived
    return 0;
}