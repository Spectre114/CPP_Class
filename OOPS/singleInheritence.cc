#include <iostream>
using namespace std;
class Parent
{
protected:
    int a = 10, b = 20;
    void show()
    {
        cout << a << b;
    }
};
class Child : public Parent
{
public:
    void show(int x)
    {
        cout << x;
    }
    void show()
    {
        cout << a << b;
    }
};
int main()
{
    Child obj;
    obj.show(10);
    obj.show();
}