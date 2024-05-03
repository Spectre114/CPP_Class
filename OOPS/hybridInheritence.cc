#include <iostream>
using namespace std;
class A
{
protected:
    void displayA()
    {
        cout << "Class A" << endl;
    }
};
class B : virtual public A
{
protected:
    void displayB()
    {
        cout << "Class B" << endl;
    }
};
class C : virtual public A
{
protected:
    void displayC()
    {
        cout << "Class C" << endl;
    }
};
class D : public B, public C
{
public:
    void displayD()
    {
        cout << "Class D" << endl;
        displayA();
    }
};
int main()
{
    D *d = new D();
    d->displayD();
}