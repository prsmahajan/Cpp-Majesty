#include <iostream>
using namespace std;
class Parent
{
public:
    void display()
    {
        cout << "function of parent" << endl;
    }
};
class Child : public Parent
{
public:
    void display()
    {
        cout << "function of child" << endl;
    }
};
int main()
{
    Parent p;
    Child c;
    p.display();
    c.display();
}