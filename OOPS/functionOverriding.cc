#include <iostream>
using namespace std;
class Parent
{
private:
    int x = 10;

public:
    void add() const
    {
        // ++x;
        cout << x;
    }
    void noconst()
    {
        ++x;
        cout << x;
    }
};
class Child : public Parent
{
public:
    void add(int a, int b)
    {
        cout << a * b << endl;
    }
};
int main()
{
    const Parent parent;
    parent.add();
    // parent.noconst();
}