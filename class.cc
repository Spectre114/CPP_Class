#include <iostream>
using namespace std;
class Car // template -> abstract class - jiska object nhi hota
{
public:
    int var1 = 0, var2;
    // void fun1() void fun2()

    // pure virtual function
    friend void function(Car);
};
class Honda : public Car
{
public:
    void wheels()
    {
        cout << "This has 4 wheels";
    }
};
void function(Car car)
{
    cout << car.var1;
}
main()
{
    // have to make object to access class
    Honda honda;
    honda.wheels();
}