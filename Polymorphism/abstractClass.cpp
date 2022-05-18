// Three types of classes -
// 1.Concrete class are meant for reusability
// 2.both concrete and both pure virtual are meant both for reusability and polymorphism. this is also known as abstract class
// 3.all pure virtual are meant for polymorphism. this is also known as interface or abstract class
#include <iostream>
using namespace std;
class Base
{
public:
    virtual void fun1() = 0;
    virtual void fun2() = 0;
};
class Derived : public Base
{
public:
    void fun1()
    {
        cout << "fun1 of Derived" << endl;
    }
    void fun2()
    {
        cout << "fun2 of Derived" << endl;
    }
};
int main()
{
    Derived d;
    d.fun1();
    d.fun2();
}
