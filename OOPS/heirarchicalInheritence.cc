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
        cout << "Child 1";
    }
};
class Child2 : public Parent
{
public:
    void show()
    {
        cout << "Child 2";
    }
};
int main()
{
    Child1 obj1;
    Child2 obj2;
    obj1.show();
    obj2.show();
}