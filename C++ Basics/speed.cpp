#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int u, v, a;
    float speed;
    cout << "Enter any 3 no\''s:";
    cin >> u >> v >> a;
    speed = (v * v - u * u) / (2 * a);
    cout << "Speed is:" << speed << endl;
    return 0;
}
