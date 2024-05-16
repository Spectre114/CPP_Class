#include <iostream>
using namespace std;
class Parent
{
public:
    Parent()
    {
        cout << "Parent class" << endl;
    }
    Parent(int x)
    {
        cout << "x: " << x << endl;
    }
};
class Child : public Parent
{
public:
    Child() : Parent()
    {
        Parent(10);
        cout << "Child class" << endl;
    }
    Child(int x, int y) : Parent(y)
    {
        cout << "Child Parameter " << x << " " << y << endl;
    }
};
int main()
{
    Child child(10, 20);
}