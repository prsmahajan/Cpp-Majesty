#include <iostream>
using namespace std;
class Rectangle
{
public:
    void area() { cout << "area of rectangle" << endl; }
};
class Cuboid : public Rectangle
{
public:
    void volume() { cout << "volume of cuboid" << endl; }
};
int main()
{
    Rectangle r;
    // Cuboid *c = &r; // a value of type "Rectangle *" cannot be used to initialize
    // an entity of type "Cuboid *"
    /*
    Cuboid c;
    c.area();
    c.volume();
    Rectangle *ptr = &c;
    ptr->area();
    ptr->volume(); //Rectangle has no volume function access
    */
    return 0;
}