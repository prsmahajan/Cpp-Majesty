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
    friend Complex operator+(Complex c1, Complex c2);
    void print()
    {
        cout << real << " + i" << img << endl;
    }
};
Complex operator+(Complex c1, Complex c2)
{
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;
    return temp;
}
int main()
{
    Complex c1(4, 5);
    Complex c2(5, 1);
    Complex c3;
    c3 = c1 + c2;
    c3.print();
    return 0;
}