#include <iostream>
using namespace std;
class A
{
protected:
    int a = 10;
    void display()
    {
        cout << a << " ";
    }
};
class B : virtual public A
{
};
class C : virtual public A
{
};
class D : public B, public C
{
public:
    void display()
    {
        cout << a << " ";
    }
};
int main()
{
    D d;
    d.display();
}