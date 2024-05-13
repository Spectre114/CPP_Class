#include <iostream>
using namespace std;
class A
{
protected:
    int a = 10;
};
class B
{
public:
    void display()
    {
        cout << 'a' << " " << endl;
    }
};
class C : public B, public A
{
public:
    void display()
    {
        B b;
        cout << a << " " << endl;
        b.display();
    }
};
int main()
{
    C c;
    c.display();
}