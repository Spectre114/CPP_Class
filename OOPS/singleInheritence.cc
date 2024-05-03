#include <iostream>
using namespace std;
class Parent
{
protected:
    int a, b;
};
class Child : public Parent
{
public:
    void show()
    {
        cout << a << b;
    }
};
int main()
{
    Child obj;
    obj.show();
}