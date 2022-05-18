#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length, breadth;

public:
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
    void setLength(int l)
    {
        if (l >= 0)
            length = l;
        else
            length = 0;
    }
    void setBreadth(int b)
    {
        if (b >= 0)
            breadth = b;
        else
            breadth = 0;
    }
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
};
int main()
{
    Rectangle r1;
    r1.setLength(19);
    r1.setBreadth(10);
    cout << r1.area() << endl;
    cout << r1.perimeter();
    return 0;
}