#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length, breadth;

public:
    Rectangle();                          // Constructors
    Rectangle(int l, int b);              // Constructors
    Rectangle(Rectangle &r);              // Constructors
    int getLength() { return length; };   // Accessors
    int getBreadth() { return breadth; }; // Accessors
    int setLength(int l);                 // Mutators
    int setBreadth(int b);                // Mutators
    int area();
    int perimeter();
    int isSquare(); // Enquiry Function
    ~Rectangle();   // Destructor
};

Rectangle::Rectangle()
{
    length = 1;
    breadth = 1;
}
Rectangle::Rectangle(int l, int b)
{
    length = l;
    breadth = b;
}
Rectangle::Rectangle(Rectangle &r)
{
    length = r.length;
    breadth = r.breadth;
}
int Rectangle::area() { return length * breadth; }
int Rectangle::perimeter() { return 2 * (length + breadth); }
int Rectangle::isSquare()
{
    return length == breadth;
}
Rectangle::~Rectangle() { cout << "Rectangle Destroyed"; }

int main()
{
    Rectangle r1(15, 15);
    cout << "Area: " << r1.area() << endl;
    if (r1.isSquare())
        cout << "Yes" << endl;
    return 0;
}