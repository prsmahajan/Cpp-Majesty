#include <iostream>
using namespace std;
class Parent
{
private:
    int a;

protected:
    int b;

public:
    int c;

    void funParent()
    {
        a = 10;
        b = 5;
        c = 15;
        cout << c;
    }
};
class Child : protected Parent
{
public:
    void funChild()
    {
        // a=10;
        b = 5;
        c = 15;
    }
};
class grandChild : public Child
{
public:
    void funGrandChild()
    {
        // a=10;
        b = 5;
        c = 15;
    }
};

int main()
{
    Parent g;
    g.funParent();
    return 0;
}