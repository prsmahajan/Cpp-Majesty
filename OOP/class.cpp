#include <iostream>
using namespace std;

class Rectangle
{
public:
    int length, breadth;
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
};
int main()
{
    Rectangle r1;
    r1.length = 13;
    r1.breadth = 14;
    cout << "Area of rectangle is: " << r1.area();
    cout << "\nPerimeter of rectangle is: " << r1.perimeter();
    return 0;
}