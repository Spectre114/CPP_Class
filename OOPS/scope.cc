#include <iostream>
using namespace std;
class A
{

public:
    static int var1;
    void fun1()
    {
        cout << "Hello";
    }
    void fun() const
    {
        cout << "Hello World";
        // fun1(); we can only call const member functions through other const member functions
        cout << var1;
    }
};
class B : public A
{
public:
    int var1 = 10;
    void fun()
    {
        cout << "Hello World";
    }
};
int A::var1 = 20;
int main()
{

    A a;
    a.fun();
    A *a2 = new A();
    // B b;
    cout << A::var1 << a.var1 << a2->var1;
    for (int i = 0; i < 5; i++)
    {
        static int x = 0; // initialize the variable only once
        x++;
        cout << x;
    }
}