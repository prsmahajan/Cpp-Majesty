#include <iostream>
using namespace std;
class Outer
{
public:
    void fun() { i.display(); }
    class Inner
    {
    public:
        void display() { cout << "display of inner"; }
    };
    Inner i;
};
int main()
{
    // Outer::Inner i;
    // i.display();
    Outer o;
    o.fun();
}