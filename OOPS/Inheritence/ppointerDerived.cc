#include <iostream>
using namespace std;
class Base
{
    int var = 10;

public:
    void fun()
    {
        cout << var << endl;
    }
};
class Derived : public Base
{
    int var = 20;

public:
    void fun()
    {
        cout << var << endl;
    }
};
int main()
{
    Base *base = new Base();
    Derived der;
    base = &der;
    base->fun();
    Derived *derived = new Derived();
    derived->fun();
}