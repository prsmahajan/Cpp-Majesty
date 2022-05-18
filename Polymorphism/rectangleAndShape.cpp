#include <iostream>
using namespace std;
class Shape
{
public:
    virtual float area() = 0;
    virtual float perimeter() = 0;
};

class Rectangle : public Shape
{
private:
    int length, breadth;

public:
    Rectangle(int l = 1, int b = 1)
    {
        length = l;
        breadth = b;
    }
    float area()
    {
        return length * breadth;
    }
    float perimeter()
    {
        return 2 * (length + breadth);
    }
};
int main()
{
    Shape *s = new Rectangle(10, 7);
    cout << "The area of rectangle is: " << s->area() << endl;
    cout << "The perimeter of rectangle is: " << s->perimeter() << endl;
}