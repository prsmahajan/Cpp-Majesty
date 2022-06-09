#include <iostream>
using namespace std;
class Line
{
public:
    void inLine()
    {
        cout << "Inline Function" << endl;
    }
    void nonInLine();
    inline void codeInline();
};
void Line::inLine()
{
    cout << "Non Inline" << endl;
}
void Line::codeInline()
{
    cout << "Inline" << endl;
}

int main()
{
    Line l1;
    l1.inLine();
    l1.nonInLine();
    l1.codeInline();
}