#include <iostream>
using namespace std;
class Base
{
public:
    int a;
    void display()
    {
        cout << "display of base: " << a << endl;
    }
};
class Derived : public Base
{
public:
    void show()
    {
        cout << "display of derived" << endl;
    }
};
int main()
{
    Derived d;
    d.a = 10;
    d.display();
    d.show();
    return 0;
}