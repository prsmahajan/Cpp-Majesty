#include <iostream>
using namespace std;
class Test2;
class Test
{
private:
    int a;

protected:
    int b;

public:
    int c;
    friend Test2;
};
class Test2
{
public:
    Test t;
    void yoo()
    {
        t.a = 5;
        t.b = 2;
        t.c = 3;
        cout << t.a << endl;
        cout << t.b << endl;
        cout << t.c << endl;
    }
};
int main()
{
    Test2 out;
    out.yoo();
}