#include <iostream>
using namespace std;
class Base
{
public:
    virtual void display()
    {
        cout << "function of base" << endl;
    }
};
class Derived : public Base
{
public:
    void display()
    {
        cout << "function of derived" << endl;
    }
};
int main()
{
    // Base *p = new Derived();
    Derived d;
    Base *p = &d;
    p->display();
}