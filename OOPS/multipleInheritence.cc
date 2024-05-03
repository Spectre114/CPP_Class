#include <iostream>
using namespace std;
class Parent1
{
protected:
    int a, b;
};
class Parent2
{
protected:
    int x, y;
};
class Child : public Parent1, public Parent2
{
public:
    void show()
    {
        cout << x << y << a << b;
    }
};
int main()
{
    Child obj;
    obj.show();
}