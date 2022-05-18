#include <iostream>
using namespace std;
class Complex
{
private:
    int real, img;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }
    Complex operator+(Complex x)
    {
        Complex temp;
        temp.real = real + x.real;
        temp.img = img + x.img;
        return temp;
    }
    void print()
    {
        cout << real << " + i" << img << endl;
    }
};
int main()
{
    Complex c1(4, 5);
    Complex c2(5, 1);
    Complex c3;
    c3 = c1 + c2;
    c3.print();
    return 0;
}