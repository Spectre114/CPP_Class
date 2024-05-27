#include <iostream>
using namespace std;
class Class2;
class Class1
{
    int var;

public:
    void getVal()
    {
        cout << "Enter the value: ";
        cin >> var;
    }
    friend void maxVar(Class1 c1, Class2 c2);
};
class Class2
{
    int var;

public:
    void getVal()
    {
        cout << "Enter the value: ";
        cin >> var;
    }
    friend void maxVar(Class1 c1, Class2 c2);
};
void maxVar(Class1 c1, Class2 c2)
{
    if (c1.var > c2.var)
    {
        cout << c1.var;
    }
    else
    {
        cout << c2.var;
    }
}
int main()
{
    Class1 c1;
    Class2 c2;
    c1.getVal();
    c2.getVal();
    maxVar(c1, c2);
}