#include <iostream>
using namespace std;
class A
{
protected:
    int a = 10;
};
class B : public A
{
public:
    void display()
    {
        cout << a << " ";
    }
};
class C : public B
{
public:
    void display()
    {
        cout << a << " ";
    }
};
int main()
{
    C c;
    c.display();
}