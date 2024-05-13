#include <iostream>
#define fun(x) x + 10;
inline int fun1(int x)
{
    // No Conditional Statements
    // Simple
    // No Switch Case
    // No Recurssion
    // No Loops
    x = x + 20;
    x = x * 30;
    cout << x << " ";
    return x + 10;
}
using namespace std;
class A
{
protected:
    int x = 10, y = 20;
};
class B : public A
{
public:
    void display()
    {
        x++;
        y++;
        cout << x << " " << y;
    }
};
int main()
{
    B b;
    b.display();
    int x;
    x = fun(x);
    x = fun1(x);
}