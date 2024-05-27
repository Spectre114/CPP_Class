#include <iostream>
using namespace std;
class A
{

public:
    static int var;
    void fun()
    {
        cout << "Non static";
    }
    static void display()
    {
        cout << var << endl;
        // fun(); //-> error
        // static functions cannot call non static functions
    }
};
int A::var = 10;
int main()
{
    A a, b, c;
    A::var = 20;
    a.display();
    b.display();
    c.display();
}