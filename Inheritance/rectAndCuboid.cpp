#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length, breadth;

public:
    Rectangle(int l = 1, int b = 1)
    {
        length = l;
        breadth = b;
    };
    Rectangle(Rectangle &r)
    {
        length = r.length;
        breadth = r.breadth;
    };
    int getLength() { return length; }
    int getBreadth() { return breadth; }
    void setLength(int l) { length = l; }
    void setBreadth(int b) { breadth = b; }
    int area() { return length * breadth; }
    int perimeter() { return 2 * (length + breadth); }
    bool isSquare() { return length == breadth; }
    // ~Rectangle();
};
class Cuboid : public Rectangle
{
private:
    int height;

public:
    Cuboid(int h)
    {
        height = h;
    }
    int getHeight() { return height; }
    void setHeight(int h) { height = h; }
    int volume() { return area() * height; }
};
int main()
{
    Cuboid c(5);
    c.setLength(4);
    c.setBreadth(3);
    Rectangle r(20, 21);
    cout << r.area() << endl;
    cout << c.volume() << endl;
    return 0;
}