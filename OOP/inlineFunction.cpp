#include <iostream>
using namespace std;
class Line
{
public:
    void lavda()
    {
        cout << "Inline Function" << endl;
    }
    void nonInLine();
    inline void lavdaInline();
};
void Line::nonInLine()
{
    cout << "Non Inline hu chumitya" << endl;
}
void Line::lavdaInline()
{
    cout << "Inline hu madarchod" << endl;
}

int main()
{
    Line l1;
    l1.lavda();
    l1.nonInLine();
    l1.lavdaInline();
}