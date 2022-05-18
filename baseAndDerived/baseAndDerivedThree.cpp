#include <iostream>
using namespace std;
class BasicCar
{
public:
    void start()
    {
        cout << "Car Started" << endl;
    }
};
class AdvCar : public BasicCar
{
public:
    void playMusic()
    {
        cout << "Music Playing" << endl;
    }
};

int main()
{
    BasicCar a;
    // AdvCar *ptr=&a; //a value of type "BasicCar *" cannot be used to initialize an entity of type "AdvCar *"
    // AdvCar a;
    // BasicCar *ptr = &a;
    // ptr->start();
    // ptr->playMusic(); // Basic Car does not have any function such as playMusic()
}