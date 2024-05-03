#include <iostream>
using namespace std;
class Parent
{
protected:
    int a, b;
};
class Child1 : public Parent
{
public:
    void show()
    {
        cout << a << b;
    }
};
class Child2 : public Child1
{
public:
    void get()
    {
        cout << a << b;
        show();
    }
};
int main()
{
    Child2 obj;
    obj.get();
}